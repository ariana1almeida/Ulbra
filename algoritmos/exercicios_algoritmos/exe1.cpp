#include <stdio.h>
//Faça um programa que receba quatro números inteiros,
//calcule e mostre a soma desses números.
int main(){
    int num1,num2,num3,num4,soma; //quatro números inteiros e soma dos números
    printf("Digite o valor de Numero1:\n");
    scanf("%d%*c",&num1);
    printf("Digite o valor de Numero2:\n");
    scanf("%d%*c",&num2);
    printf("Digite o valor de Numero3:\n");
    scanf("%d%*c",&num3);
    printf("Digite o valor de Numero4:\n");
    scanf("%d%*c",&num4);
    soma=num1+num2+num3+num4;
    printf("A soma é:%d\n", soma);
    return 0;
}
