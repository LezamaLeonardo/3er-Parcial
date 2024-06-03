#include <iostream>
using namespace std;

int main() {
    int filas, columnas;

    cout << "Digite el numero de filas: ";
    cin >> filas;

    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Digite un numero para la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    cout << "La matriz ingresada es:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}