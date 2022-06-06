#include <stdio.h>

int main(){
	int numero;
	int cont;
	cont=0;
	
	do{
		printf(" %d - Digite o numero\n", cont+1);
		scanf("%d%*c",&numero);
		
		if(numero==0){
			printf("Numero nulo\n");
		}else if(numero%2==0){
			printf("O numero eh par\n");
		} else{
			printf("O numero eh impar\n");
		}
		cont++;
		
	} while (cont<10);
}
