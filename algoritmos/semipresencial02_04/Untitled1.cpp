#include <stdio.h>

int main(){
    int nota1,nota2,nota3, nota4,media;
    printf("Digite o valor da nota 01:\n");
    scanf("%d%*c",&nota1);
    printf("Digite o valor da nota 02:\n");
    scanf("%d%*c",&nota2);
    printf("Digite o valor da nota 03:\n");
    scanf("%d%*c",&nota3);
    printf("Digite o valor da nota 04:\n");
    scanf("%d%*c",&nota4);

    media=((nota1+nota2+nota3+nota4)/4);
    printf("A media e:%d\n",media);
    
    if(media>=7){
    	printf("Voce foi aprovado!");
	} else{
		printf("Voce foi reprovado");
	}
    return 0;
}
