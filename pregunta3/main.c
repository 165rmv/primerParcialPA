#include <stdio.h>
#include "rot13.h"

// 1. Proporciona los comandos para compilar un ejecutable usando la librería estática.
int main() {
	char p[] = "Hola Mundo Este String Se Codifica Y Decodifica";

	rot13(p);
	printf("%s\n", p);
	rot13(p);
	printf("%s\n", p);
	
}
/*
Para obtener ficheros

gcc -c rot13.c -o rot13.o

gcc es el gnu c compiler
-c evita que sea un ejecutable
-o nombra
*/
 
/*
Crear libreria 

ar -rv rot13.a rot13.o

se crea la libreria debe tener terminacion .a

*/