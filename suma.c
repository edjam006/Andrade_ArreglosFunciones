#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Suma(int a, int b, int Matriz[a][b], int Matriz2[a][b], int resultado[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            resultado[i][j]= Matriz[i][j] + Matriz2[i][j]; //Funcion que realiza la suma de las matrices 
    }
}
void ImprimirMatriz(int a, int b, int Matriz[a][b]) { //Funcion encargada de realizar la impresion de la matriz 
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            printf("%d\t", Matriz[i][j]);
        printf("\n");
    }
}
int main(){

    srand (time(NULL));
    int a,b;
    printf("Ingrese el numero de filas de la matriz\n"); //Solicitud de numeros de filas 
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de la matriz\n"); //Solicitud de numeros de columnas
    scanf("%d", &b);

    int Matriz2 [a][b], Matriz[a][b], resultado [a][b];

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            Matriz[i][j] = rand() % 101; //Asignacion de numeros dentro de la matriz
        }
    }
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            Matriz2[i][j] = rand() % 101; // Asignacion de numeros dentro de la segunda matriz 
        } 
    }
    printf("Matriz 1:\n");
    ImprimirMatriz(a, b, Matriz); //Se llama la funcion imprimir matriz para que nos muestre la primera matriz 

    printf("Matriz 2:\n");
    ImprimirMatriz(a, b, Matriz2);//Se llama la funcion imprimir matriz para que nos muestre la segunda matriz 

    Suma(a,b,Matriz, Matriz2, resultado); //Esta funcion es la encargada de realizar la suma y en la funcion de la linea 50 imprime la matriz del resultado


    printf("\nSuma de Matrices:\n");
    ImprimirMatriz(a, b, resultado);
    

    return 0;

}