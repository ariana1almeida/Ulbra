//Escrever um programa que gera os n�meros de 1000 a 1999 e escreve aqueles que divididos por 11 d�o um resto igual a 5.

#include <stdio.h>

int main(){
	int i;
	
	for (i=1000;i<2000; i++){
		if (i%11==5) {
        printf("%d\n", i);
        i++;
    	}
	}
	return 0;
}
