#include <stdio.h>
//Faça um programa para ler três valores quaisquer e escrever o maior dos 3.

int main(){
		int i;
		double a,b,c;
		double maior;


		printf("\nDigite valores diferentes para a, b e c abaixo. ");
		printf("\nDigite um valor para a: ");
		scanf("%d%*c", &a);
		printf("\nDigite um valor para b: ");
		scanf("%d%*c", &b);
		printf("\nDigite um valor para c: ");
		scanf("%d%*c", &c);
		
		if((a>=b) and (a>=c)){
			maior=a;
		}
		
		else if ((b>=a) and (b>=c)){
			maior=b;
		}
			
	 	else if((c>=a) and (c>=b)){
			maior=c;
		}
		
		printf("\n O maior numero e:%d\n", maior);
		printf("\nFim do programa.");

		return 0;
	}
