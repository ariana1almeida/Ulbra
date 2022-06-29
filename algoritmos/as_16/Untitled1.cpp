//1-Faca um programa que leia 10 numeros inteiros, armazene-os em um vetor, solicite um valor de referencia inteiro e: 
//a) imprima os numeros do vetor que sao maiores que o valor referencia 
//b) retorne quantos numeros armazenados no vetor sao menores que o valor de referencia 
//c) retorne quantas vezes o valor de referencia aparece no vetor 

#include <stdio.h>

int main(){
	int vet[10];
	int ref, menor=0, maior=0;
	
	for(int i=1;i<=10;i++){
		printf("Digite o numero %d:\n", i);
		scanf("%d%*c",&vet[i]);
	}
	printf("Digite o valor referencia:\n");
	scanf("%d%*c",&ref);
	
	printf("-----------\n");
	
	for(int i=1;i<=10;i++){
		if(ref<vet[i]){
			printf("%d\n", vet[i]);
		}
	}
	
	printf("-----------\n");
	for(int i=1;i<=10;i++){
		if(ref>vet[i]){
			menor++;
		}
	}
	printf("%d\n",menor);
	printf("-----------\n");
	for(int i=1;i<=10;i++){
		if(ref==vet[i]){
			maior++;
		}	
	}
	printf("%d\n",maior);
	
	printf("-----------\n");
}


