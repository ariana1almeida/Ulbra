#include <stdio.h>

int main (){
	float trabalho, semestral, exame, media;
	
	printf("Digite a nota do seu trabalho de laboratorio:\n");
	scanf("%f%*c",&trabalho);
	
	printf("Digite a nota da sua avaliacao semestral:\n");
	scanf("%f%*c", &semestral);
	
	printf("Digite a sua nota do exame final:\n");
	scanf("%f%*c", &exame);
	
	media=((trabalho*2+semestral*3+exame*5)/10);
	
	printf("A media ponderada e: %f\n",media);
	
	if(media>=8 && media<=10){
		printf("Obteve o conceito A.");
	} else if (media>=7 && media<8){
		printf("Obteve o conceito B.");
	} else if (media>=6 && media<7){
		printf("Obteve o conceito C.");
	} else if (media>=5 && media<6){
		printf("Obteve o conceito D.");
	} else if (media >=0 && media<5){
		printf("Obteve o conceito E.");
	}
	
	return 0;
}
