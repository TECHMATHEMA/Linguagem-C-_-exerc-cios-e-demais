/*2 - Escrever um programa que l� uma letra equivalente ao estado civil de uma pessoa, e imprime a descri��o do estado civil, 
sabendo que:
�s�- solteiro,
�c�- casado,
�v�- vi�vo,
�d�- divorciado,
outras letras- estado civil n�o informado.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese"); 
  int menu; // int ou char -> exclui float
printf("--- QUAL O ESTADO CIVIL ? --- \n");
printf("1 - Solteiro \n");
printf("2 - Casado \n");
printf("3 - Vi�vo \n");
printf("4 - Desquitado \n");
scanf("%d",&menu);
switch(menu) // if(menu>4) // operadores relacionais
{
case 1:
printf("S");
break;
case 2:
printf("C");
break;
case 3:
printf("V");
case 4:
printf("D");
break;
default:
printf("Estado Civil n�o informado\a");
}
}
