#include <stdio.h>

int main (){
	
	int num1, num2, num3, num4;
	
	printf("Escreva tres numeros em ordem crescente:\n");
	scanf("%d%*c", &num1);
	scanf("%d%*c", &num2);
	scanf("%d%*c", &num3);
	
	printf ("Escreva um numero fora da ordem:\n");
	scanf("%d%*c", &num4);
	
	if (num4>num3){
		printf ("A ordem decrescente e: %d,%d,%d,%d\n",num4, num3, num2, num1);		
	} else if (num4>num2 && num4< num3){
		printf ("A ordem decrescente e: %d,%d,%d,%d\n", num3, num4, num2, num1);		
	} else if (num4>num1 && num4< num2){
		printf ("A ordem decrescente e: %d,%d,%d,%d\n", num3, num2, num4, num1);
	} else if (num4< num1){
		printf("A ordem decrescente e: %d,%d,%d,%d\n", num3, num2, num1, num4);
	}
	
	return 0;
}
