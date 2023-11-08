#include <stdio.h>

int main() {
	int vector[8];
	int positivos[8];
	int negativos[8];
	int contPositivos = 0;
	int contNegativos = 0;
	
	printf("Ingresa 8 números enteros (positivos y negativos, distintos de cero):\n");
	for (int i = 0; i < 8; i++) {
		scanf("%d", &vector[i]);
		if (vector[i] > 0) {
			positivos[contPositivos] = vector[i];
			contPositivos++;
		} else if (vector[i] < 0) {
			negativos[contNegativos] = vector[i];
			contNegativos++;
		}
	}
	
	printf("Contenido del vector tal como fue ingresado:\n");
	for (int i = 0; i < 8; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	
	for (int i = 0; i < contPositivos; i++) {
		for (int j = i + 1; j < contPositivos; j++) {
			if (positivos[i] < positivos[j]) {
				int temp = positivos[i];
				positivos[i] = positivos[j];
				positivos[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < contNegativos; i++) {
		for (int j = i + 1; j < contNegativos; j++) {
			if (negativos[i] > negativos[j]) {
				int temp = negativos[i];
				negativos[i] = negativos[j];
				negativos[j] = temp;
			}
		}
	}
	
	printf("Números positivos ordenados en forma decreciente:\n");
	for (int i = 0; i < contPositivos; i++) {
		printf("%d ", positivos[i]);
	}
	printf("\n");
	
	printf("Números negativos ordenados en forma creciente:\n");
	for (int i = 0; i < contNegativos; i++) {
		printf("%d ", negativos[i]);
	}
	printf("\n");
	
	return 0;
}
