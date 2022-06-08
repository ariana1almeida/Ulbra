//Elabore um programa que calcule e escreva a soma de 10 números lidos.
//Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE

#include <stdio.h>

int main(){
	int n, num, soma;
	soma=0;
	
	for(n=1;n<=10;n++){
		printf("Digite o numero %d:\n", n);
		scanf("%d%*c", &num);
		soma+=num;
	}
	printf("A soma dos numeros digitados eh: %d\n", soma);
	
	soma=0;
	n=1;
	
	do{
		printf("Digite o numero %d:\n", n);
		scanf("%d%*c", &num);
		soma+=num;
		n++;
	} while(n>=1 && n<=10);
	printf("A soma dos numeros digitados eh: %d\n", soma);
	
	soma=0;
	n=1;
	
	while(n>=1 && n<=10){
		printf("Digite o numero %d:\n", n);
		scanf("%d%*c", &num);
		soma+=num;
		n++;
	}
	printf("A soma dos numeros digitados eh: %d\n", soma);		
	
}
