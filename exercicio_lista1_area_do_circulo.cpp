//Lista 1 
//5 - Fa�a um programa que calcule e mostre a �rea de um c�rculo. Para isso, a seguinte f�rmula deve ser usada: A = Pi * R2.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
float A;
float R;
float Pi=3.14;
	printf("Insira a medida do raio do Circulo \n");
	scanf("%f",&R );
	A= Pi*(R*R);
	printf(" A area do circulo correspondente %f",A);
}
