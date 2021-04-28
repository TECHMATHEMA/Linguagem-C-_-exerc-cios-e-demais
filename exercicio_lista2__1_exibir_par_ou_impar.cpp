/* 4 - Faça um algoritmo para ler um número inteiro e informar se o número é par ou ímpar.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int b;
  printf("\n\n Escreva o número inteiro \n\n");
  scanf("%d",&b);
  if (b%2==0) {
  
printf(" PAR ");
}
else {

printf(" IMPAR ");
}
}
