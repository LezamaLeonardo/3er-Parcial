#include <iostream>
#include <vector>

int main() {
    int t, p;

    std::cout << "Digite el tamano del vector 1: ";
    std::cin >> t;

    std::vector<int> vector1(t);
    int num;
    int suma1 = 0;

    for (int i = 0; i < t; ++i) {
        std::cout << "Digite un numero: ";
        std::cin >> num;
        vector1[i] = num;
        suma1 += vector1[i]; 
    }

    std::cout << "Digite el tamano del vector 2: ";
    std::cin >> p;

    std::vector<int> vector2(p);
    int suma2 = 0;

    for (int i = 0; i < p; ++i) {
        std::cout << "Digite un numero: ";
        std::cin >> num;
        vector2[i] = num;
        suma2 += vector2[i]; 
    }

    std::cout << "Vector 1:\n";
    for (int i = 0; i < t; ++i) {
        std::cout << "Posicion " << i + 1 << ": " << vector1[i] << "\n";
    }
    std::cout << "Suma del vector 1: " << suma1 << "\n";

    std::cout << "Vector 2:\n";
    for (int i = 0; i < p; ++i) {
        std::cout << "Posicion " << i + 1 << ": " << vector2[i] << "\n";
    }
    std::cout << "Suma del vector 2: " << suma2 << "\n";

    return 0;
}