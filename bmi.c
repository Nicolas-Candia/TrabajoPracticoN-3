#include <stdio.h>
int main(){

   int peso;
   int altura;
   float imc;

   printf("ingrese su peso en Kg:");
   scanf("%d",&peso);
   printf("ingrese su altura en Centimetros:");
   scanf("%d",&altura);

   imc = (float) (peso+altura/100)/2;

   printf("su indice de masa corporal es: %3.2f\n",imc);

   return 0;

	
}
