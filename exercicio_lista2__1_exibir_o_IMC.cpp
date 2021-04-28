/* 9 - Construa um algoritmo para determinar se o indivíduo esta com um peso favorável.
Essa situação é determinada através do IMC (Índice de Massa Corpórea), que é definida
como sendo a relação entre o peso (PESO) e o quadrado da Altura (ALTURA) do
indivíduo.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  float peso,altura,IMC;
  printf("\n\n INFORME O PESO OU MASSA CORPÓREA EM QUILOGRAMAS  \n\n");
  scanf("%f",&peso);
  printf("\n\n INFORME A SUA ALTURA EM METROS  \n\n");
  scanf("%f",&altura);
  IMC=peso/pow(altura,2);
  
  	if(IMC<20){
			printf("\n\n\a Abaixo do peso" );
		
		}
		else if(IMC>20 && IMC<=25){
			printf("\n\n\a Peso normal" );
		
		}
		else if(IMC>25 && IMC<=30){
			printf("\n\n\a Sobre peso" );
		
		}
		else if(IMC>30 && IMC<=40){
			printf("\n\n\a OBESO" );
		
		}
		else{
			printf("\n\n\a OBESO MÓRBIDO" );
		
		}
}

