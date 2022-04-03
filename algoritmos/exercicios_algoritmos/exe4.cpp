#include <stdio.h>
//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, 
//sabendo-se que este sofreu um aumento de 25%.

int main(){
	int salario,novoSalario;
	printf("Digite o seu salário:\n");
	scanf("%d%*c",&salario);
	
	novoSalario=(salario+salario*25/100);
	printf("Seu novo salário é:%d\n", novoSalario);
	return 0;
}
