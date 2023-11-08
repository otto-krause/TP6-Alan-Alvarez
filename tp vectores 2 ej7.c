#include <stdio.h>

int main() {
	int tiempos[10];
	
	printf("Ingresa los tiempos de finalización de la carrera para 10 corredores:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &tiempos[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (tiempos[i] > tiempos[j]) {
				int temp = tiempos[i];
				tiempos[i] = tiempos[j];
				tiempos[j] = temp;
			}
		}
	}
	
	int primerPuesto = tiempos[0];
	int segundoPuesto = tiempos[1];
	int ultimoPuesto = tiempos[9];
	
	int sumaTiempos = 0;
	for (int i = 0; i < 10; i++) {
		sumaTiempos += tiempos[i];
	}
	float tiempoPromedio = (float)sumaTiempos / 10;
	
	printf("Primer puesto: %d segundos\n", primerPuesto);
	printf("Segundo puesto: %d segundos\n", segundoPuesto);
	printf("Último puesto: %d segundos\n", ultimoPuesto);
	printf("Tiempo promedio: %.2f segundos\n", tiempoPromedio);
	
	return 0;
}
