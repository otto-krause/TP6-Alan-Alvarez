#include <stdio.h>

int main() {
	int arreglo[10];
	int maximo, minimo;
	
	printf("Ingresa 10 números enteros:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arreglo[i]);
	}
	
	maximo = minimo = arreglo[0];
	int contMaximo = 1;
	int contMinimo = 1;
	
	for (int i = 1; i < 10; i++) {
		if (arreglo[i] > maximo) {
			maximo = arreglo[i];
			contMaximo = 1;
		} else if (arreglo[i] == maximo) {
			contMaximo++;
		}
		
		if (arreglo[i] < minimo) {
			minimo = arreglo[i];
			contMinimo = 1;
		} else if (arreglo[i] == minimo) {
			contMinimo++;
		}
	}
	
	printf("El valor máximo en el arreglo es %d, y se repite %d veces.\n", maximo, contMaximo);
	printf("El valor mínimo en el arreglo es %d, y se repite %d veces.\n", minimo, contMinimo);
	
	return 0;
}
