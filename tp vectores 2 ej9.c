#include <stdio.h>

int main() {
	int vector[8];
	
	for (int i = 0; i < 8; i++) {
		scanf("%d", &vector[i]);
	}
	
	printf("Contenido del vector tal como fue ingresado:\n");
	for (int i = 0; i < 8; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			if (vector[i] < vector[j]) {
				int temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}
	}
	
	printf("Contenido del vector ordenado en forma decreciente:\n");
	for (int i = 0; i < 8; i++) {
		printf("%d ", vector[i]);
	}
	printf("\n");
	
	return 0;
}

