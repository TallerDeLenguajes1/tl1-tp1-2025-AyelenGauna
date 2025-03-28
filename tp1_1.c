#include <stdio.h> 

int main (){
  
  printf("Hola Mundo\n");

  int numero = 4, *pnumero;
  pnumero = &numero;
  
  printf("El contenido de lo que apunta el puntero: %d\n", *pnumero);
  printf("Lo que contiene de dato el puntero: %p\n", pnumero);
  printf("La direccion de memoria de la vble numero: %p\n", &numero);
  printf("Lo que contiene de dato la vble numero: %d\n", numero);
  printf("Tamaño de la vble numero: %lu bytes\n", sizeof(numero));

  return 0;  
}