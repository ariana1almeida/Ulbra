#include <stdio.h>
#include <math.h>

int main(){
	int op;
	float media, num1, num2, dif, prod, div;
	
	printf ("MENU\n");
	printf("1 - Media entre os numeros digitados\n");
	printf("2 - Diferenca do maior pelo menor\n");
	printf("3 - Produto entre os numeros digitados\n");
	printf("4 - Divisao do primeiro pelo segundo\n");
	printf("Digite a sua opcao:\n");
	scanf("%d%*c", &op);
	
	if(op==1){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%f%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%f%*c", &num2);
		media = ((num1+num2)/2);
		printf("A media de %f e %f e: %f\n", num1, num2, media);
	} 
	
	else if(op==2){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%f%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%f%*c", &num2);
		if(num1>num2){
			dif= num1-num2;
			printf("A diferença entre %f e %f e: %f\n", num1, num2, dif);
		} else{
			dif = num2-num1;
			printf("A diferença entre %f e %f e: %f\n", num2, num1, dif);
		}
	} 
	
	else if (op==3){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%f%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%f%*c", &num2);
		prod= num1*num2;
		printf("O produto de %f e %f e: %f\n", num1, num2, prod);
	}
	
	else if(op==4){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%f%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%f%*c", &num2);
		div=num1/num2;
		
		if(num2!=0){
			printf("A divisao do primeiro numero pelo segundo resulta em: %f\n", div);
		} else{
			printf("O segundo numero precisa ser maior que zero!");
		}
	}
	
	else{
		printf("Opcao invalida!");
	}
	
	return 0;
}
