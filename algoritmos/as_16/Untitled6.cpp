//Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. 
//Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, 
//sendo que caso o usuário digite um número que já foi digitado anteriormente, 
//o programa devera pedir para ele digitar outro número. Note que cada valor 
//digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre 
//os números que já foram  fornecidos. Exibir na tela o vetor final digitado.

#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int n,i;
	int vetor[10];
	
	for (i=0;i<10;i++){
	    printf("Digite os valores: ");
		scanf("%d",&vetor[i]);
    	for (n=0;n<i;n++){
        	if (vetor[i]==vetor[n]){
            	printf("JA DIGITOU ESTE NUMERO ANTES\n");
            	i--;
        	}
        }
    }
    system("cls");
    for (i=0;i<10;i++){
        printf(" %d",vetor[i]);
    }
    return 0;
}
