#include <iostream>
#include <vector>
#include <string>

int main(){
    int n;

    std::cout<<"digite el numero de paises:";
    std::cin>>n;

    std::vector<std::string>paises(n);
    std::string nombre;

    for(int i=0;i<n;++i){
        std::cout<<"digite pais"<<i+1<<": ";
        std::cin>>paises[i];
        }

    int pos;
    std::cout<<"digite la posicion:";
    std::cin>>pos;

    if(pos>= 1 && pos <= n){
        std::cout << "el pais que hay en la posicion" << pos <<" es: " << paises[pos-1]<< std::endl;
    }
    else{
        std::cout<<"posicion fuera de rango" << std::endl;
    }
    
    return 0;
    }