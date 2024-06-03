#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, p;

    cout << "Digite el tamano del vector 1: ";
    cin >> t;

    vector<int> vector1(t);
    int num;
    int suma1 = 0;

    for (int i = 0; i < t; ++i) {
        cout << "Digite un numero: ";
        cin >> num;
        vector1[i] = num;
        suma1 += vector1[i]; 
    }

    cout << "Digite el tamano del vector 2: ";
    cin >> p;

    vector<int> vector2(p);
    int suma2 = 0;

    for (int i = 0; i < p; ++i) {
        cout << "Digite un numero: ";
        cin >> num;
        vector2[i] = num;
        suma2 += vector2[i]; 
    }

    cout << "Vector 1:\n";
    for (int i = 0; i < t; ++i) {
        cout << "Posicion " << i + 1 << ": " << vector1[i] << "\n";
    }
    cout << "Suma del vector 1: " << suma1 << "\n";

    cout << "Vector 2:\n";
    for (int i = 0; i < p; ++i) {
        cout << "Posicion " << i + 1 << ": " << vector2[i] << "\n";
    }
    cout << "Suma del vector 2: " << suma2 << "\n";

    return 0;
}