#include <stdio.h>

int main(){
	float saldo, credito;
	
	printf("Digite o seu saldo medio do ano:\n");
	scanf("%f%*c", &saldo);
	
	if(saldo>400.00){
		credito=(saldo/100)*30;
		printf("O seu saldo e: %.2f e seu credito recebido e: %.2f\n", saldo, credito);
	} else if (saldo<=400.00 && saldo>=300.00){
		credito=(saldo/100)*25;
		printf("O seu saldo e: %.2f e seu credito recebido e: %.2f\n", saldo, credito);
	} else if (saldo<=300.00 && saldo>=200.00){
		credito=(saldo/100)*20;
		printf("O seu saldo e: %.2f e seu credito recebido e: %.2f\n", saldo, credito);
	} else if (saldo<200.00){
		credito=(saldo/100)*10;
		printf("O seu saldo e: %.2f e seu credito recebido e: %.2f\n", saldo, credito);
	}
	
	return 0;
}
