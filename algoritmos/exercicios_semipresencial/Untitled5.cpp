#include <stdio.h>
//Elabore um programa que l� dois valores e escreve cada um com a mensagem: 
//�� m�ltiplo de 2� ou �N�o � m�ltiplo de dois�.

int main(){
	int num1, num2;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d%*c", &num2);
	
	if(num1%2==0){
		printf("%d e multiplo de 2\n",num1);
	} else{
		printf("%d nao e multiplo de 2\n",num1);
	}
	
	if(num2%2==0){
		printf("%d e multiplo de 2\n",num2);
	} else{
		printf("%d nao e multiplo de 2\n",num2);
	}
	return 0;	
}
