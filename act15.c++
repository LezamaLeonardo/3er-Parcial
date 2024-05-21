#include <stdio.h>

int main() {
    int num, menor, mayor, cont, sum;
    menor = mayor = sum = 0;

    printf("Ingrese 10 números enteros:\n");
    
    scanf("%d", &num);
    menor = mayor = sum = num;

    for (cont = 1; cont < 10; cont++) {
        scanf("%d", &num);
        sum += num;
        if (num < menor) {
            menor = num;
        }
        if (num > mayor) {
            mayor = num;
        }
    }

    printf("El número menor es: %d\n", menor);
    printf("La suma de los números es: %d\n", sum);
    printf("El número mayor es: %d\n", mayor);

    return 0;
}
