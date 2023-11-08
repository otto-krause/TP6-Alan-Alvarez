#include <stdio.h>

int main() {
	int vector[7];
	
	printf("Ingresa 7 valores enteros positivos:\n");
	for (int i = 0; i < 7; i++) {
		scanf("%d", &vector[i]);
	}
	
	for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 7; j++) {
			if (vector[i] > vector[j]) {
				int temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}
	}
	
	printf("Contenido del vector ordenado de menor a mayor:\n");
	for (int i = 0; i < 7; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	
	return 0;
}
