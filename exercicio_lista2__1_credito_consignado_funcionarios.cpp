/* 8 - A prefeitura de Contagem abriu uma linha de cr�dito para os funcion�rios estatut�rios.
O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer um
algoritmo que permita entrar com o sal�rio bruto e o valor da presta��o, e informar se o
empr�stimo pode ou n�o ser concedido.*/


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
  printf("\n\n INFORME O VALOR DA PRESTA��O DO EMPR�STIMO EM REAIS  \n\n");
  scanf("%f",&c);
  
  if (c<b*0.3) {
  
printf(" Empr�stimo concedido !!! ");
}
else {

printf(" Empr�stimo negado !!! \a ");
}
}
