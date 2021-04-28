/*4) Ler um número inteiro e imprimir seu quadrado.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  float a;
  printf(" \n Escreva o número \n");
  scanf("%f",&a);
  printf("O quadrado do número é:");
  printf("%.1f",pow(a,2));
}
