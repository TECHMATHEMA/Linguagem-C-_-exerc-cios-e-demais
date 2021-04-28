/* 3) Informe o tempo gasto numa viagem (em horas), a velocidade média e calcule o consumo.*/

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
  printf("\n Informe a velocidade média do seu veículo em Kilômetros por hora :");
  scanf("%d",&vmedia);
  printf("\n Qual a capacidade do tanque de combustível do seu veículo em litros? :");
  scanf("%f",&capacidade);
  printf("%f",capacidade);
  distancia= vmedia*tempo_viagem;
  consumo= distancia/capacidade;
  printf("\n O consumo de combustível do seu veículo em Kilômetros por litro é de  : \n\a");
  printf("%.2f",consumo);
}
