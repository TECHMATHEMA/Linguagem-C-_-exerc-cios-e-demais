/* 1 - Construir um algoritmo que leia dois n�meros e efetue a adi��o. Caso o valor somado seja maior que 20, este dever� ser apresentado somando-se a ele mais 8; 
caso o valor somado seja menor ou igual a 20, este dever� ser apresentado subtraindo-se 5.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int b,c,d;
  printf("\n\n Escreva o primeiro n�mero inteiro \n\n");
  scanf("%d",&b);
  printf("\n\n Escreva o segundo n�mero inteiro \n\n");
  scanf("%d",&c);
   d=b+c;
      if(d>20){
	  
      printf("\n\n O n�mero �: %d \n\n",d);
      printf("\n\n Somado com 8 �: %d \n\n",d+8);
      }
      else{
      printf("\n\n O n�mero �: %d \n\n",d);
      printf("\n\n Subtraido com 5 �: %d \n\n",d-5);
	  }
      
}
	  
