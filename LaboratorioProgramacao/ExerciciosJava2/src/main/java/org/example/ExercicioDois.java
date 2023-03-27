package org.example;
/*
1. Imprima todos os números inteiros de 10 a 25 utilizando uma estrutura de repetição.
2. Imprima a soma dos números de 1 a 100, pulando de dois em dois (1, 3, 5, 7, etc.).
3. Começando em 0, imprima os números seguintes, enquanto a soma dos números já
impressos for menor que 100.
4. Imprima a tabuada do 9 (até o décimo valor).
 */
public class ExercicioDois {
    public static void main(String[] args) {
        int i=10;
        do{
            System.out.println(i);
            i++;
        }while(i<26);

        System.out.println("----------");

        int j=1;
        do{
            System.out.println(j);
            j=j+2;
        }while(j<=100);

        System.out.println("----------");

        int k=0;
        for (int l=0;l<100;k++){
            if (l+k>=100){
                break;
            }
            System.out.println(k);
            l=l+k;
        }

        System.out.println("----------");

        for (int m=1;m<=10;m++){
            System.out.println(m*9);
        }

    }
}
