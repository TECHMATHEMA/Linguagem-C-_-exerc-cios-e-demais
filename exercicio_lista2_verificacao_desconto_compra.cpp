//Lista 2
//7) Desenvolva um programa para calcular e mostrar o desconto no valor de uma compra (fornecido pelo usuário), de acordo com a tabela:
// tabela .. se 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float valor1,valord1,valord2,valord3;
	printf("\nDigite o valor da sua compra em reais :");
	scanf("%f",&valor1);
		if(valor1<=1000){
			valord1=valor1*0.9;
			printf("\n\n\a O valor da compra com desconto em reais sera de 10 por cento");
			printf("\nvalor com desconto=%.2f\n", valord1);
		
		}
	    else if(valor1>=1000 && valor1<=5000){
			valord2=valor1*0.8;
			printf("\n\n\a O valor da compra com desconto em reais sera de 20 por cento");
			printf("\nvalor com desconto=%.2f\n", valord2);
		}
		else{
			valord3=valor1*0.7;
			printf("\n\n\a O valor da compra com desconto em reais sera de 30 por cento");
			printf("\nvalor com desconto=%.2f\n", valord3);
		}
}
