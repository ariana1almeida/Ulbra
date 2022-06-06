#include <stdio.h>
//Faça um programa para ler dois valores numéricos e apresentar a diferença do maior pelo menor. 

int main(){
	int num1,num2,dif;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d%*c", &num2);
	
	if(num1>num2){
		dif=num1-num2;
		printf("A diferenca entre os dois numeros e:%d\n",dif);
	} else{
		dif=num2-num1;
		printf("A diferenca entre os dois numeros e:%d\n",dif);
	}
	return 0;
}
