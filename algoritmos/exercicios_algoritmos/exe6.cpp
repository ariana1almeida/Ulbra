#include <stdio.h>
//Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
//sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base 
//e paga imposto de 7% tamb�m sobre o sal�rio base.

int main(){
	int salario, salarioReceber, gratifica, imposto;
	printf("Digite o seu sal�rio atual:\n");
	scanf("%d%*c",&salario);
	
	gratifica=salario*5/100;
	imposto=salario*7/100;
	
	salarioReceber=salario+gratifica-imposto;
	
	printf("O seu sal�rio a receber ser� de:%d\n",salarioReceber);
	return 0;
}
