#include <stdio.h>
//Escrever um programa que lê as 3 notas obtidas por ele em provas. Para cada aluno, calcular a média de aproveitamento, usando a fórmula:
//MA = (Nl + N2 + N3)/3

int main (){
	float nota1, nota2, nota3, ma;
		
	printf("Digite sua primeira nota:\n");
	scanf("%f%*c", &nota1);
	printf("Digite a sua segunda nota:\n");
	scanf("%f%*c", &nota2);
	printf("Digite a sua terceira nota:\n");
	scanf("%f%*c", &nota3);
	
	ma=((nota1+nota2+nota3)/3);
	
	if(ma>=6.0){
		printf ("Voce foi aprovado");
		printf("\nSuas notas foram, respectivamente: %f, %f, %f", nota1,nota2,nota3);
		
	 	if(ma>=9){
			printf("\n sua nota final foi: %f",ma,", voce passou! Sua nota de conceito foi: A");
		}
		else if(ma>= 7.5 && ma< 9){
			printf("\n sua nota final foi: %f",ma,", voce passou! Sua nota de conceito foi: B");
		}
		if(ma>=6 && ma<7.5){
			printf("\n sua nota final foi: %f",ma,", voce passou! Sua nota de conceito foi: C");
		}
	}else{
		printf ("\nVoce foi reprovado");
		printf("\nSuas notas foram, respectivamente: %f, %f, %f\n", nota1,nota2,nota3);
		if(ma<6 && ma>=4){
			printf("\n%d sua nota final foi: %f",ma,"e nao passou na nota de corte. Sua nota de conceito foi: D");
		}
		else if(ma<4){
			printf("\n%d sua nota final foi: %f",ma,"e nao passou na nota de corte. Sua nota de conceito foi: E");
		}
	}
	return 0;
}
