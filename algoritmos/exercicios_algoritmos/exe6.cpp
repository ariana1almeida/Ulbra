#include <stdio.h>
//Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
//sabendo-se que o funcionário tem gratificação de 5% sobre o salário base 
//e paga imposto de 7% também sobre o salário base.

int main(){
	int salario, salarioReceber, gratifica, imposto;
	printf("Digite o seu salário atual:\n");
	scanf("%d%*c",&salario);
	
	gratifica=salario*5/100;
	imposto=salario*7/100;
	
	salarioReceber=salario+gratifica-imposto;
	
	printf("O seu salário a receber será de:%d\n",salarioReceber);
	return 0;
}
