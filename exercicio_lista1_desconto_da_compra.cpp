//Lista 1 
//7 - Informar um preço de um produto e calcular novo preço com desconto de 9%.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
float V;
float VCD;

     printf("Digite o valor da compra em reais \n");
	scanf("%f",&V );
	VCD=V*0.91;
	printf(" O desconto da compra em reais e de  %.2f",VCD);
}
