/* 1) Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  float valor,reajuste;
  printf("\n Digite o Valor estipulado: " );
  scanf("%f",&valor);
  reajuste= valor*1.1;
  printf("\n\a O valor reajustado é de :");
  printf("%f",reajuste);
}
