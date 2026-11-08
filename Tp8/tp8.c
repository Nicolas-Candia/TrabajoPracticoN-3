#include <stdio.h>
#include <stdlib.h>
#define TAM 20
															//https://github.com/Nicolas-Candia/TrabajoPracticoN-3
int cuantas_piezas(int max) {

	int n;
		do {
			printf("Cuántas piezas ingresará? ");
			scanf("%d", &n);
			if (n <= 0){
				printf("Error, el valor es invalido.\n");	
			}
			if (n > max){
				printf("Error, el valor es mayor al maximo permitido. Elija una cantidad entre 1 a 20.\n");
			}
		} while (n <= 0 || n > max);
	return n;
}

int rectificable(float diametro, float valor) {
	
	if (diametro > valor)
		return 1;
	else
		return 0;
}
int rechazada(float diametro, float valor) {
	if (diametro < valor)
		return 1;
	else
		return 0;
}

void cargar_piezas(float *p, int n){
	
	float valor_pieza = 0;

	for(int i = 0; n > i; i++){

		do{
			printf("ingrese el diametro de la pieza %d:", i);
			scanf("%f", &valor_pieza);

			if (valor_pieza <= 0 ){

				printf("ERROR, el valor es invalido\n");
			}	
		}while(valor_pieza <= 0);

	*(p+i) = valor_pieza;
		
	}			

}																																																										        
int contar(int (*parametro)(float, float), float max_min, float *p, int n){

	int contador = 0;
	for (int i = 0; i < n; i++){
		if (parametro(*(p+i), max_min)){
			contador = contador + 1;
		}

	}
	return contador;	
}

float* reserva_memoria(int n){
	float *p = malloc(n * sizeof(float));
	if (p == NULL || p == 0){
		printf("ERROR, no se pude almacenar memoria.");
		exit(1);
	}else {
		return p;
	}
}

void segregar(int (*parametro)(float, float), float max_min, float *p, int n, float *q){

	int j = 0;

	for (int i = 0; i < n; i++){

		if (parametro(*(p+i), max_min)){

			*(q + j) = *(p + i);
			j = j + 1;
		}
	}

}

void mostrar_piezas(char *mensaje, float *p, int n){

	printf("Piezas %s\n", mensaje);

	for (int i = 0; i < n; i++){
		printf("Diametro: %.2f\n", *(p+i));
	}

}

int main (void) {

	float diametros[TAM] = {0};
	
	int n;
	
	float max = 12;
	
	float min = 10;
	
	n = cuantas_piezas(TAM);
	
	cargar_piezas(diametros, n);
	
	int n_rectificar = contar(rectificable, max, diametros, n);
	
	float *p_rectificables = reserva_memoria(n_rectificar);
	
	segregar(rectificable, max, diametros, n, p_rectificables);
	
	int n_rechazar = contar(rechazada, min, diametros, n);
	
	float *p_rechazadas = reserva_memoria(n_rechazar);
	
	segregar(rechazada, min, diametros, n, p_rechazadas);
	
	mostrar_piezas("rectificables", p_rectificables, n_rectificar);
	
	
	mostrar_piezas("rechazadas", p_rechazadas, n_rechazar);
	
	return 0;

}
