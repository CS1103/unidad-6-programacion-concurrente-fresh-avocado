//
// Created by Gabriel Spranger Rojas on 2019-06-19.
//

#ifndef PROGRAMACION_CONCURRENTE_MATRIZSINCRONA_H
#define PROGRAMACION_CONCURRENTE_MATRIZSINCRONA_H

#include <iostream>
#include <random>

using namespace std;

template <class T>
class MatrizSincrona {
    int filas;
    int columnas;
public:
    T** matriz;

    MatrizSincrona(int filas1, int columnas1):filas{filas1}, columnas{columnas1} {
        matriz = new T* [filas1]();
        for (int i = 0; i < columnas1; ++i) {
            matriz[i] = new T [columnas1]();
        }
    }

    MatrizSincrona(int filas1, int columnas1, random_device rd):filas{filas1}, columnas{columnas1} {
        matriz = new T* [filas1];
        for (int i = 0; i < columnas1; ++i) {
            matriz[i] = new T [columnas1];
        }
        for (int j = 0; j < filas1; ++j) {
            for (int i = 0; i < columnas1; ++i) {
                matriz[j][i] = (rd()%5)+1;
            }
        }
    }

    void llenar(unsigned int i, unsigned int j, T item) {
        matriz[i][j] = item;
    }

    auto operator*(MatrizSincrona& m) {
        if (columnas == m.get_filas()) {
            MatrizSincrona<T> matrizSincrona(filas, m.get_columnas());
            for (int i = 0; i < filas; ++i) {
                for (int j = 0; j < m.get_columnas(); ++j) {
                    for (int k = 0; k < columnas; ++k) {
                        matrizSincrona.matriz[i][j] += matriz[i][k] * m.matriz[k][j];
                    }
                }
            }
            return matrizSincrona;
        } else {
            cout << "No se pueden multiplicar las matrices." << endl;
        }
    }

    int get_filas() {
        return filas;
    }

    int get_columnas() {
        return columnas;
    }

    void print() {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }
};

#endif //PROGRAMACION_CONCURRENTE_MATRIZSINCRONA_H
