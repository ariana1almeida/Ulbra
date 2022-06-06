#include <stdio.h>
//Faça um programa para determinar se uma pessoa é maior ou menor de idade.

int main(){
	int id,maior;
	maior=18;
	
	printf("Digite a sua idade:\n");
	scanf("%d%*c", &id);
	
	if (id<=0){
		printf("Calma anciao, colocou a idade errada");
		return 0;
	}
	
	if(id>=maior){
		printf("Voce e maior de idade! Penah kk");
	}else{
		printf("Quaaase, voce ainda e menor de idade");
	}
	return 0;
}
