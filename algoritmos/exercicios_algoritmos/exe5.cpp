#include <stdio.h>

//Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, 
//calcule e mostre o valor do aumento e o novo sal�rio.

int main(){
	int salario, percentual, aumento, novoSalario;
	
	printf("Digite o seu salario atual:\n");
	scanf("%d%*c",&salario);
	printf("Digite o percentual de aumento que voc� ir� ganhar:");
	scanf("%d%*c",&percentual);
	
	aumento=(salario*percentual/100);
	printf("O seu aumento ser� de:%d\n",aumento);
	
	novoSalario= (salario+aumento);
	printf("O seu novo sal�rio ser� de:%d\n",novoSalario);
	return 0;
}
