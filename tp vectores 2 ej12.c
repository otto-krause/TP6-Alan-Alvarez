#include <stdio.h>
#include <string.h>

int esPalindromo(const char *cadena) {
	int longitud = strlen(cadena);
	for (int i = 0, j = longitud - 1; i < j; i++, j--) {
		if (cadena[i] != cadena[j]) {
			return 0; 
		}
	}
	return 1;
}

int main() {
	char texto[100];
	
	printf("Ingresa un texto para verificar si es un palíndromo: ");
	gets(texto);
	
	if (esPalindromo(texto)) {
		printf("El texto es un palíndromo.\n");
	} else {
		printf("El texto no es un palíndromo.\n");
	}
	
	return 0;
}
