//2 - Escreve um programa que sorteio, aleatoriamente, 10 números e armazene estes em um vetor.
//Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado 
//está no vetor ou não. Se estiver, diga a posição que está.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int vet[10];
	int num;
	int random;
	bool istrue=false;
	int posicao;
	for (int i=0; i<10;i++){
		random=(rand()%10)+1;
		vet[i]=random;
		printf("%d\n",vet[i]);
		printf("----\n");
	}
	printf("Digite um numero:\n");
	scanf("%d%*c",&num);
	for(int i=0; i<10;i++){
		if (vet[i]==num){
			istrue=true;
			posicao=i;
		break;
		}else{
			istrue=false;
		}
	}
	if(istrue=true){
		printf("Seu numero esta no vetor, na posicao %d\n", posicao);
	}else{
		printf("Seu numero nao esta no vetor!");
	}
}
