//Fa�a um programa para determinar se uma pessoa � maior ou menor de idade. 
//Mostre tamb�m se ela j� est� apta a votar de forma obrigat�ria ou facultativa. 
//Conforme a Justi�a eleitoral o voto � obrigat�rio para os eleitores com idade acima de 18 anos e facultativo para os analfabetos, 
//para os eleitores maiores de 16 e menores de 18 anos, assim como para os maiores de 70 anos.

#include <stdio.h>

int main (){
	int id;
	
	printf("Digite a sua idade:\n");
	scanf("%d%*c", &id);
	
	if (id>=18 && id<70){
		printf("Voce eh maior de idade, o seu voto eh obrigatorio!\n");
		printf("Lembrando que, independente da idade, caso o cidadao seja analfabeto, o seu voto eh facultativo.");
	} else{
		if(id>=70){
			printf("Voce eh maior de idade, mas seu voto eh facultativo!\n");
			printf("Lembrando que, independente da idade, caso o cidadao seja analfabeto, o seu voto eh facultativo.");
		} else if(id>=16 && id<18){
			printf("Voce eh menor de idade, portanto, o seu voto eh facultativo!\n");
			printf("Lembrando que, independente da idade, caso o cidadao seja analfabeto, o seu voto eh facultativo.");
		} else{
			printf("Voce nao esta apto para votar ainda!");
		}
	return 0;
	}
}
