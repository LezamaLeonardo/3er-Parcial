#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int tabla[4][3];
    int sumaColumnas[3] = {0, 0, 0};
    int mayorSuma = INT_MIN;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Introduce un valor para la posición [" << i << "][" << j << "]: ";
            cin >> tabla[i][j];
            sumaColumnas[j] += tabla[i][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        if (sumaColumnas[j] > mayorSuma) {
            mayorSuma = sumaColumnas[j];
        }
    }

    cout << "La mayor de las sumas de las columnas es: " << mayorSuma << endl;

    return 0;
}