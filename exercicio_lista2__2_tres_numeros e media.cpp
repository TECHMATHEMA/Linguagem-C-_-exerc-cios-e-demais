/* 2) Informar três números inteiros e imprimir a média. */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  int a,b,c,d;
  printf(" \n Escreva o primeiro número \n");
  scanf("%d",&a);
  printf(" \n Escreva o segundo número \n");
  scanf("%d",&b);
  printf(" \n Escreva o terceiro número \n");
  scanf("%d",&c);
  d=(a+b+c)/3;
  printf(" \n\a A média dos três números é de : \n");
  printf("%d",d);
}
