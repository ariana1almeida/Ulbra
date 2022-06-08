//Efetue um programa que leia a nota de 10 alunos de uma turma. 
//Ao final, deve ser escrita a média geral da turma. 
//Esse algoritmo deve ser feito duas vezes uma usando o FOR, e DO-WHILE

#include <stdio.h>

int main (){
	float notas[10], valor, media, total;
	int i, j=0;
	
	for (i=1;i<=10;i++){
		printf("Digite a nota do aluno %d:\n", i);
		scanf("%f%*c", &valor);
		notas[i]=valor;	
		total+=valor;	
	}
	media=total/10;
	
	printf("A media da turma utilizando FOR eh: %f\n",media);
	printf("----------------------------------------\n");
	
	total=0;
	valor=0;
	media=0;
	
	do{
		printf("Digite a nota do aluno %d:\n", j+1);
		scanf("%f%*c", &valor);
		notas[j]=valor;	
		total+=valor;
		j++;
	} while (j<10);
	
	media=total/10;
	
	printf("A media da turma utilizando DO/WHILE eh: %f\n",media);
	
	
}
