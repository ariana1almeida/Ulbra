#include <stdio.h>

int main (){
	int num1, num2, num3;
	
	printf ("Digite o primeiro numero:\n");
	scanf("%d%*c", & num1);
	
	printf ("Digite o segundo numero: \n");
	scanf ("%d%*c", &num2);
	
	printf ("Digite o terceiro numero: \n");
	scanf ("%d%*c", &num3);
	
	if (num1<num2 && num1< num3){
		if(num2<num3){
			printf("A ordem crescente e : %d,%d,%d\n", num1, num2, num3);
		} else{
			printf("A ordem crescente e: %d,%d,%d\n",num1, num3, num2);
		}
	}
	
	if(num2<num1 && num2< num3){
		if (num1<num3){
			printf("A ordem crescente e: %d,%d,%d\n", num2, num1, num3);
		} else{
			printf("A ordem crescente e: %d,%d,%d\n", num2, num3, num1);
		}
	}
	
	if (num3<num1 && num3 <num2){
		if(num1 <num2){
			printf("A ordem crescente e: %d,%d,%d\n",num3, num1, num2);
		} else{
			printf("A ordem crescente e: %d,%d,%d\n", num3, num2, num1);
		}
	}
	
	return 0;
}
