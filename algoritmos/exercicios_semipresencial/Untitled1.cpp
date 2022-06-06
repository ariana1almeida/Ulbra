#include <stdio.h>
//Elabore um programa que leia dois números e some 100 ao maior valor e apresente o resultado.

int main (){
	int num1, num2;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d%*c", &num2);
	
	if(num1>num2){
		num1=num1+100;
		printf("O maior numero e: %d\n",num1);
		}else{
			num2=num2+100;
			printf("O maior numero e: %d\n",num2);
		}
	return 0;	
}


