/* 2) Informar tr�s n�meros inteiros e imprimir a m�dia. */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int a,b,c,d;
  printf(" \n Escreva o primeiro n�mero \n");
  scanf("%d",&a);
  printf(" \n Escreva o segundo n�mero \n");
  scanf("%d",&b);
  printf(" \n Escreva o terceiro n�mero \n");
  scanf("%d",&c);
  d=(a+b+c)/3;
  printf(" \n\a A m�dia dos tr�s n�meros � de : \n");
  printf("%d",d);
}
