/*2 - Escreva um algoritmo em que leia um n�mero e imprima a raiz quadrada do n�mero caso ele seja positivo ou igual a zero,
 e o quadrado do n�mero caso ele seja negativo. Obs: Usar a biblioteca math.h.*/
 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  c2 - Escreva um algoritmo em que leia um n�mero e imprima a raiz quadrada do n�mero caso ele seja positivo ou igual a zero e o quadrado do n�mero caso ele seja negativo. Obs: Usar a biblioteca math.h. num
  
  c= sqrt(num);
  d= pow(num,2);
  
  printf("\n\n Escreva o n�mero inteiro ou racional\n\n ");
  scanf("%.2f",&num);
  
  if (b >0){
    printf("\n\n Sua raiz quadrada �: %.2f \n\n", c);
		 }
	else{
    printf("\n\n Elevado ao quadrado  �: %.2f \n\n", d);
		}	
		system("PAUSE");
         return 0;
         }
	
