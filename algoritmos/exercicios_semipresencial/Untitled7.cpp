#include <stdio.h>
//Realize um programa que lê um conjunto de 4 valores i, a, b, c, 
//onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir:
//Se i=1 escrever os 3 valores a, b, c em ordem crescente;
//Se i=2 escrever os 3 valores a, b, c em ordem decrescente;
//Se i=3 escrever os 3 valores de forma que o maior valor entre a, b, c fica entre os outros dois.

int main (){
		int i;
		double a,b,c;
		double maior, menor, meio;


		printf("\nDigite valores diferentes para a, b e c abaixo. ");
		printf("\nDigite um valor para a: ");
		scanf("%d%*c", &a);
		printf("\nDigite um valor para b: ");
		scanf("%d%*c", &b);
		printf("\nDigite um valor para c: ");
		scanf("%d%*c", &c);
		
		if((a>=b) and (a>=c)){
			maior=a;
			if(b>=c){
				meio=b;
				menor=c;
				}
			else{
				meio=c;
				menor=b;
				}
		}
		
		else if ((b>=a) and (b>=c)){
			maior=b;
			if(a>=c){
				meio=a;
				menor=c;
				}
			else{
				meio=c;
				menor=a;
				}
		}
			
	 else if((c>=a) and (c>=b)){
			maior=c;
			if(a>=b){
				meio=a;
				menor=b;
				}
			else{
				meio=b;
				menor=a;
				}
		}
		
		printf("\n Digite 1, 2 ou 3: ");
		scanf("%d%*c", &i);
		
		if (i==1) {
			printf("\nO usuario digitou 1.");
			printf("\nA ordem a ser mostrada e crescente: %d, %d, %d",menor, meio, maior );
			printf("\nFim do programa.");
		}

		
		else if (i==2)
		{
			printf("\nO usuario digitou 2.");
			printf("\nA ordem a ser mostrada e decrescente: %d, %d, %d",maior, meio, menor);
			printf("\nFim do programa.");
		}

		
		else if (i==3)
		{
			printf("\nO usuario digitou 3.");
			printf("\nA ordem a ser mostrada e com o maior numero no meio: %d, %d, %d",menor, maior, meio);
			printf("\nFim do programa.");
		}

		
		else
		{
			printf("Entrada invalida. As entradas validas sao 1, 2 e 3.");
			printf("\nFim do programa.");
		}
		return 0;
	}
