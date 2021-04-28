//Lista 2
//6) Escreva um programa para ler as três notas obtidas por um aluno durante o semestre.
// Calcular a sua média (aritmética) e informar a sua menção Aprovado (media >= 7), Reprovado (media <= 5) e Recuperação (media entre 5.1 e 6.9).

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	float nota1,nota2,nota3,media;
	printf("\nDigite a nota da primeira avaliacao :");
	scanf("%f",&nota1);
	printf("\nDigite a nota da segunda avaliacao :");
	scanf("%f",&nota2);
	printf("\nDigite a nota da terceira avaliacao :");
	scanf("%f",&nota3);
	media=(nota1+nota2+nota3)/3;
		if(media<=5){
			printf("\n\n\a O aluno esta Reprovado");
		
		}
	    else if(media>=5.1 && media<=6.9){
			printf("\n\n\a O aluno esta de Recuperacao");
		}
		else{
			printf("\n\n\a O aluno esta Aprovado ");
		}
}
