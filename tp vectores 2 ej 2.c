#include <stdio.h>

int main() {
	int numeros[7];
	int mayor = 0;
	int indiceMayor = 0;
	
	printf("Ingresa 7 números enteros positivos:\n");
	
	for (int i = 0; i < 7; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &numeros[i]);
		
		if (numeros[i] > mayor) {
			mayor = numeros[i];
			indiceMayor = i;
		}
	}
	
	printf("El mayor número ingresado es %d y se encuentra en el elemento %d.\n", mayor, indiceMayor + 1);
	
	printf("Vector completo:\n");
	for (int i = 0; i < 7; i++) {
		printf("Elemento %d: %d\n", i + 1, numeros[i]);
	}
	
	return 0;
}
