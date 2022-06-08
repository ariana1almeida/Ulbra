//Efetue um programa que mostre todos os números inteiros ímpares situados na faixa de 1000 a 1500. 
//Esse algoritmo deve ser feito duas vezes uma usando o FOR,WHILE;

#include <stdio.h>

int main(){
	int num1=1000, num2=1500, i;
	
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
	printf("Numeros impares no for: \n");
	
	for(i>=num1; i<=num2; i++){
		if(i%2==1){
			printf("Numeros impares: %d\n", i);
		}
				
	}
	
}

