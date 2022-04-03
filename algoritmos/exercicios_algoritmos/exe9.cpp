#include <stdio.h>
//Faça um programa que calcule e mostre a área de um triângulo. 
//Sabe-se que: Área = (base * altura)/2.

int main(){
	int base, altura, area;
	printf("Digite a base do triângulo:\n");
	scanf("%d%*c",&base);
	printf("Digite a altura do triângulo:\n");
	scanf("%d%*c",&altura);
	
	area=base*altura/2;
	
	printf("A área do seu triângulo é:%d\n", area);
	return 0;
}
