/*6) C�lculo de um sal�rio l�quido de um professor.
 Ser�o fornecidos valor da hora aula, n�mero de aulas dadas e o % de desconto do INSS.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

main()
{
setlocale(LC_ALL, "Portuguese");
int vHorasTrabalhadas;
float vValorHora,vPercentDesconto,vSalarioBase,vSalarioBruto,vValorDesconto,vSalarioLiquido,acrescimo; 


printf("Informe a quantidade de horas trabalhadas:\n ");
scanf("%d",&vHorasTrabalhadas);
printf("\nInforme o valor recebido por hora:");
scanf("%f",&vValorHora);
printf("Informe o percentual de desconto do INSS:\n");
scanf("%f",&vPercentDesconto);

vSalarioBase== vHorasTrabalhadas * vValorHora;


  printf("\n\nO sal�rio bruto �: %f",vSalarioBruto=(vSalarioBase +0.025)*vSalarioBase);
  printf("\n\nO valor de desconto �: %f",vValorDesconto=(vSalarioBruto * vPercentDesconto )/ 100);
  printf("\n\nO sal�rio liqu�do � : %f",vSalarioLiquido= vSalarioBruto - vValorDesconto);
  
}


