#include <stdio.h>
//Fa�a um programa que receba 3 notas,
//Calcule e mostre a m�dia aritm�tica.
int main(){
    int nota1,nota2,nota3,media;
    printf("Digite o valor da nota 01:\n");
    scanf("%d%*c",&nota1);
    printf("Digite o valor da nota 02:\n");
    scanf("%d%*c",&nota2);
    printf("Digite o valor da nota 03:\n");
    scanf("%d%*c",&nota3);

    media=(nota1+nota2+nota3/3);
    printf("A m�dia �:%d\n",media);
    return 0;
}
