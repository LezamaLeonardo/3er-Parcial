#include <iostream>

int main() {
    int n1, n2, n3;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> n1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> n2;
    std::cout << "Ingresa el tercer numero: ";
    std::cin >> n3;

    if (n1 == 1 && n2 == 2 && n3 == 3) {
        std::cout << "Acceso permitido";
    } else {
        std::cout << "Acceso no permitido";
    }

    return 0;
}