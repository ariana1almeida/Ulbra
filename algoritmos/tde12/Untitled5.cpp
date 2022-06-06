#include <stdio.h>

int main(){
	int n;
	int soma=0;
	int i=0;
	
	printf("Digite o numero\n");
	scanf("%d%*c",&n);
	
	do{
	
		soma= soma+i;
		i++;
		
	} while(i<=n);
	
	printf("A soma eh: %d", soma);
}
