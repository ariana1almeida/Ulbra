#include <stdio.h>

int main(){
	int num1, num2, num3;
	
	printf ("Digite o primeiro numero: \n");
	scanf("%d%*c", &num1);
	printf ("Digite o segundo numero: \n");
	scanf("%d%*c", &num2);
	printf ("Digite o terceiro numero: \n");
	scanf("%d%*c", &num3);
	
	if (num1>num2 && num1>num3){
		printf ("O numero maior e: %d\n", num1);
	} else if (num2>num1 && num2> num3) {
		printf ("O numero maior e: %d\n", num2);
	} else{
		printf("O numero maior e: %d\n", num3);
	}
	
	return 0;	
}
