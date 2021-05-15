/*1 - Faça um programa que mostre na tela todos os números de 1 a 50 ;
e depois essa mesma lista invertida (50 a 1) usando laço for.*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int main(void)

{
setlocale(LC_ALL, "Portuguese");
  int cont_a,cont_b; //variável de controle do loop
  printf(" \n\nContagem crescente de 1 ao 50\n\n");
  for(cont_a = 1; cont_a <= 50; cont_a++)
  {
    printf("%d ", cont_a );
  }
  printf(" \n\nContagem decrescente de 50 ao 1\n\n");
  for(cont_b = 50; cont_b >= 1; cont_b--)
  {
    printf("%d ", cont_b );
  }
  getch();
  return(0);
}
