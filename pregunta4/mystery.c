#include <stdio.h>
 
// 3. ¿Qué quieren decir los elementos de este arreglo?
int bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };


 
// 1. ¿Qué hace la función what?
unsigned int what(unsigned int num) {
    int i, result = 0; //declara variables, una incializada y la otra no
    i = sizeof(int)*2; // se asigna el valor de i como el tamaño de un entero multiplicado por 2

    while (i--) { // entra a un ciclo while donde va restando el valor de i 
        result += bits[num & 0xf];   
        /*
        aqui se le da un valor a result, con el valor de result anterior mas lo que se tenga el 
        valor en bits en la posicion num con un operador and que revisa que num y Oxf si existe en ambos

        */
        num >>= 4; 
        /* num hace un left shift de 4 y convierte el valor de la 
        variable al mismo de ese left shift
        */
    }

// 2. ¿Cuál sería el máximo número valor que puede tomar result?
    return result; // como esta definido como un int, su limite es de 2147483647
}
 

int main() {
    printf("%d\n", what(31));
    printf("%d\n", what(64));
    printf("%d\n", what(127));
    printf("%d\n", what(256));
    printf("%d\n", what(511));
    printf("%d\n", what(1024));
    printf("%d\n", what(2047));
    printf("%d\n", what(4096));

}