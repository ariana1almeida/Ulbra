//-Faça um algoritmo que Preencha 4 vetores: 
//o primeiro com a nota da primeira prova; 
//o segundo com a nota da segunda prova;
//o terceiro com as média aritmética das 2 primeiras notas;
//O Quarto com o nome do Aluno.
//O programa deve ao fim de cada leitura perguntar se o usuário deseja adicionar um novo aluno. Defina o vetor com no máximo 10 alunos, Após adicionados:
//O Programa deve possibilitar 4 opções:
//1- Listar todos os alunos aprovados
//2 -Listar todos os alunos reprovados
//3- Listar todos os alunos com nota maior que uma nota informada pelo usuário.
//4-Informar uma Posição e o programa exibir os dados e notas do aluno.
//5- Encerrar o programa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float prova1[10], prova2[10], media[10], nota;
    char aluno[10][20];
    int todosAlunos = 0, opcao, i = 0, op, posicao;

    do
    {
        for (i = 0; i < 10; i++)
        {
            printf("Digite a nota da primeira prova:\n");
            scanf("%f%*c", &prova1[i]);

            printf("Digite a nota da segunda prova:\n");
            scanf("%f%*c", &prova2[i]);

            media[i] = (prova1[i] + prova2[i]) / 2;

            printf("Digite o nome do aluno:\n");
            scanf("%s%*c", &aluno[i]);
            todosAlunos++;

            printf("Adicionar novo aluno?\n 1-Sim \n 2-Nao\n");
            scanf("%d%*c", &opcao);

            if (opcao == 1)
            {
                continue;
            }
            else if (opcao != 2)
            {
                printf("opcao invalida\n");
                break;
            }
            else
            {
                break;
            }
        }
        i++;

    } while (i == 0);

    do
    {
        printf("1 - Listar todos os alunos aprovados.\n");
        printf("2 - Listar todos os alunos reprovados.\n ");
        printf("3 - Listar os alunos com a nota maior que a nota informada.\n");
        printf("4 - Informar uma posicao e exibir dados e notas do aluno.\n");
        printf("5 - Encerrar o programa.\n");
        scanf("%d%*c", &op);

        switch (op)
        {
        case 1:
            printf("Alunos aprovados:\n");
            for (i = 0; i < todosAlunos; i++){
                if (media[i] >= 7)
                {
                    printf("Aluno %d: %s; media %.2f\n",i+1, aluno[i], media[i]);
                }
            }
            break;
        case 2:
            printf("Alunos reprovados:\n");
            for (i = 0; i < todosAlunos; i++)
            {
                if (media[i] < 7)
                {
                    printf("Aluno %d: %s; media %.2f\n",i+1, aluno[i], media[i]);
                }
            }
            break;
        case 3:
            printf("Digite uma nota:\n");
            scanf("%f%*c", &nota);
            printf("Alunos com nota maior:\n");
            for (i = 0; i < todosAlunos; i++)
            {
                if (nota < prova1[i] && nota < prova2[i])
                {
                    printf("aluno %s\n", aluno[i]);
                }
            }
            break;
        case 4:
            printf("Digite o numero do aluno que deseja verificar. Foram registrados %d alunos:\n", todosAlunos);
            scanf("%d%*c", &posicao);

            for (i = 0; i < todosAlunos; i++)
            {
                if (posicao == i+1)
                {
                    printf("%s \n Primeira nota:%.2f \n Segunda nota:%.2f \n Media:%.2f\n\n ", aluno[i], prova1[i], prova2[i], media[i]);
                }
            }
            break;
        }
    } while (op != 5);
    printf("Encerrando o programa...");
}
