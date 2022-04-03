#include <stdio.h>
//Faça um programa que receba o salário base de um funcionário, 
//calcule e mostre seu salário a receber,
//sabendo-se que o funcionário tem gratificação de R$ 50 
//e paga imposto de 10% sobre o salário base.

int main(){
	int salario, salarioReceber, imposto;
	printf("Digite seu salário:\n");
	scanf("%d%*c",&salario);
	
	imposto=salario*10/100;
	salarioReceber=salario+50-imposto;
	
	printf("O seu salário a receber é:%d\n",salarioReceber);
	return 0;
	
}
