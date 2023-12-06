#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Suma(int a, int b, int Matriz[a][b], int Matriz2[a][b], int resultado[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            resultado[i][j]= Matriz[i][j] + Matriz2[i][j];
    }
}
void ImprimirMatriz(int a, int b, int Matriz[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            printf("%d\t", Matriz[i][j]);
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    srand (time(NULL));
    int a,b;
    printf("Ingrese el numero de filas de la matriz\n"); //Solicitud de numeros de filas 
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de la matriz\n"); //Solicitud de numeros de columnas
    scanf("%d", &b);
    
    

    return 0;

}