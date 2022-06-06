#include <stdio.h>

int main(){
	int num1, num2;
	
	printf ("Digite o primeiro numero: \n");
	scanf("%d%*c", &num1);
	printf ("Digite o segundo numero: \n");
	scanf("%d%*c", &num2);
	
	if (num1<num2){
		printf ("O numero menor e: %d\n", num1);
	} else {
		printf ("O numero menor e: %d\n", num2);
	}
	
	return 0;	
}
