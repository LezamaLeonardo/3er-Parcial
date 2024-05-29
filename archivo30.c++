#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

vector<int> leerNumeros() {
    vector<int> numeros;
    int contador = 0;
    
    while (contador < 20) {
        int numero;
        cout << "Introduce un número entero (0 para terminar): ";
        cin >> numero;
        
        if (numero == 0) {
            break;
        }
        
        numeros.push_back(numero);
        contador++;
    }
    
    return numeros;
}

int main() {
    vector<int> vectorInverso = leerNumeros();
    
    
    reverse(vectorInverso.begin(), vectorInverso.end());
    
    cout << "Vector en orden inverso: ";
    for (int num : vectorInverso) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}