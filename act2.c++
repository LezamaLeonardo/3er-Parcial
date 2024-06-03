// agregar mayor 
// si hay iguales
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, menor,mayor;

    cout << "Ingresa 5 numeros:\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    menor = n1;
    mayor = n1;

    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }
    if (n4 < menor) {
        menor = n4;
    }
    if (n5 < menor) {
        menor = n5;
    }


   if (n2 > menor) {
        menor = n2;
    }
    if (n3 > menor) {
        menor = n3;
    }
    if (n4 > menor) {
        menor = n4;
    }
    if (n5 > menor) {
        menor = n5;
    }

    cout << "El menor numero es: " << menor << endl;
    cout << "el mayor número es:" << mayor <<
endl;

    return 0;
}
