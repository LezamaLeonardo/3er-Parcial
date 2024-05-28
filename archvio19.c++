#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    std::cout <<"digite un numero para la posicion: ";
    std::cin>>n;

    std::string*person=new std::string[n];
    
        
        for(int i=0;i<n; ++i){
            std::cout <<"digite un nombre para la posicion" << i << ": ";std::cin>>person[i];
            }
            for(int i=0;i<n;++i){
                std::cout <<"El dato en la posicion" << i << " es: " << person[i] << std::endl;
            }

            delete[] person;
        return 0;

}