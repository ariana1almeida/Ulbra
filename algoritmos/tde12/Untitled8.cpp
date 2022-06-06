#include <stdio.h>

int main(){
	int numero, i;
	
	numero = 9;
	
	for(i=1;i<=10;i++){
		printf("_______________________\n");
		printf("|%d X %d = %d \n", i, numero, i*numero);
		printf("_______________________\n");
	}
}
