/* 9 - Construa um algoritmo para determinar se o indiv�duo esta com um peso favor�vel.
Essa situa��o � determinada atrav�s do IMC (�ndice de Massa Corp�rea), que � definida
como sendo a rela��o entre o peso (PESO) e o quadrado da Altura (ALTURA) do
indiv�duo.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  float peso,altura,IMC;
  printf("\n\n INFORME O PESO OU MASSA CORP�REA EM QUILOGRAMAS  \n\n");
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
			printf("\n\n\a OBESO M�RBIDO" );
		
		}
}

