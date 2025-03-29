#include <stdio.h>
#include <math.h>

int cuadrado(int *n); //a) Haga una función que devuelva el cuadrado de un número
void cuadradoVoid(int *n); //b) Haga la función anterior, pero devolviendo un tipo void
void Invertir(int *a, int *b); //d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos
void orden (int *a, int *b); //e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.

int main() {
    int num1,num2;

    printf("\nIngrese un numero para calcular su cuadrado: ");
    scanf("%d",&num1);

    printf("\nEl cuadrado y contenido de la vble num1: %d",cuadrado(&num1));
    printf("\nLa direccion de memoria de la vble num1: %p\n", &num1);

    printf("\nIngrese otro numero para calcular su cuadrado: ");
    scanf("%d",&num2);

    cuadradoVoid(&num2);

    Invertir(&num1,&num2);

    orden(&num1,&num2);

    return 0;
}

int cuadrado(int *n){
    *n = pow(*n,2);
    return *n;
}

void cuadradoVoid(int *n){ //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    *n = pow(*n,2);
    printf("\nEl cuadrado y contenido de la vble num2: %d", *n);
    printf("\nLa direccion de memoria de la vble num2: %p\n", n);
}

void Invertir(int *a, int *b){ //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
    printf("\nValor de num1: %d \tValor de num2: %d\nINVERTIMOS", *a,*b);
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("\nValor actual de num1: %d \tValor actual de num2: %d\n", *a,*b);
}

void orden(int *a, int *b){ //deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande
    printf("\nEl valor de num1 es mayor al valor de num2?");
    if (*a > *b )
    {
        printf("\nSi, entonces intercambiamos sus valores para que num1 tenga el valor mas chico y num2 el mas grande");
        Invertir(a,b);
        printf("\nNuevo valor de num1: %d\tNuevo valor de num2: %d\n",*a,*b);
    } else
    {
        printf("\nNo, por lo tanto conservan sus valores actuales\n");   
        printf("\nValor de num1: %d\tValor de num2: %d\n",*a,*b);   
    }   
}