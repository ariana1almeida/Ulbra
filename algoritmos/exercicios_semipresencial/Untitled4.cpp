#include <stdio.h>
//Faça um programa para ler dois números. Se os números forem iguais imprimir a mensagem: "NÚMEROS IGUAIS" e encerrar a execução; 
//caso contrário, imprimir o de maior valor.

int main(){
	int num1,num2;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d%*c", &num2);
	
	
	if(num1==num2){
		printf("numeros iguais!");
	} else if(num1>num2) printf("O numero maior e o: %d\n", num1);
			else{
			printf("O numero maior e o: %d\n", num2);
			}
	return 0;
}

