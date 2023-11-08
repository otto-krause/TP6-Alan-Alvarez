#include <stdio.h>

int main() {
	int gastos[10];
	int total = 0;
	int mayor = 0;
	
	int n;
	
	printf("Ingresa la cantidad de compras (máximo 10): ");
	scanf("%d", &n);
	
	if (n > 10) {
		printf("El número de compras no puede ser mayor que 10. Se utilizarán solo 10 elementos.\n");
		n = 10;
	}
	
	for (int i = 0; i < n; i++) {
		printf("Ingresa el gasto de la compra %d: $", i + 1);
		scanf("%d", &gastos[i]);
		
		total += gastos[i];
		
		if (gastos[i] > mayor) {
			mayor = gastos[i];
		}
	}
	
	printf("El mayor gasto fue de: $%d\n", mayor);
	printf("El monto total gastado es: $%d\n", total);
	
	return 0;
}
