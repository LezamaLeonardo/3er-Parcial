#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string personas[10];

    for (int i = 0; i < 10; ++i) {
        cout << "Digite un nombre para la posicion " << i + 1 << ": ";
        getline(std::cin, personas[i]);
    }

    
    for (int i = 0; i < 10; ++i) {
        cout << "El nombre en la posicion " << i + 1 << " es: " << personas[i] << endl;
    }

    return 0;
}