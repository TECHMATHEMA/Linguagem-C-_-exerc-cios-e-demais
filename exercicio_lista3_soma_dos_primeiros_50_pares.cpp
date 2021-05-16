/*2 - Faça um programa que calcule a soma dos primeiros 50 números pares.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int main() {  

int num, i, soma=0;  
printf(" \n\nContagem crescente dos pares de 2 a 100 : \n\n");
  for(num = 2; num<= 100; num+=2)
  {
    printf("%d ", num );
}
printf("\n\n Agora vamos somar os 50 primeiros pares ");
for (i=1; i<=100; i++) {  

if (i % 2 == 0)

soma += i;  

}  

printf("\n\n Soma dos 50 primeiros números é: %d\n", soma);  

return 0;  

}
