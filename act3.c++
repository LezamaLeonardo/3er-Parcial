//Marca con error su programa. main.c:1:10: fatal error:  iostream: No such file or directory
//modificar el programa para que ordene en descendente

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, t;

    cout << "Ingresa 3 numeros:";
    cin >> n1 >> n2 >> n3;

    if (n1 < n2) {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    if (n1 < n3) {
        t = n1;
        n1 = n3;
        n3 = t;
    }
    if (n2 < n3) {
        t = n2;
        n2 = n3;
        n3 = t;
    }

    cout << "Los numeros ordenados de mayor a menor son: " << n1 << ", " << n2 << ", " << n3 << endl;

    return 0;
}
