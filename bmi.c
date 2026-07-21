#include <stdio.h>
int main(){

   int peso;
   int altura;
   float imc;
   
   do {

   printf("ingrese su peso en Kg:");

   scanf("%d",&peso);

   if (peso <= 0){

	   printf("el peso indicado es invalido, porfavor ingrese un numero correcto.\n");
   }

   } while (peso <= 0);
   
   do {

   printf("ingrese su altura en Centimetros:");

   scanf("%d",&altura);
   
   if (altura <= 0){
	   printf("La altura ingresada es invalida, porfavor ingrese un numero valido\n");
   }

   } while (altura <= 0);

   float altura_en_metros = (float) altura/100;

   imc = peso / (altura_en_metros * altura_en_metros);

   printf("su indice de masa corporal es: %3.2f\n",imc);
   
   printf("tabla de referencia:\n");
   printf("índice     \t|\tcondicion\n");
   printf("-------------------------\n");
   printf("<18.5      \t|\tbajo peso\n");
   printf("18.5 a 24.9\t|\tnormal\n");
   printf("25 a 29.9\t|\tsobrepeso\n");
   printf(">30        \t|\tobesidad\n");
   
   if (imc >= 30){
	   printf("Su estado es: \"obesidad\".\n");
   } else if (imc >= 25){
	   printf("Su estado es: \"sobrepeso\".\n");
   } else if (imc >= 18.5){
	   printf("Su estado es: \"normal\"\n.");
   } else {
	   printf("Su estado es: \"bajo peso\".\n");
   }
   return 0;
}
