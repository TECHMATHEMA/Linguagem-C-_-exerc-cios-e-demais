/* 3) Informe o tempo gasto numa viagem (em horas), a velocidade m�dia e calcule o consumo.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
  main() {
  setlocale(LC_ALL, "Portuguese");
  float capacidade,distancia,consumo;
  int tempo_viagem,vmedia;
  printf("\n Informe o tempo gasto da sua viagem em horas :");
  scanf("%d",&tempo_viagem);
  printf("\n Informe a velocidade m�dia do seu ve�culo em Kil�metros por hora :");
  scanf("%d",&vmedia);
  printf("\n Qual a capacidade do tanque de combust�vel do seu ve�culo em litros? :");
  scanf("%f",&capacidade);
  printf("%f",capacidade);
  distancia= vmedia*tempo_viagem;
  consumo= distancia/capacidade;
  printf("\n O consumo de combust�vel do seu ve�culo em Kil�metros por litro � de  : \n\a");
  printf("%.2f",consumo);
}
