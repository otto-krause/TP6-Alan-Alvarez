#include <stdio.h>

int main() {
	int numeros[8];
	int n1, n2;
	
	printf("Ingresa 8 números enteros:\n");
	for (int i = 0; i < 8; i++) {
		scanf("%d", &numeros[i]);
	}
	
	printf("Ingresa dos números adicionales:\n");
	scanf("%d %d", &n1, &n2);
	
	int contadorN1 = 0, contadorN2 = 0;
	int posicionN1 = -1, posicionN2 = -1;
	
	for (int i = 0; i < 8; i++) {
		if (numeros[i] == n1) {
			contadorN1++;
			if (posicionN1 == -1) {
				posicionN1 = i + 1;
			}
		}
		if (numeros[i] == n2) {
			contadorN2++;
			if (posicionN2 == -1) {
				posicionN2 = i + 1;
			}
		}
	}
	
	if (contadorN1 > 0) {
		printf("%d aparece %d veces en la secuencia en la posición %d.\n", n1, contadorN1, posicionN1);
	}
	if (contadorN2 > 0) {
		printf("%d aparece %d veces en la secuencia en la posición %d.\n", n2, contadorN2, posicionN2);
	}
	
	if (contadorN1 == 0 && contadorN2 == 0) {
		printf("Los dos números no se encuentran en la secuencia inicial.\n");
	}
	
	return 0;
}
