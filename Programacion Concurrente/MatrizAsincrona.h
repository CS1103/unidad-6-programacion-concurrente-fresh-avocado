//
// Created by Gabriel Spranger Rojas on 2019-06-19.
//

#ifndef PROGRAMACION_CONCURRENTE_MATRIZASINCRONA_H
#define PROGRAMACION_CONCURRENTE_MATRIZASINCRONA_H

#include <thread>
#include <iostream>
#include <random>

const int NUM_HILOS = 1;

using namespace std;

template <class T>
class MatrizAsincrona {
    int filas;
    int columnas;
public:

    T** matriz;
    MatrizAsincrona(int filas, int columnas): filas{filas}, columnas{columnas} {
        matriz = new T* [filas]();
        for (int i = 0; i < filas; ++i) {
            matriz[i] = new T [columnas]();
        }
    }
    MatrizAsincrona(int filas, int columnas, random_device rd): filas{filas}, columnas{columnas} {
        matriz = new T* [filas];
        for (int i = 0; i < filas; ++i) {
            matriz[i] = new T [columnas];
        }
        for (int j = 0; j < filas; ++j) {
            for (int i = 0; i < columnas; ++i) {
                matriz[j][i] = static_cast<T>((rd()%5)+1);
            }
        }
    }

    void llenar(int i, int j, T item) {
        matriz[i][j] = item;
    }

    void multiplicar_matrices(unsigned int lim_inf, unsigned int lim_sup, MatrizAsincrona<T>& matrizAsincrona1, MatrizAsincrona<T>& matrizAsincrona2, MatrizAsincrona<T>& matrizAsincrona3) {
        T r;
        for (int i = lim_inf; i < lim_sup; ++i) {
            for (int j = 0; j < matrizAsincrona1.get_columnas(); ++j) {
                r = matrizAsincrona1.matriz[i][j];
                for (int k = 0; k < matrizAsincrona2.get_columnas(); ++k) {
                    matrizAsincrona3.matriz[i][k] += r*matrizAsincrona2.matriz[j][k];
                }
            }
        }
    }

    MatrizAsincrona operator*(MatrizAsincrona& m) {
        if (columnas == m.get_filas()) {
            MatrizAsincrona matrizAsincrona(filas, m.get_columnas());
            vector<thread> hilos;
            unsigned int lim_inf, lim_sup;
            for (int i = 0; i < NUM_HILOS; ++i) {
                lim_inf = i*(filas/NUM_HILOS);
                lim_sup = (i+1)*(filas/NUM_HILOS);                                              // ref(matriz)
                hilos.emplace_back(&MatrizAsincrona::multiplicar_matrices, this, lim_inf, lim_sup, ref(*this), ref(m), ref(matrizAsincrona));
            }
            for (int i = 0; i < NUM_HILOS; ++i) {
                hilos[i].join();
            }
            return matrizAsincrona;
        } else {
            throw string("ERROR en asincrona: ¡El numero de columnas de la 1era matriz debe ser igual al numero de filas de la 2da matriz!");
        }
    }
    unsigned int get_filas() { return filas; }
    unsigned int get_columnas() { return columnas; }
    void print() {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }

//    ~MatrizAsincrona() {
//        for (int i = 0; i < filas; ++i)
//            delete [] matriz[i];
//        delete [] matriz;
//    }
};


#endif //PROGRAMACION_CONCURRENTE_MATRIZASINCRONA_H
