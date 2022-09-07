//Preencha um vetor com 100 n�meros inteiros de forma rand�mica. Quando o n�mero rand�mico for 999 o preenchimento deve ser encerrado.
//Ap�s  preenchido   O Programa deve possibilitar 4 op��es:
//1- exibir uma lista os n�meros presentes no vetor, n�o inclu�do o 999.
//2-  imprimir o vetor na ordem inversa.
//3-  Exibir o maior n�mero
//4 - Exibir quantos n�meros foram sorteados.
//5-Encerrar o programa.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  int vet[100];
  int i, opc, maior;
  int cont = 0;
  srand(time(NULL));
    printf("Numeros sorteados:\n");
  for (i = 0; i < 100; i++){
    vet[i] = rand() % 1000;
    printf("%d - %d\n",i+1, vet[i]);
    cont++;
    if (vet[i] == 999){
      break;
    }
  }
  system("cls");
  do{
    printf("Digite o numero para realizar a acao: \n");
    printf("1 - Exibir os n�meros presentes no vetor.\n");
    printf("2 - Imprimir o vetor na ordem inversa.\n");
    printf("3 - Exibir o maior numero.\n");
    printf("4 - Exibir quantos numeros foram sorteados.\n");
    printf("5 - Encerrar o programa.\n");
    scanf("%d%*c", &opc);

    switch (opc){
    case 1:
      printf("Numeros armazenados no vetor: \n");
      for (i = 0; i < cont; i++){
        if (vet[i]==999){
          printf(" ");
        }else{
          printf("%d - %d\n", i+1, vet[i]);
        }
      }
      break;
    case 2:
      for (i = cont-1; i >= 0; i--){
        printf("%d - %d\n", i+1, vet[i]);
      }
      break;
    case 3:
      for (i = 0; i < cont; i++){
        if (vet[i] > maior){
          maior = vet[i];
        }
      }
      printf("O maior numero eh: %d\n", maior);
      break;
    case 4:
      printf("Foram sorteados %d numeros.\n", cont);
      break;
    default:
      printf("Encerrando o programa ... \n");
      break;
    }
  } while (opc != 5);
  return 0;
}
