/* 4 - Fa�a um algoritmo para ler um n�mero inteiro e informar se o n�mero � par ou �mpar.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int b;
  printf("\n\n Escreva o n�mero inteiro \n\n");
  scanf("%d",&b);
  if (b%2==0) {
  
printf(" PAR ");
}
else {

printf(" IMPAR ");
}
}
