#include <stdio.h>
//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, 
//calcule e mostre o valor do rendimento e o valor total depois do rendimento.

int main(){
	int deposito,juros,rendimento,total;
	printf("Digite o valor do seu depósito:\n");
	scanf("%d%*c",&deposito);
	printf("Digite o valor da taxa de juros:\n");
	scanf("%d%*c",&juros);
	rendimento=deposito*juros/100;
	total=deposito+rendimento;
	
	printf("O seu rendimento é de:%d\n",rendimento);
	printf("O valor total após o rendimento é:%d\n",total);
	return 0;	
}
