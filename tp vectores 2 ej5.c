#include <stdio.h>

int main() {
	int numeros[20];
	int pares[20];
	int impares[20];
	int num;
	int contPares = 0;
	int contImpares = 0;
	int i = 0;
	
	printf("Ingresa n�meros enteros (0 para terminar, m�ximo 20 n�meros):\n");
	
	do {
		printf("N�mero %d: ", i + 1);
		scanf("%d", &num);
		
		if (num != 0) {
			numeros[i] = num;
			if (num % 2 == 0) {
				pares[contPares] = num;
				contPares++;
			} else {
				impares[contImpares] = num;
				contImpares++;
			}
			i++;
		}
	} while (num != 0 && i < 20);
	
	printf("N�meros pares ingresados:\n");
	for (int j = 0; j < contPares; j++) {
		printf("%d ", pares[j]);
	}
	printf("\n");
	
	printf("N�meros impares ingresados:\n");
	for (int j = 0; j < contImpares; j++) {
		printf("%d ", impares[j]);
	}
	printf("\n");
	
	return 0;
}
