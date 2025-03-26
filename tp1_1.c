//tp1_1

#include <stdio.h>
#include <math.h>

int main(){
    printf("Hola Mundo\n");
    int x = 10;
    int *puntero = &x;
    printf("Contenido del puntero:%d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero:%d\n", puntero);
    printf("Direccion de memoria de la variable:%d\n", &x);
    printf("Direccion de memoria del puntero:%d\n", &puntero);
    printf("Direccion de memoria del puntero:%zu\n", sizeof(x));
}
