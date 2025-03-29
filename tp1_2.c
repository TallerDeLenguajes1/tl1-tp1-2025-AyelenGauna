#include <stdio.h>

int cuadrado(int n);

int main() {
    int num1,num2, resultado;

    printf("\nIngrese un numero para saber su cuadrado: ");
    scanf("%d",&num1);

    printf("\nSu cuadrado es: %d", cuadrado(num1));

    return 0;
}

int cuadrado(int n){
    return n * n;
}