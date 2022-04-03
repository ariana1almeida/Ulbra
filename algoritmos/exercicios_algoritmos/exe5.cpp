#include <stdio.h>

//Faça um programa que receba o salário de um funcionário e o percentual de aumento, 
//calcule e mostre o valor do aumento e o novo salário.

int main(){
	int salario, percentual, aumento, novoSalario;
	
	printf("Digite o seu salario atual:\n");
	scanf("%d%*c",&salario);
	printf("Digite o percentual de aumento que você irá ganhar:");
	scanf("%d%*c",&percentual);
	
	aumento=(salario*percentual/100);
	printf("O seu aumento será de:%d\n",aumento);
	
	novoSalario= (salario+aumento);
	printf("O seu novo salário será de:%d\n",novoSalario);
	return 0;
}
