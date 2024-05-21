#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, menor;

    cout << "Ingresa 5 numeros:\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    menor = n1;

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

    cout << "El menor numero es: " << menor << endl;

    return 0;
}