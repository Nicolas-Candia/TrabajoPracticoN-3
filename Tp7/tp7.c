#include <stdio.h>
#define TAM 10

					//https://github.com/Nicolas-Candia/TrabajoPracticoN-3//

int main(){

	int masCaro = 0;
	int masBarato = 0;
	int validacionBarra = 0;
	float validacionPrecio = 0;
	int codigoBarras[TAM] = {0};
	float precios[TAM] = {0};

	printf("ingrese %d productos, se solicitará el codigo y precio:\n", TAM);

	for (int i = 0 ; i <= (TAM - 1) ; i++){

		do {

			printf("ingrese el codigo de barra del %d° producto (1-999999999): ", i + 1);
			scanf("%d", &validacionBarra);

			if (validacionBarra < 1 || validacionBarra > 999999999){
				printf("el valor ingresado es invalido.\n");
			}

		} while (validacionBarra < 1 || validacionBarra > 999999999);
		
		codigoBarras[i] = validacionBarra;

		do {

			printf("ingrese el precio del %d° producto: ", (i + 1) );
			scanf("%f", &validacionPrecio);

			if (validacionPrecio < 0){
				printf("el precio ingresado es invalido.\n");
			}
	
		} while (validacionPrecio < 0);

		precios[i] = validacionPrecio;
	}
	
	for (int i = 0 ; i <= (TAM - 1) ; i++) {
		if (i == 0){
			masCaro = i;
			masBarato = i;
			continue;
		}

		if (precios[i] > precios[masCaro] ) {
			masCaro = i;
		}

		if (precios[i] < precios[masBarato]){
			masBarato = i;
		}
	}

	for (int i = 0 ; i <= (TAM - 1) ; i++) {

		printf("\ncodigo: %d\nprecio: %.2f\n", codigoBarras[i], precios[i]);
	
	}
	
	printf("\nMas caro: [%d] %.2f\n", codigoBarras[masCaro], precios[masCaro]);
	printf("\nMas barato: [%d] %.2f\n", codigoBarras[masBarato], precios[masBarato]);

	return 0;

}
