/* 5 - Escreva um algoritmo que receba um número e imprima uma das mensagens: “é múltiplo de 3” ou “não é múltiplo de 3”.*/

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
  if (b%3==0) {
  
printf(" O número é múltiplo de 3 ");
}
else {

printf(" O número não é múltiplo de 3 ");
}
}
