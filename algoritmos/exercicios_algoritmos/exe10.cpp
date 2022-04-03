#include <stdio.h>
//Faça um programa que calcule e mostre a área de um círculo. 
//Sabe-se que: Área = p * R2

int main(){
	int area, raio;
	double pi=3.1415;
	printf("Digite o raio do seu círculo:\n");
	scanf("%d%*c",&raio);
	
	area=pi*raio*raio;
	
	printf("A área do seu círculo é:%d\n",area);
	return 0;
}
