#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(std::time(0));
    int matriz[3][5];

    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            
            matriz[i][j] = std::rand() % 10;
        }
    }

    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}