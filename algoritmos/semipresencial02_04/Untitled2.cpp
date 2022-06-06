#include <stdio.h>

int main (){
	float nota1, nota2, media, nota_exame;
	
	printf("Digite a primeira nota:");
	scanf("%f%*c",&nota1);
	
	printf("Digite a segunda nota:");
	scanf("%f%*c",&nota2);
	
	media=((nota1+nota2)/2);
	
	printf("Media aritmetica: %f\n", media);
	
	if(media>=0 && media<3){
		printf("Reprovado");
	} else if (media>=3 && media<7){
		printf("Exame");
	} else if (media>=7 && media<=10){
		printf ("Aprovado");
	}
	return 0;
}
