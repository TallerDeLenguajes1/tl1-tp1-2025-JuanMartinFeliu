// punto 4

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int cuadradoDeUnNumero(int a){
    int cuadrado;
    cuadrado = a*a;
    return cuadrado;
}

void cuadradoDeUnNumeroVoid(int a){
    int cuadrado;
    cuadrado = a*a;
    printf("El cuadrado de %d es %d\n",a,cuadrado);
}

void direccionDeVariable(int a){
    int *puntero = &a;
    printf("El contenido de la variable es:%d\n",a);
    printf("La direccion de la variable es:%d\n",*puntero);
}

void invertir(int a, int b){
    int aux;
    printf("El valor de a es %d y de b es %d\n",a,b);
    aux = b;
    b = a;
    a = aux;
    printf("Ahora el valor de a es %d y de b es %d\n",a,b);
}

int main(){
    int a,b,h;
    printf("Ingrese el valor de las variables a y b:");
    scanf("%d %d",&a,&b);
    printf("\nEMPIEZAN LAS FUNCIONES\n");
    h = cuadradoDeUnNumero(a);
    printf("%d\n",h);
    cuadradoDeUnNumeroVoid(a);
    direccionDeVariable(a);
    invertir(a,b);


}

