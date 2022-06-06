#include <stdio.h>

int main(){
	float custo, dis,imp;
	
	printf("Digite o custo de fabrica do carro:\n");
	scanf("%f%*c", &custo);
	
	if(custo<=12000.00){
		dis=(custo/100)*5;
		custo = custo+dis;
		printf("O valor do carro para o consumidor sera (isento de impostos): %.2f\n", custo);
	} else if (custo>12000.00 && custo<25000.00){
		dis=(custo/100)*10;
		imp=(custo/100)*15;
		custo = custo+dis+imp;
		printf("O valor do carro para o consumidor sera: %.2f\n", custo);
	} else if (custo>=25000.00){
		dis=(custo/100)*15;
		imp=(custo/100)*20;
		custo = custo+dis+imp;
		printf("O valor do carro para o consumidor sera: %.2f\n", custo);
	}
	
	return 0;
}
