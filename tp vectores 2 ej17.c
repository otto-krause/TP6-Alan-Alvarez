#include <stdio.h>

struct Persona {
	char nombre[50];
	int diaNacimiento;
	int mesNacimiento;
	int anioNacimiento;
};


int calcularEdad(int diaNacimiento, int mesNacimiento, int anioNacimiento) {
	
	int anioActual = 2023;
	int edad = anioActual - anioNacimiento;
	
	if (mesNacimiento > 12 || (mesNacimiento == 12 && diaNacimiento > 31)) {
		return -1; 
	}
	
	if (mesNacimiento > 12 || (mesNacimiento == 12 && diaNacimiento > 31)) {
		return -1; 
	}
	
	if (mesNacimiento == 12 && diaNacimiento > 7) {
		return -1; 
	}
	
	if (mesNacimiento == 7 && diaNacimiento > 1) {
		return -1; 
	}
	
	if (mesNacimiento == 1 && diaNacimiento > 1) {
		return -1;
	}
	
	return edad;
}

int main() {
	struct Persona personas[3];
	
	for (int i = 0; i < 3; i++) {
		printf("Ingrese el nombre de la persona %d: ", i + 1);
		scanf("%s", personas[i].nombre);
		
		int dia, mes, anio;
		printf("Ingrese la fecha de nacimiento (DD MM AAAA) de la persona %d: ", i + 1);
		scanf("%d %d %d", &dia, &mes, &anio);
		
		int edad = calcularEdad(dia, mes, anio);
		
		if (edad == -1) {
			printf("Fecha no válida. Ingrese una fecha válida.\n");
			i--; 
		} else {
			personas[i].diaNacimiento = dia;
			personas[i].mesNacimiento = mes;
			personas[i].anioNacimiento = anio;
		}
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (calcularEdad(personas[i].diaNacimiento, personas[i].mesNacimiento, personas[i].anioNacimiento) >
				calcularEdad(personas[j].diaNacimiento, personas[j].mesNacimiento, personas[j].anioNacimiento)) {
				struct Persona temp = personas[i];
				personas[i] = personas[j];
				personas[j] = temp;
			}
		}
	}
	
	
	printf("Personas ordenadas por edad:\n");
	for (int i = 0; i < 3; i++) {
		int edad = calcularEdad(personas[i].diaNacimiento, personas[i].mesNacimiento, personas[i].anioNacimiento);
		printf("Nombre: %s - Fecha de nacimiento: %d/%d/%d - Edad: %d años\n", personas[i].nombre, personas[i].diaNacimiento, personas[i].mesNacimiento, personas[i].anioNacimiento, edad);
	}
	
	return 0;
}
