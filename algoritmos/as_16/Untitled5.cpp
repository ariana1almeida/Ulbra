//Faça um programa que receba do usuário dois vetores, A e B, com 10 números 
//inteiros cada. Crie um novo vetor denominado C calculando C = A - B. 
//Mostre na tela os dados do vetor C.

#include <stdio.h>

int main(){

	int vetorA[10],vetorB[10], vetorC[10], i;

	for(i=0; i<10; i++){
     printf("DIGITE O VETOR A :\n");
     scanf("%d", &vetorA[i]);
   	}
   	printf("\n");
   	for(i=0; i<10; i++){
     printf("DIGITE O VETOR B :\n");
     scanf("%d", &vetorB[i]);
   	}
   	printf("\n");
   	for(i=0; i<10; i++){
     vetorC[i]= vetorA[i] - vetorB[i];
     printf("\n%d ", vetorC[i]);
   	}
}
