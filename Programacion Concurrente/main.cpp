#include <iostream>
#include <random>

#include "MatrizSincrona.h"
#include "MatrizAsincrona.h"

using namespace std;

int main() {

    random_device rd;

    MatrizSincrona<int> matrizSincrona1(10,10);
    MatrizSincrona<int> matrizSincrona2(10,10);

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            matrizSincrona2.llenar(i, j, 1);
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            matrizSincrona1.llenar(i, j, 2);
        }
    }

    MatrizSincrona<int> matrizSincrona3 (10,10);
    matrizSincrona3 = matrizSincrona1*matrizSincrona2;
    matrizSincrona3.print();

    cout << endl << endl;

    MatrizAsincrona<int> matrizAsincrona1(10,10);
    MatrizAsincrona<int> matrizAsincrona2(10,10);

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            matrizSincrona2.llenar(i, j, 1);
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            matrizSincrona1.llenar(i, j, 2);
        }
    }

    MatrizAsincrona<int> matrizAsincrona3 (10, 10);
    matrizAsincrona3 = matrizAsincrona1*matrizAsincrona2;
    matrizAsincrona3.print();

    return 0;
}