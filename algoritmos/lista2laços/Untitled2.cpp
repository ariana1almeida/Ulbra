//Fa�a um programa para repetir a leitura de um n�mero enquanto o valor 
//fornecido for diferente de 0. Para cada n�mero fornecido, escrever 
//se ele � NEGATIVO ou POSITIVO. Quando o n�mero 0 for fornecido a 
//repeti��o deve ser encerrada sem escrever mensagem alguma.

#include <stdio.h>

int main(){
	int num;
	do{
		printf("Digite um numero:\n");
		scanf("%d%*c",&num);
		if(num>0){
			printf("Numero positivo\n");
		}else if(num<0){
			printf("numero negativo\n");
		}else{
			break;
		}
	} while (num!=0);
}
