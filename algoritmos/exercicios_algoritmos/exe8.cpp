#include <stdio.h>
//Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros, 
//calcule e mostre o valor do rendimento e o valor total depois do rendimento.

int main(){
	int deposito,juros,rendimento,total;
	printf("Digite o valor do seu dep�sito:\n");
	scanf("%d%*c",&deposito);
	printf("Digite o valor da taxa de juros:\n");
	scanf("%d%*c",&juros);
	rendimento=deposito*juros/100;
	total=deposito+rendimento;
	
	printf("O seu rendimento � de:%d\n",rendimento);
	printf("O valor total ap�s o rendimento �:%d\n",total);
	return 0;	
}
