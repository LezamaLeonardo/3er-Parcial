#include <iostream>
using namespace std;

int main () {
    int num[5];
    int numero;
    for(int i=0;i<5;++i)
    {
        std::cout <<"digite un numero para la posicion: " << i << ": ";
        std::cin>>numero;
        num[i]=numero;
        }
        for(int i=0;i<5; ++i){
            std::cout <<"el dato en la posicion" << i << " es: " << num[i] <<std::endl;
            }
        return 0;

}