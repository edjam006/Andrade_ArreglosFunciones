#include <stdio.h>

void asignarvalor(int a, int b, int c, int Matriz[a][b], int k) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (k == c - 1) { // Condición para verificar si estamos en la última matriz cuando 'k' es igual a 'a - 1' ya que el indice de la matriz o arreglo siempre comienza desde 0 por lo que hay que retroceder un espacio con el - 1
                Matriz[i][j] = 1;  // Asigna 1 a todos los elementos de la última matriz
            } else {
                Matriz[i][j] = 0;  // Asigna 0 a todos los elementos de las demas matrices que no sea de la ultima matriz
            }
            printf("%d\t", Matriz[i][j]);  // Imprime cada elemento de la matriz
        }
        printf("\n");  // Salto de línea para la siguiente fila
    }
}

void ImprimirMatriz(int a, int b, int c) {
    int Matriz[a][b];  // La matriz se crea dentro de esta función

    for (int k = 0; k < c; k++) {
        printf("Matriz %d:\n", k + 1);
        asignarvalor(a, b, c, Matriz, k); // Llena la matriz actual con 1s o 0s. Si es la última matriz (k == c - 1), llena con 1, sino llena con 0, donde esa operacion esta en la funcion anterior.
        printf("\n");
    }
}

int main() {
    int a, b, c;
    
    printf("Ingrese cuantas matrices desea imprimir : \n"); // Solicitud de cuantas matrices desea imprimir el usuario
    scanf("%d", &c);
    printf("Ingrese el numero de filas que desea ingresar: \n"); // Solicitud de número de filas 
    scanf("%d", &a);
    printf("Ingrese el numero de columnas que desea ingresar: \n"); // Solicitud de número de columnas
    scanf("%d", &b);

    ImprimirMatriz(a, b, c); //Se llama a la funcion que imprime la matriz 

    return 0;
}

