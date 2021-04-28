//Lista 2
//2) Faça um programa que receba o sexo como dado de entrada e informe se o usuário é homem ou mulher.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
	char sexo_do_individuo;
	printf("Digite a letra M se for masculino ou F se for feminino :");
	scanf("%c",&sexo_do_individuo);
		if(sexo_do_individuo== 'M'){
			printf("Entao voce e homem ");
		
		}
		else{
			printf("Entao voce e mulher ");
		}
	}
