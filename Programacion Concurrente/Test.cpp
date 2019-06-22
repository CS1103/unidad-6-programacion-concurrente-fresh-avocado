#include "MatrizAsincrona.h"
#include "MatrizSincrona.h"
#include "catch.hpp"
#include <iostream>

const int a_filas_1 = 3;
const int a_columnas_1 = 3;
/// ==
const int a_filas_2 = 3;
const int a_columnas_2 = 3;



SCENARIO("Multiplicacion de dos matrices") {
    GIVEN("Dos matrices con numeros") {
        WHEN("Se multiplican las matrices de manera asincrona") {
            THEN("El resultado se guarda en una tercera matriz") {
                MatrizAsincrona<int> matrizAsincrona1(a_filas_1, a_columnas_1); /// matriz 1 llena con 1s
                for (int i = 0; i < a_filas_1; ++i) {
                    for (int j = 0; j < a_columnas_1; ++j) {
                        matrizAsincrona1.llenar(i, j, 1);
                    }
                }

                MatrizAsincrona<int> matrizAsincrona2(a_filas_2, a_columnas_2); /// matriz 2 llena con 3s
                for (int i = 0; i < a_filas_2; ++i) {
                    for (int j = 0; j < a_columnas_2; ++j) {
                        matrizAsincrona2.llenar(i, j, 3);
                    }
                }

                MatrizAsincrona<int> matrizresultado = matrizAsincrona1 * matrizAsincrona2;
                std::cout << "La matriz multiplicada de manera asincrona tiene como valores: " << std::endl;
                matrizresultado.print();

                ///Como una matriz está con 1s y la otra con 3s la matriz resultante esta llena de 9s
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        REQUIRE(matrizresultado.matriz[i][j] == 9);
                    }

                }
            }
        }WHEN("Se multiplican las matrices de manera sincrona") {
            THEN("El resultado se guarda en una tercera matriz") {
                MatrizSincrona<int> matrizSincrona1(a_filas_1, a_columnas_1); /// matriz 1 llena con 1s
                for (int i = 0; i < a_filas_1; ++i) {
                    for (int j = 0; j < a_columnas_1; ++j) {
                        matrizSincrona1.llenar(i, j, 1);
                    }
                }

                MatrizSincrona<int> matrizSincrona2(a_filas_2, a_columnas_2); /// matriz 2 llena con 3s
                for (int i = 0; i < a_filas_2; ++i) {
                    for (int j = 0; j < a_columnas_2; ++j) {
                        matrizSincrona2.llenar(i, j, 3);
                    }
                }

                MatrizSincrona<int> matrizresultado = matrizSincrona1 * matrizSincrona2;
                std::cout << "\nLa matriz multiplicada de manera sincrona tiene como valores: " << std::endl;
                matrizresultado.print();

                ///Como una matriz está con 1s y la otra con 3s la matriz resultante esta llena de 9s
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        REQUIRE(matrizresultado.matriz[i][j] == 9);
                    }

                }
            }
        }
    }
}