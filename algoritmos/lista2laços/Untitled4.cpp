 //Ler dois valores inteiros e escrever o resultado da divisão do 
 //primeiro pelo segundo. Se o segundo valor informado for ZERO, 
 //deve ser impressa uma mensagem de VALOR INVÁLIDO e ser lido um novo valor. 
 //Ao final do programa deve ser impressa a seguinte mensagem: VOCE DESEJA 
 //OUTRO CÁLCULO (S/N).  Se a resposta for S o programa deverá retornar ao 
 //começo, caso contrário deverá encerrar a sua execução imprimindo quantos 
 //cálculos foram feitos. 
 
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
	printf("Valor da divisão: %f\n", div);
	
	printf("Digite S para continuar e N para parar: \n");
	std::cin >> yn;

 } while (yn=="s"||yn=="S");
	printf("O numero de divisões foi de: %d \n", iterations);
}
