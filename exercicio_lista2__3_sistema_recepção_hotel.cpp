/* 1 - Suponha que você esteja desenvolvendo o sistema de um hotel que deva exibir
mensagens na recepção para diferentes ações dos hospedes, são elas:
1 - Fazer Check-in
2 - Chamar serviço de quarto
3 - Fazer pedido*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese"); 
  int menu; // int ou char -> exclui float
printf("--- MENU DO HOTEL --- \n");
printf("1 - Fazer Check-in \n");
printf("2 - Chamar Serviço de Quarto \n");
printf("3 - Fazer pedido \n");
scanf("%d",&menu);
switch(menu) // if(menu>4) // operadores relacionais
{
case 1:
printf("Fazer Check-in");
break;
case 2:
printf("Chamar serviço de Quarto");
break;
case 3:
printf("Fazer Pedido");
break;
default:
printf("Entrada invalida");
}
}
