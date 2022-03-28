#include <stdio.h>
#define I2S(x) ((short *) x)

int main() {
    int i, x[10];

    for(i=0; i<10; i++) {
        x[i] = i; 
        // este es un for simple en donde se almacena a un arreglo los valores de i
    }

    // ¿Por qué se imprimen alternados con 0 los numeros asignados en el for anterior?
    for(i=0; i<10; i++) {
        printf("%d\n", *I2S(x+i));
    }
    // todo tiene que ver con este segundo for. S eobserva que *I2S es un apuntador, que pasa a la función x+1. en define se ve que se tiene definida como un short.  Aqui se intercalan los numeros hasta completar 10 secuencias. 
}