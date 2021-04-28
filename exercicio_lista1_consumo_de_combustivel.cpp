#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main(){
	float velocidade,tempo,distancia,consumo;
	printf("\n\a\nTempo gasto na viagem em horas, favor informar\n\a\n");
	scanf("%f",&tempo);
	printf("\n\a\n A velocidade media do carro na estrada , favor informar\n\a\n");
	scanf("%f",&velocidade);
	//capacidade do tanque =65 litros 
	consumo= (velocidade*tempo)/65;
	printf("\n\n\a O consumo do automovel em kilometros por litro e de %f,consumo");
}
