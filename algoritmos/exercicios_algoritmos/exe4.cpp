#include <stdio.h>
//Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, 
//sabendo-se que este sofreu um aumento de 25%.

int main(){
	int salario,novoSalario;
	printf("Digite o seu sal�rio:\n");
	scanf("%d%*c",&salario);
	
	novoSalario=(salario+salario*25/100);
	printf("Seu novo sal�rio �:%d\n", novoSalario);
	return 0;
}
