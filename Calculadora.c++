#include <iostream>
using namespace std;

int main () {
    int op;
    double n1,n2;

while (true) {
std::cout << "que quieres calcular? ";
std::cout << " 1: Suma ";
std::cout << " 2: Resta ";
std::cout << " 3: Multiplicacion ";
std::cout << " 4: Division ";
std::cout << " 5 Salir ";
std::cin >> op;

if (op == 5) {
    cout << "SALIENDO DE LA CALCULADORA...";
    break;
}

std::cout <<"ingresa el primer numero: ";
std::cin >> n1;
std::cout <<"ingresa el segundo numero: ";
std::cin >> n2;

switch(op) {
    case 1:
    cout << "RESULTADO: " << n1 + n2 << endl;
    break;
    case 2:
    cout << "RESULTADO: " << n1 - n2 << endl;
    break;
    case 3:
    cout << "RESULTADO: " << n1 * n2 << endl;
    break;
    case 4:
    cout << "RESULTADO: " << n1 / n2 << endl;
    break;
    }
    cout << "Mas operaciones";
    cout << endl;
}
return 0;

}
