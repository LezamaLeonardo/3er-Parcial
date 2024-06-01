#include <iostream>
using namespace std;

int main () {
    int op;
    double n1,n2;

while (true) {
std::cout << "que quieres calcular? ";
std::cout << "1/suma";
std::cout << "2/resta";
std::cout << "3/multiplicacion";
std::cout << "4/division";
std::cout << "5/salir";
std::cin >> op;

if (op == 5) {
    cout << "SALIENDO DE LA CALCULADORA";
    break;
}

std::cout <<"ingresa el primer numero";
std::cin >> n1;
std::cout <<"ingresa el segundo numero";
std::cin >> n2;
return 0;

}
