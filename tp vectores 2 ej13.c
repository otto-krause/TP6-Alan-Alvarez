#include <stdio.h>

int main() {
	char texto[1000];
	
	printf("Ingresa un texto: ");
	gets(texto);
	
	for (int i = 0; texto[i] != '\0'; i++) {
		if (texto[i] >= 'a' && texto[i] <= 'z') {
			texto[i] = texto[i] - 32; 
		} else if (texto[i] >= 'A' && texto[i] <= 'Z') {
			texto[i] = texto[i] + 32;
		}
	}
	
	printf("Texto con letras invertidas: %s\n", texto);
	
	return 0;
}
