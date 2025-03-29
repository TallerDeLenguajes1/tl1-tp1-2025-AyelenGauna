#include <stdio.h>
#include <math.h>

int cuadrado(int n); //a) Haga una función que devuelva el cuadrado de un número
void cuadradoVoid(int n); //b) Haga la función anterior, pero devolviendo un tipo void

int main() {
    int num1,num2;

    printf("\nIngrese un numero para saber su cuadrado: ");
    scanf("%d",&num1);

    printf("\nSu cuadrado es: %d\n", cuadrado(num1));

    printf("\nIngrese otro numero para saber su cuadrado: ");
    scanf("%d",&num2);

    cuadradoVoid(num2);

    return 0;
}

int cuadrado(int n){
    return pow(n,2);
}

void cuadradoVoid(int n){ //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    int r = pow(n,2);
    printf("\nSu cuadrado es: %d", r);
    printf("\nEl contenido de la variable: %d", n);
    printf("\nSu direccion de memoria: %p", &n);
}