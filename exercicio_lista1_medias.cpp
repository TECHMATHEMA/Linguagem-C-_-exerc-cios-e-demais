//Lista 1 
//1 - Informar três números inteiros e imprimir a média.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
	int num1,num2,num3,media;
	printf("Digite o primeiro numero:");
	scanf("%d",&num1);
	printf("Digite o segundo numero:");
	scanf("%d",&num2);
	printf("Digite o terceiro numero:");
	scanf("%d",&num3);
	media=(num1+num2+num3)/3;
	printf(" A media desses numeros e :%d",media);
}
