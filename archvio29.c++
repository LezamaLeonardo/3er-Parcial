#include <iostream>
#include <vector>

int main() {
    int t;
    int acum = 0;

    std::cout << "Digite el tamaño del vector (arreglo): ";
    std::cin >> t;

    std::vector<int> vector(t);

    for (int i = 0; i < t; ++i) {
        
        std::cout << "Digite un numero: ";
        int num;
        std::cin >> num;
        vector[i] = num;  
        acum += vector[i];  
    }

    std::cout << "La suma de: ";
    for (int i = 0; i < t; ++i) {
        std::cout << vector[i];
        if (i != t - 1) {
            std::cout << " + ";
        }
    }
    std::cout << " es: " << acum << std::endl;

    std::cout << "El total es: " << acum << std::endl;

    return 0;
}