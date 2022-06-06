#include<stdio.h>
//Faça um programa para efetuar a leitura de quatro números e apresentar os números divisíveis por 2 e por 3.

int main() {
    int num1,num2,num3,num4;

    printf("Digite o primeiro numero:\n");
	scanf("%d%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d%*c", &num2);
	printf("Digite o terceiro numero:\n");
	scanf("%d%*c", &num3);
	printf("Digite o quarto numero:\n");
	scanf("%d%*c", &num4);

    if(num1 % 2 == 0 && num1 % 3 == 0){
    	printf("%d e Divisivel por 2 e por 3.\n", num1);
	}else if (num1 % 2 == 0){
		printf("%d e Divisivel por 2.\n", num1);
	}else {
		printf("%d e Divisivel 3.\n", num1);
	}
	
	if(num2 % 2 == 0 && num2 % 3 == 0){
    	printf("%d e Divisivel por 2 e por 3.\n", num2);
	}else if (num2 % 2 == 0){
		printf("%d e Divisivel por 2.\n", num2);
	}else {
		printf("%d e Divisivel 3.\n", num2);
	}
	
	if(num3 % 2 == 0 && num3 % 3 == 0){
    	printf("%d e Divisivel por 2 e por 3.\n", num3);
	}else if (num3 % 2 == 0){
		printf("%d e Divisivel por 2.\n", num3);
	}else {
		printf("%d e Divisivel 3.\n", num3);
	}
	
	if(num4 % 2 == 0 && num4 % 4 == 0){
    	printf("%d e Divisivel por 2 e por 3.\n", num4);
	}else if (num4 % 2 == 0){
		printf("%d e Divisivel por 2.\n", num4);
	}else {
		printf("%d e Divisivel 3.\n", num4);
	}
   
	return 0;
}


