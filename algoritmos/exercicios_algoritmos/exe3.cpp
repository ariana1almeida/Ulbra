#include <stdio.h>
//Fa�a um programa que receba tr�s notas e seus respectivos pesos, 
//calcule e mostre a m�dia aritm�tica.
int main(){
	int nota1,nota2, nota3, peso1, peso2, peso3, media;
	printf("Digite o valor da nota 01:\n");
	scanf("%d%*c",&nota1); 
	printf("Digite o valor da nota 02:\n");
	scanf("%d%*c",&nota2);
	printf("Digite o valor da nota 03:\n");
	scanf("%d%*c",&nota3);
	printf("Digite o peso da nota 01:\n");
	scanf("%d%*c",&peso1);
	printf("Digite o peso da nota 02:\n");
	scanf("%d%*c",&peso2);
	printf("Digite o peso da nota 03:\n");
	scanf("%d%*c",&peso3); 
	
	media=(nota1*peso1+ nota2*peso2+ nota3*peso3)/(peso1+ peso2+ peso3);
	printf("A m�dia aritm�tica das notas �:%d\n", media);
	return 0;
}
