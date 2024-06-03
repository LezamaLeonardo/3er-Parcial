#include <iostream>
using namespace std;

int main() {
    int n,m;

    cout << "Digite el número de filas: ";
    cin >> n;
    cout << "Digite el número de columnas: ";
    cin >> m;

    int matriz[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Digite dato para la fila " << i+1 << " y columna " << j+1 << ": ";
            cin >> matriz[i][j];
        }
    }

    int sumaColumnas[m] = {0};

    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            sumaColumnas[j] += matriz[i][j];
        }
    }

    for (int j = 0; j < m; ++j) {
        cout << "La suma de los elementos de la columna " << j+1 << " es: " << sumaColumnas[j] << endl;
    }

    return 0;
}