//Lista 2
//9) Elabore um programa, que solicite ao usuário a velocidade do veículo e apresente na tela a penalidade, de acordo com a tabela a seguir:
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	int v;
	printf("\n Insira a velocidade do veiculo :");
	scanf("%d",&v);
		if(v<=60){
			printf("\n\n\a Sem penalidade" );
		
		}
		else if(v>60 && v<=80){
			printf("\n\n\a Multa leve" );
		
		}
		else if(v>80 && v<=100){
			printf("\n\n\a Multa grave" );
		
		}
		else if(v>100 && v<=120){
			printf("\n\n\a Multa gravissima" );
		
		}
		else{
			printf("\n\n\a Detencao do Condutor" );
		
		}
}
