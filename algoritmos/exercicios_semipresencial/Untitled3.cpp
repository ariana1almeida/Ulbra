#include <stdio.h>
//Fa�a um programa para ler dois valores num�ricos e apresentar a diferen�a do maior pelo menor. 

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
