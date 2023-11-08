#include <stdio.h>
#include <string.h>

int main() {
	char cadena[100];
	char cadenaInvertida[100];
	
	printf("Ingresa una cadena de caracteres: ");
	gets(cadena);
	
	int longitud = strlen(cadena);
	
	for (int i = 0; i < longitud; i++) {
		cadenaInvertida[i] = cadena[longitud - i - 1];
	}
	cadenaInvertida[longitud] = '\0';
	
	printf("Cadena invertida: %s\n");
	
	return 0;
}
