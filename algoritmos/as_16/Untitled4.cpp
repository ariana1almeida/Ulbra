//Faça um programa que leia um vetor de 5 posições para números reais e, 
//depois, um código inteiro. Se o código for zero, finalize o programa; 
//se for 1, mostre o vetor na ordem  direta; se for 2, mostre o vetor na ordem inversa. 
//Caso, o código diferir de 1 e 2  escreva uma mensagem informando que o código e inválido.

#include <stdio.h>

int main(){
	int option;
	float vet[5];
	
	for(int i=0;i<5;i++){
		printf("Digite o numero real da posicao %d: \n",i+1);
		scanf("%f%*c", &vet[i]);
	}
	
	printf("Menu:\n");
	printf("Digite 1 para ver o vetor na ordem direta \n");
	printf("Digite 2 para ver o vetor na ordem inversa\n");
	scanf("%d%*c",&option);
	
	if(option==1){
		for(int i=0;i<5;i++){
			printf("%2.f\n", vet[i]);
		}
	} else if(option==2){
		for(int i=4;i>=0;i--){
			printf("%2.f\n", vet[i]);
		}
	}else{
		printf("Codigo invalido\n");
	}
	return 0;
}
