#include <stdio.h>
//Fa�a um programa que calcule e mostre a �rea de um c�rculo. 
//Sabe-se que: �rea = p * R2

int main(){
	int area, raio;
	double pi=3.1415;
	printf("Digite o raio do seu c�rculo:\n");
	scanf("%d%*c",&raio);
	
	area=pi*raio*raio;
	
	printf("A �rea do seu c�rculo �:%d\n",area);
	return 0;
}
