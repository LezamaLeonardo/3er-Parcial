#include <iostream>

int main() {
    int n,m;

    std::cout << "Digite el número de filas: ";
    std::cin >> n;
    std::cout << "Digite el número de columnas: ";
    std::cin >> m;

    int matriz[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << "Digite dato para la fila " << i+1 << " y columna " << j+1 << ": ";
            std::cin >> matriz[i][j];
        }
    }

    int sumaColumnas[m] = {0};

    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            sumaColumnas[j] += matriz[i][j];
        }
    }

    for (int j = 0; j < m; ++j) {
        std::cout << "La suma de los elementos de la columna " << j+1 << " es: " << sumaColumnas[j] << std::endl;
    }

    return 0;
}