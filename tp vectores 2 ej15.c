#include <stdio.h>
#include <string.h>

int main() {
	char texto[1000];
	int contadorVocales[5] = {0};'
	
	printf("Ingresa un texto: ");
	gets(texto);
	
	for (int i = 0; texto[i] != '\0'; i++) {
		char caracter = tolower(texto[i]); 
		
		if (caracter == 'a') {
			contadorVocales[0]++;
		} else if (caracter == 'e') {
			contadorVocales[1]++;
		} else if (caracter == 'i') {
			contadorVocales[2]++;
		} else if (caracter == 'o') {
			contadorVocales[3]++;
		} else if (caracter == 'u') {
			contadorVocales[4]++;
		}
	}
	
	printf("Cantidad de veces que se repite cada vocal:\n");
	printf("A: %d\n", contadorVocales[0]);
	printf("E: %d\n", contadorVocales[1]);
	printf("I: %d\n", contadorVocales[2]);
	printf("O: %d\n", contadorVocales[3]);
	printf("U: %d\n", contadorVocales[4]);
	
	return 0;
}
