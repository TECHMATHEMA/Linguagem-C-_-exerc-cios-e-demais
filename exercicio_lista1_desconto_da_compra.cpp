//Lista 1 
//7 - Informar um pre�o de um produto e calcular novo pre�o com desconto de 9%.
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
