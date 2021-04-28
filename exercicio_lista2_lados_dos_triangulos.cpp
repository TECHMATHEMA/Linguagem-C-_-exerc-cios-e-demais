#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main()
{
setlocale(LC_ALL, "Portuguese");
int a,b,c;
printf("\nEscreva a medida do lado a do triangulo maior do que zero:\n\n");
scanf("%d",&a);
printf("\nEscreva a medida do lado b do triangulo maior do que zero:\n\n");
scanf("%d",&b);
printf("\nEscreva a medida do lado c do triangulo maior do que zero:\n\n");
scanf("%d",&c);
	if(a==0||b==0||c==0){
	printf("Triângulo com lado zero não existe");
}
	else if(a==b && a==c && b==c){
	printf(" O triângulo é equilátero");
	}
	else if(a==b && a!=c && b!=c){
	printf("O triângulo é isóceles");	
	}
	else if(a==c && a!=b && c!=b){
	printf("O triângulo é isóceles");	
	}
	else if(b==c && b!=a && c!=a){
	printf("O triângulo é isóceles");	
	}
	else{
	printf("O triângulo é escaleno");	
	}
}

