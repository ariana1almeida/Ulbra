 //Ler dois valores inteiros e escrever o resultado da divis�o do 
 //primeiro pelo segundo. Se o segundo valor informado for ZERO, 
 //deve ser impressa uma mensagem de VALOR INV�LIDO e ser lido um novo valor. 
 //Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA 
 //OUTRO C�LCULO (S/N).  Se a resposta for S o programa dever� retornar ao 
 //come�o, caso contr�rio dever� encerrar a sua execu��o imprimindo quantos 
 //c�lculos foram feitos. 
 
 #include <stdio.h>
 #include <iostream>*
 #include <string>
 using namespace std;
 int main(){
 	int num1, num2;
 	float div;
 	std::string yn;
 	int iterations=0;
 	do{
 		iterations++;
	 	printf("Digite o primeiro numero:\n");
	 	scanf("%d%*c", &num1);
 	
	 	do{
		 	printf("Digite o segundo numero:\n");
		 	scanf("%d%*c", &num2);	
		 	if(num2==0){
		 		printf("Numero invalido, digite um numero diferente de 0.");
			 }
		 }while (num2==0);
	 	
	div=num1/num2;
	printf("Valor da divis�o: %f\n", div);
	
	printf("Digite S para continuar e N para parar: \n");
	std::cin >> yn;

 } while (yn=="s"||yn=="S");
	printf("O numero de divis�es foi de: %d \n", iterations);
}
