/*3 - Um homem decidiu ir � uma revenda comprar um carro.
 Ele deseja comprar um carro hatch, e a revenda possui, al�m de carros hatch, sedans, motocicletas e caminhonetes.
  Utilizando uma estrutura switch/case, caso o comprador queira o hatch, retorne: �Compra efetuada com sucesso�. 
  Nas outras op��es, retorne: �Tem certeza de que n�o prefere este modelo?�. 
  Caso seja especificado um modelo que n�o est� dispon�vel, 
retorne no console: �N�o trabalhamos com este tipo de autom�vel aqui�.*/


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
	printf("c- Caminh�es\n\n");
	scanf("%c",&tipoVeiculo);
	
	switch(tipoVeiculo){
		case 'h':
			printf("Compra efetuada com sucesso!");
		break;
		
		case 'm':
			printf("Tem certeza de que n�o prefere este modelo?");
		break;
		
		case 'c':
			printf("Tem certeza de que n�o prefere este modelo?");
		break;
		
		case 's':
			printf("Tem certeza de que n�o prefere este modelo?");
		break;
		
		default:
			printf("N�o trabalhamos com este tipo de autom�vel\a.");
		
	}
}
