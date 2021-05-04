/*3 - Um homem decidiu ir à uma revenda comprar um carro.
 Ele deseja comprar um carro hatch, e a revenda possui, além de carros hatch, sedans, motocicletas e caminhonetes.
  Utilizando uma estrutura switch/case, caso o comprador queira o hatch, retorne: “Compra efetuada com sucesso”. 
  Nas outras opções, retorne: “Tem certeza de que não prefere este modelo?”. 
  Caso seja especificado um modelo que não está disponível, 
retorne no console: “Não trabalhamos com este tipo de automóvel aqui”.*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	char tipoVeiculo;
	
	printf("-----Compre seu carro-----\n");
	printf("m- Motocicletas\n");
	printf("s- Sedan\n");
	printf("h- Hatch\n");
	printf("c- Caminhões\n\n");
	scanf("%c",&tipoVeiculo);
	
	switch(tipoVeiculo){
		case 'h':
			printf("Compra efetuada com sucesso!");
		break;
		
		case 'm':
			printf("Tem certeza de que não prefere este modelo?");
		break;
		
		case 'c':
			printf("Tem certeza de que não prefere este modelo?");
		break;
		
		case 's':
			printf("Tem certeza de que não prefere este modelo?");
		break;
		
		default:
			printf("Não trabalhamos com este tipo de automóvel\a.");
		
	}
}
