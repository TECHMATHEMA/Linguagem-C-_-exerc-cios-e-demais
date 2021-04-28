/* 1 - Construir um algoritmo que leia dois números e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; 
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int b,c,d;
  printf("\n\n Escreva o primeiro número inteiro \n\n");
  scanf("%d",&b);
  printf("\n\n Escreva o segundo número inteiro \n\n");
  scanf("%d",&c);
   d=b+c;
      if(d>20){
	  
      printf("\n\n O número é: %d \n\n",d);
      printf("\n\n Somado com 8 é: %d \n\n",d+8);
      }
      else{
      printf("\n\n O número é: %d \n\n",d);
      printf("\n\n Subtraido com 5 é: %d \n\n",d-5);
	  }
      
}
	  
