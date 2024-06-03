

#include <iostream>
using namespace std;

int main() {
    int n1;

    cout << "Ingresa el primer numero: ";
    cin >> n1;
    
    if (n1 == 123) {
        std::cout << "Acceso permitido";
    } else {
        std::cout << "Acceso no permitido";
    }

    return 0;
}
