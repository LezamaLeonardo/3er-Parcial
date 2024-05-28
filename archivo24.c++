#include <iostream>

int main() {
    int filas, columnas;

    std::cout << "Digite el numero de filas: ";
    std::cin >> filas;

    std::cout << "Digite el numero de columnas: ";
    std::cin >> columnas;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Digite un numero para la posicion [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    
    std::cout << "La matriz ingresada es:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}