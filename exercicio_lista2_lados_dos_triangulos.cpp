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
	printf("Tri�ngulo com lado zero n�o existe");
}
	else if(a==b && a==c && b==c){
	printf(" O tri�ngulo � equil�tero");
	}
	else if(a==b && a!=c && b!=c){
	printf("O tri�ngulo � is�celes");	
	}
	else if(a==c && a!=b && c!=b){
	printf("O tri�ngulo � is�celes");	
	}
	else if(b==c && b!=a && c!=a){
	printf("O tri�ngulo � is�celes");	
	}
	else{
	printf("O tri�ngulo � escaleno");	
	}
}

