#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;

    cout<<"digite el numero de paises:";
    cin>>n;

    vector<std::string>paises(n);
    string nombre;

    for(int i=0;i<n;++i){
        cout<<"digite pais"<<i+1<<": ";
        cin>>paises[i];
        }

    int pos;
    cout<<"digite la posicion:";
    cin>>pos;

    if(pos>= 1 && pos <= n){
        cout << "el pais que hay en la posicion" << pos <<" es: " << paises[pos-1]<< endl;
    }
    else{
        cout<<"posicion fuera de rango" << endl;
    }
    
    return 0;
    }