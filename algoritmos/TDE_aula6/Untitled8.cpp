#include <stdio.h>
#include <math.h>

int main(){
	int num1, num2, soma, raiz, op;
	
	printf ("MENU\n");
	printf("1- Somar dois numeros\n");
	printf("2 - Raiz quadrada de um numero\n");
	printf("Digite a sua opcao:\n");
	scanf("%d%*c", &op);
	
	if(op==1){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%d%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%d%*c", &num2);
		soma = num1+num2;
		printf("A soma de %d e %d e: %d\n", num1, num2, soma);
	} else if(op==2){
		printf ("Digite um valor: \n");
		scanf ("%d%*c", &num1);
		raiz = sqrt(num1);
		printf("A raiz quadrada de %d e: %d\n", num1, raiz);
	} else if (op !=1 && op !=2){
		printf("Opcao invalida!");
	}
	
	return 0;
}
