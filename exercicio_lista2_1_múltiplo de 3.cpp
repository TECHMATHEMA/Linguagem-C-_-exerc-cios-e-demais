/* 5 - Escreva um algoritmo que receba um n�mero e imprima uma das mensagens: �� m�ltiplo de 3� ou �n�o � m�ltiplo de 3�.*/

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
  if (b%3==0) {
  
printf(" O n�mero � m�ltiplo de 3 ");
}
else {

printf(" O n�mero n�o � m�ltiplo de 3 ");
}
}
