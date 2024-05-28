#include <iostream>
using namespace std;

int main(){
    std::string arreglo[2];
    int arreglo2[3];

    arreglo[0]="Fernando";
    arreglo[1]="Oscar";

    arreglo2[0]=74;
    arreglo2[1]=56;
    arreglo2[2]=10;

    std::cout<<"arreglo 1:" << std::endl;
    for(int i=0;i<2;++i){
        std::cout<<"el dato en la posicion" << i+1<<" es: " << arreglo[i]<<std::endl;
        }
        std::cout<<"arreglo 2:"<<std::endl;
        for(int i=0;i<3;++i){
            std::cout<<"el dato en la posicion"<<i+1<<" es: "<< arreglo2[i]<< std::endl;
        }

        return 0;
}