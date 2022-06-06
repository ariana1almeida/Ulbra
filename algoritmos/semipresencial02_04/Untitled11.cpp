#include <stdio.h>

int main(){
	float salario, reajuste;
	
	printf("Digite o seu salario atual:\n");
	scanf("%f%*c", &salario);
	
	if(salario<=300.00){
		reajuste=(salario/100)*15;
		salario =reajuste+salario;
		printf("O seu reajuste foi de %.2f reais e o seu novo salario sera: %.2f\n", reajuste, salario);
	} else if (salario>300.00 && salario<=600.00){
		reajuste=(salario/100)*10;
		salario=reajuste+salario;
		printf("O seu reajuste foi de %.2f reais e o seu novo salario sera: %.2f\n", reajuste, salario);
	}else if (salario>600.00 && salario<=900.00){
		reajuste=(salario/100)*5;
		salario =reajuste+salario;
		printf("O seu reajuste foi de %.2f reais e o seu novo salario sera: %.2f\n", reajuste, salario);
	} else if (salario>900.00){
		printf("O seu salario nao se aplica para o aumento e continuara sendo %.2f\n", salario);
	}
	
	return 0;
}
