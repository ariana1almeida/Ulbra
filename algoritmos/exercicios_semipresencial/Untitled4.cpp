#include <stdio.h>
//Fa�a um programa para ler dois n�meros. Se os n�meros forem iguais imprimir a mensagem: "N�MEROS IGUAIS" e encerrar a execu��o; 
//caso contr�rio, imprimir o de maior valor.

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

