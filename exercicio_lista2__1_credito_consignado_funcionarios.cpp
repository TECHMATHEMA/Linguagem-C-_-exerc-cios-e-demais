/* 8 - A prefeitura de Contagem abriu uma linha de crédito para os funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um
algoritmo que permita entrar com o salário bruto e o valor da prestação, e informar se o
empréstimo pode ou não ser concedido.*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  float b,c;
  printf("\n\n INFORME O SEU PISO SALARIAL EM REAIS \n\n");
  scanf("%f",&b);
  printf("\n\n INFORME O VALOR DA PRESTAÇÃO DO EMPRÉSTIMO EM REAIS  \n\n");
  scanf("%f",&c);
  
  if (c<b*0.3) {
  
printf(" Empréstimo concedido !!! ");
}
else {

printf(" Empréstimo negado !!! \a ");
}
}
