#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
	int n;
	printf("\n Insira a nota numérico da prova de 100 questões :");
	scanf("%d",&n);
		if(n<=50){
			printf("\n\n\a Conceito D" );
		
		}
		else if(n>50 && n<=70){
			printf("\n\n\a Conceito C" );
		
		}
		else if(n>70 && n<=90){
			printf("\n\n\a Conceito B" );
		
		}
		else{
			printf("\n\n\a Conceito A" );
		
		}

		
		}

