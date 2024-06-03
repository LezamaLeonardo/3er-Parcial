#include <iostream>
#include <vector>

int main() {
    int t;
    int acum = 0;

    cout << "Digite el tamaño del vector (arreglo): ";
    cin >> t;

    vector<int> vector(t);

    for (int i = 0; i < t; ++i) {
        
        cout << "Digite un numero: ";
        int num;
        cin >> num;
        vector[i] = num;  
        acum += vector[i];  
    }

    cout << "La suma de: ";
    for (int i = 0; i < t; ++i) {
        cout << vector[i];
        if (i != t - 1) {
            cout << " + ";
        }
    }
    cout << " es: " << acum << endl;

    cout << "El total es: " << acum << endl;

    return 0;
}