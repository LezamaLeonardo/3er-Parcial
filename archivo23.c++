#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0));
    int matriz[3][5];

    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            
            matriz[i][j] = rand() % 10;
        }
    }

    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}