#include <stdio.h>

int main() {
	int elementos[6];
	
	printf("Ingresa 6 elementos:\n");
	for (int i = 0; i < 6; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &elementos[i]);
	}
	
	printf("Contenido del vector:\n");
	for (int i = 0; i < 6; i++) {
		printf("Elemento %d: %d\n", i + 1, elementos[i]);
	}
	
	return 0;
}

