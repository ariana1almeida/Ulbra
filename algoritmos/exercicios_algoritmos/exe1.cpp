#include <stdio.h>
//Fa�a um programa que receba quatro n�meros inteiros,
//calcule e mostre a soma desses n�meros.
int main(){
    int num1,num2,num3,num4,soma; //quatro n�meros inteiros e soma dos n�meros
    printf("Digite o valor de Numero1:\n");
    scanf("%d%*c",&num1);
    printf("Digite o valor de Numero2:\n");
    scanf("%d%*c",&num2);
    printf("Digite o valor de Numero3:\n");
    scanf("%d%*c",&num3);
    printf("Digite o valor de Numero4:\n");
    scanf("%d%*c",&num4);
    soma=num1+num2+num3+num4;
    printf("A soma �:%d\n", soma);
    return 0;
}
