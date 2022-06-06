#include <stdio.h>

int main(){
	float salario, reajuste;
	
	printf("Digite o seu salario atual:\n");
	scanf("%f%*c", &salario);
	
	if(salario<=300.00){
		reajuste=(salario/100)*35;
		salario =reajuste+salario;
		printf("O seu novo salario sera: %.2f\n", salario);
	} else if (salario>300.00){
		reajuste=(salario/100)*15;
		salario =reajuste+salario;
		printf("O seu novo salario sera: %.2f\n", salario);
	}
	
	return 0;
}
