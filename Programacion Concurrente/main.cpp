#include <iostream>
#include <random>
#include <chrono>

#include "MatrizSincrona.h"
#include "MatrizAsincrona.h"

using namespace std;
using namespace std::chrono;

/// dimensiones matrices sincronas
const int s_filas_1 = 1024;
const int s_columnas_1 = 1024;
/// ==
const int s_filas_2 = 1024;
const int s_columnas_2 = 1024;

/// dimensiones matrices asincronas
const int a_filas_1 = 1024;
const int a_columnas_1 = 1024;
/// ==
const int a_filas_2 = 1024;
const int a_columnas_2 = 1024;

int main() {

    /// ASINCRONA

    MatrizAsincrona<int> matrizAsincrona1(a_filas_1, a_columnas_1); /// matriz 1
    for (int i = 0; i < a_filas_1; ++i) {
        for (int j = 0; j < a_columnas_1; ++j) {
            matrizAsincrona1.llenar(i, j, 1);
        }
    }

    MatrizAsincrona<int> matrizAsincrona2(a_filas_2, a_columnas_2); /// matriz 2
    for (int i = 0; i < a_filas_2; ++i) {
        for (int j = 0; j < a_columnas_2; ++j) {
            matrizAsincrona2.llenar(i, j, 3);
        }
    }

    MatrizAsincrona<int> matrizAsincrona3 (a_filas_1, a_columnas_2); /// matriz resultante
    try {
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        matrizAsincrona3 = matrizAsincrona1 * matrizAsincrona2;
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(t2 - t1).count();
        cout << "Multiplicacion Asincrona se demoro: " << duration << " milisegundos" << endl;
//        matrizAsincrona3.print();
    } catch (const string& error) {
        cerr << error << endl;
    }

    /// SINCRONA

    MatrizSincrona<int> matrizSincrona1(s_filas_1, s_columnas_1); /// matriz 1
    for (int i = 0; i < s_filas_1; ++i) {
        for (int j = 0; j < s_columnas_1; ++j) {
            matrizSincrona1.llenar(i, j, 1);
        }
    }

    MatrizSincrona<int> matrizSincrona2(s_filas_2, s_columnas_2); /// matriz 2
    for (int i = 0; i < s_filas_2; ++i) {
        for (int j = 0; j < s_columnas_2; ++j) {
            matrizSincrona2.llenar(i, j, 2);
        }
    }

    MatrizSincrona<int> matrizSincrona3(s_filas_1, s_columnas_2); /// matriz resultante
    try {
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        matrizSincrona3 = matrizSincrona1 * matrizSincrona2;
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(t2 - t1).count();
        cout << "Multiplicacion Sincrona se demoro: " << duration << " milisegundos" << endl;
//        matrizSincrona3.print();
    } catch (const string& error) {
        cerr << error << endl;
    }

    cout << endl << endl;



    return 0;
}