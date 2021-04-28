//Lista 1 
//5 - Faça um programa que calcule e mostre a área de um círculo. Para isso, a seguinte fórmula deve ser usada: A = Pi * R2.
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
