#include <stdio.h>
//Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. 
//Sabe-se que: �rea = (base * altura)/2.

int main(){
	int base, altura, area;
	printf("Digite a base do tri�ngulo:\n");
	scanf("%d%*c",&base);
	printf("Digite a altura do tri�ngulo:\n");
	scanf("%d%*c",&altura);
	
	area=base*altura/2;
	
	printf("A �rea do seu tri�ngulo �:%d\n", area);
	return 0;
}
