#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int main(){
 	char operacao;
 	float num1, num2;
	 
 	printf("/nEscolha a operacao aritmetica desejada [+-*/]:");
 	scanf("%c",&operacao);
 	printf("Entre com o primeiro numero:");
 	scanf("%f",&num1);
	printf("Entre com o segundo numero:");
 	scanf("%f",&num2);
 	
 	switch(operacao)
 	{
 		case'+':
 			printf("%.2f+%.2f=%.2f", num1,num2, num1+num2);
 			break; 
 		case'-':
 	    	printf("%.2f-%.2f=%.2f", num1,num2, num1-num2);
 			break;
 		case'*':
 			printf("%.2f*%.2f=%.2f", num1,num2, num1*num2);
 			break;
 		case'/':
 			printf("%.2f/%.2f=%.2f", num1,num2, num1/num2);
 			break;
 			
 		default:
 			printf("Voce digitou uma operacao invalida");
 			
	 } 
}

