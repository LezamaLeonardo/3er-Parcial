#include <iostream>
#include <string>

int main() {
    
    std::string personas[10];

    for (int i = 0; i < 10; ++i) {
        std::cout << "Digite un nombre para la posicion " << i + 1 << ": ";
        std::getline(std::cin, personas[i]);
    }

    
    for (int i = 0; i < 10; ++i) {
        std::cout << "El nombre en la posicion " << i + 1 << " es: " << personas[i] << std::endl;
    }

    return 0;
}