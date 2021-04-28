/* 6 - Faça um algoritmo para ler dois números inteiros A e B e informar se A é divisível por B. */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int b,c;
  printf("\n\n Escreva o número inteiro A \n\n");
  scanf("%d",&b);
   printf("\n\n Escreva o número inteiro B \n\n");
  scanf("%d",&c);
  if (b%c==0) {
  
printf(" A é divisível por B ");
}
else {

printf("  A não é divisível por B ");
}
}
