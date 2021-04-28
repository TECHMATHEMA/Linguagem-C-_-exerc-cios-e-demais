//Lista 1 
//8 - Fazer um programa que imprima a média aritmética dos números 8,9 e 7. A média dos números 4, 5 e 6. A soma das duas médias. A média das medias.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
int num1,num2,num3,num4,num5,num6,media1,media2,soma_das_medias,media_das_medias;
    printf("Digite numero 8:");
	scanf("%d",&num1);
	printf("Digite numero 9:");
	scanf("%d",&num2);
	printf("Digite o numero 7:");
	scanf("%d",&num3);
	media1=(num1+num2+num3)/3;
	printf(" \n\nA media desses numeros e\n\n :%d",media1);
	printf("\n\nDigite numero 4:");
	scanf("%d",&num4);
	printf("Digite numero 5:");
	scanf("%d",&num5);
	printf("Digite o numero 6:");
	scanf("%d",&num6);
	media2=(num4+num5+num6)/3;
	printf("\n\n A media desses numeros e  :%d",media2);
	soma_das_medias=media1+media2;
	printf("\n\n\a A soma das medias e de   :%d",soma_das_medias);
	media_das_medias=(soma_das_medias)/2;
	printf("\n\n\a A media das medias e de   :%d",media_das_medias);
	
}
     
