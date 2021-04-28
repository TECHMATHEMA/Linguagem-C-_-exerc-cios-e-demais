/*2 - Escreva um algoritmo em que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero,
 e o quadrado do número caso ele seja negativo. Obs: Usar a biblioteca math.h.*/
 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  c2 - Escreva um algoritmo em que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. Obs: Usar a biblioteca math.h. num
  
  c= sqrt(num);
  d= pow(num,2);
  
  printf("\n\n Escreva o número inteiro ou racional\n\n ");
  scanf("%.2f",&num);
  
  if (b >0){
    printf("\n\n Sua raiz quadrada é: %.2f \n\n", c);
		 }
	else{
    printf("\n\n Elevado ao quadrado  é: %.2f \n\n", d);
		}	
		system("PAUSE");
         return 0;
         }
	
