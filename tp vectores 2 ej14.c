#include <stdio.h>
#include <stdlib.h>


float calcularPromedio(float notas[5]) {
	float suma = 0;
	for (int i = 0; i < 5; i++) {
		suma += notas[i];
	}
	return suma / 5;
}


void verificarApellido(char apellido[50]) {
	if (apellido[0] >= 'a' && apellido[0] <= 'z') {
		apellido[0] = (char)(apellido[0] - 32);
	}
}

int main() {
	char apellidos[3][50];
	float notas[3][5];
	float promedios[3];
	float promedioCurso = 0;
	
	for (int i = 0; i < 3; i++) {
		printf("Ingrese el apellido del alumno %d: ", i + 1);
		scanf("%s", apellidos[i]);
		verificarApellido(apellidos[i]);
		
		printf("Ingrese las notas (5) para el alumno %d:\n", i + 1);
		for (int j = 0; j < 5; j++) {
			scanf("%f", &notas[i][j]);
		}
		
		promedios[i] = calcularPromedio(notas[i]);
		promedioCurso += promedios[i];
	}
	
	promedioCurso /= 3;
	
	printf("Promedios de los alumnos:\n");
	for (int i = 0; i < 3; i++) {
		printf("Alumno %d: %s - Promedio: %.2f\n", i + 1, apellidos[i], promedios[i]);
	}
	
	printf("Promedio del curso: %.2f\n", promedioCurso);
	
	return 0;
}
