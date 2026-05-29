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
   
   printf("tabla de referencia:\n");
   printf("índice     \t|\tcondicion\n");
   printf("-------------------------\n");
   printf("<18.5      \t|\tbajo peso\n");
   printf("18.5 a 24.9\t|\tnormal\n");
   printf("25 a 29.9\t|\tsobrepeso\n");
   printf(">30        \t|\tobesidad\n");
   return 0;

	
}
