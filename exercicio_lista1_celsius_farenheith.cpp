//Lista 1 
//4 - Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
float C ;
float F;

	printf("Digite a Temperatura em Graus Celsius ");
	scanf("%f",&C);
	F=(C*1.8)+32;
	printf("\n A temperatura em graus Celsius\n%f ",C);
	printf("\n A temperatura em graus Farenheith\n%f ",F);
}
