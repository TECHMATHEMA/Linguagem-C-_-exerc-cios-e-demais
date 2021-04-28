//Lista 2
//3) Escreva um programa que leia dois valores inteiros distintos e informe qual é o maior.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	int a,b;
	printf("\nDigite o primeiro numero inteiro qualquer :");
	scanf("%d",&a);
	printf("Digite o segundo numero inteiro qualquer :");
	scanf("%d",&b);
		if(a>b){
			printf("\n\n\a O numero maior e o  %d",a);
		
		}
		else{
			printf("\n\n\aO numero maior e o  %d",b);
		}
}
