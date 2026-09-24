#include <stdio.h>
#define PI 3.141592

float calcularAreaRectangulo(float base, float altura){
	return base * altura;
}

float calcularPerimetroRectangulo(float base, float altura){
	return (base * 2) + (altura * 2);
}

float calcularAreaCirculo(float radio){
	return (radio * radio) * PI;
}

float calcularPerimetroCirculo(float radio){
	return PI * radio * 2;
}

void imprimirResultados(float area, float perimetro, int seleccion){

	if (seleccion == 1){
		
		printf("El area del rectangulo es: %.2f\nel perimetro del rectangulo es: %.2f.\n", area, perimetro);
	}else{

		printf("el area del circulo es: %.2f.\nel perimetro del circulo es: %.2f.\n", area, perimetro);
	}

}

int main (){
	
	int seleccion = 0;
	float longitud = 0;
	float altura = 0;
	float radio = 0;
	float areaRectangulo = 0;
	float perimetroRectangulo = 0;
	float areaCirculo = 0;
	float perimetroCirculo = 0;

	printf("Ingrese la figura que desea calcular:\n1)Rectangulo\t2)Circulo\n");

	do{
		scanf("%d", &seleccion);

		if (seleccion < 1 || seleccion > 2){

			printf("el numero ingresado es incorrecto\n");

		}

	}while (seleccion < 1 || seleccion > 2);

	if (seleccion == 1){

		printf("opción de rectangulo seleccionada\n");

		printf("ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);

		printf("ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		areaRectangulo = calcularAreaRectangulo(longitud, altura);
		perimetroRectangulo = calcularPerimetroRectangulo(longitud, altura);

		imprimirResultados(areaRectangulo, perimetroRectangulo, seleccion);
	} else{

		printf("opción de Circulo seleccionada\n");

		printf("ingrese el radio del circulo: ");
		scanf("%f", &radio);
		
		areaCirculo = calcularAreaCirculo(radio);
		perimetroCirculo = calcularPerimetroCirculo(radio);

		imprimirResultados(areaCirculo, perimetroCirculo, seleccion);
	}
	return 0;
}
