/* 6 - Fa�a um algoritmo para ler dois n�meros inteiros A e B e informar se A � divis�vel por B. */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int b,c;
  printf("\n\n Escreva o n�mero inteiro A \n\n");
  scanf("%d",&b);
   printf("\n\n Escreva o n�mero inteiro B \n\n");
  scanf("%d",&c);
  if (b%c==0) {
  
printf(" A � divis�vel por B ");
}
else {

printf("  A n�o � divis�vel por B ");
}
}
