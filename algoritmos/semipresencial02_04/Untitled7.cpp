#include <stdio.h>

int main(){
	float salario, reajuste;
	
	printf("Digite o seu salario atual:\n");
	scanf("%f%*c", &salario);
	
	if(salario<=500.00){
		reajuste=(salario/100)*30;
		salario =reajuste+salario;
		printf("O seu novo salario sera: %.2f\n", salario);
	} else{
		printf("Você nao tem direito a receber o reajuste");
	}
	
	return 0;
}
