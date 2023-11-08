#include <stdio.h>

struct Empleado {
	char nombre[50];
	int fechaIngreso;  
	float sueldo;
};

int main() {
	struct Empleado empleados[3];
	int empleadoMasAntiguo = 0;
	
	for (int i = 0; i < 3; i++) {
		printf("Ingrese el nombre del empleado %d: ", i + 1);
		scanf("%s", empleados[i].nombre);
		
		printf("Ingrese la fecha de ingreso (año) del empleado %d: ", i + 1);
		scanf("%d", &empleados[i].fechaIngreso);
		
		printf("Ingrese el sueldo del empleado %d: $", i + 1);
		scanf("%f", &empleados[i].sueldo);
	}
	
	
	for (int i = 1; i < 3; i++) {
		if (empleados[i].fechaIngreso < empleados[empleadoMasAntiguo].fechaIngreso) {
			empleadoMasAntiguo = i;
		}
	}
	
	
	printf("El empleado más antiguo es: %s\n", empleados[empleadoMasAntiguo].nombre);
	printf("Sueldo: $%.2f\n", empleados[empleadoMasAntiguo].sueldo);
	
	return 0;
}
