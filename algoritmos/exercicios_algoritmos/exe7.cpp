#include <stdio.h>
//Fa�a um programa que receba o sal�rio base de um funcion�rio, 
//calcule e mostre seu sal�rio a receber,
//sabendo-se que o funcion�rio tem gratifica��o de R$ 50 
//e paga imposto de 10% sobre o sal�rio base.

int main(){
	int salario, salarioReceber, imposto;
	printf("Digite seu sal�rio:\n");
	scanf("%d%*c",&salario);
	
	imposto=salario*10/100;
	salarioReceber=salario+50-imposto;
	
	printf("O seu sal�rio a receber �:%d\n",salarioReceber);
	return 0;
	
}
