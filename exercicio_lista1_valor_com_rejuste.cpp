//Lista 1 
//6 - Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
float V;
float VCR;
	printf("Digite o valor da compra em reais \n");
	scanf("%f",&V );
	VCR=V*1.1;
	printf(" O valor da compra com reajuste em reais e de  %.2f",VCR);
}
