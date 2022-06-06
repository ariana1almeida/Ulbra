#include <stdio.h>
#include <math.h>

int main(){
	int op;
	float num1, num2, elev, raiz1, raiz2, raiz3, raiz4;
	
	printf ("MENU\n");
	printf("1 - O primeiro numero elevado ao segundo numero\n");
	printf("2 - Raiz quadrada de cada um dos numeros\n");
	printf("3 - Raiz cubica de cada um dos numeros\n");
	printf("Digite a sua opcao:\n");
	scanf("%d%*c", &op);
	
	if(op==1){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%f%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%f%*c", &num2);
		elev=pow(num1, num2);
		printf("A elevacao de %.2f por %.2f e: %.2f\n", num1, num2, elev);
	} 
	
	else if(op==2){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%f%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%f%*c", &num2);
		raiz1=sqrt(num1);
		raiz2=sqrt(num2);
		printf("A raiz quadrada de %.2f eh %.2f e a raiz quadrada de %.2f eh %.2f", num1, raiz1, num2, raiz2);
	} 
	
	else if (op==3){
		printf("Digite um valor para o primeiro numero: \n");
		scanf ("%f%*c", &num1);
		printf("Digite um valor para o segundo numero: \n");
		scanf("%f%*c", &num2);
		raiz3=cbrt(num1);
		raiz4=cbrt(num2);
		printf("A raiz cubica de %.2f eh %.2f e a raiz cubica de %.2f eh %.2f", num1, raiz3, num2, raiz4);
	}
	
	else{
		printf("Opcao invalida!");
	}
	
	return 0;
}
