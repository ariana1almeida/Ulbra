//Efetue um programa que mostre todos os números inteiros ímpares situados numa faixa de dois números digitados pelo usuário. 
//Esse algoritmo deve ser feito duas vezes uma usando o WHILE e DO-WHILE

#include <stdio.h>

int main (){
	int num1, num2, i;
	
	printf("Digite o numero 1: \n");
	scanf("%d%*c", & num1);
	printf("Digite o numero 2: \n");
	scanf("%d%*c", & num2);
	
	i=num1;
	printf("Numeros impares no while: \n");
	
	while(i>=num1 && i<=num2){
		if(i%2==1){
			printf("Numeros impares: %d\n", i);
		}
		i++;
	}
	printf("------------------------------\n");
	i=num1;
	printf("Numeros impares no do/while: \n");
	
	do{
		if(i%2==1){
			printf("Numeros impares: %d\n", i);
		}
		i++;
	}while (i>=num1 && i<=num2);
}
