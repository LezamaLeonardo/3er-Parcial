#include <stdio.h>

#define FILAS 4
#define COLUMNAS 3

int main() {
    int matriz[FILAS][COLUMNAS];
    int sumas[COLUMNAS] = {0};
    int i, j;

    
    printf("Ingrese los valores de la matriz de %d filas por %d columnas:\n", FILAS, COLUMNAS);
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (j = 0; j < COLUMNAS; j++) {
        for (i = 0; i < FILAS; i++) {
            sumas[j] += matriz[i][j];
        }
    }

    
    int max_suma = sumas[0];
    for (j = 1; j < COLUMNAS; j++) {
        if (sumas[j] > max_suma) {
            max_suma = sumas[j];
        }
    }

   
    printf("La mayor de las sumas de las columnas es: %d\n", max_suma);

    return 0;
}