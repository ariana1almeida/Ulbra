package org.example;
import java.util.Scanner;

/*
Escreva um programa em Java que solicita um número
inteiro positivo e imprime todos os números ímpares
entre 1 e esse número. Utilize um loop for para realizar a
impressão.
 */

public class ExercicioCincoJavaTres {
    public static void main(String[] args) {
        int num;
        int i = 1;
        Scanner input = new Scanner(System.in);

        System.out.print("Digite um número: ");
        num = input.nextInt();

        while (i <= num){
            if (i % 2 == 1){
                System.out.println("os números ímpares são: " + " "+  i  + " " );
            }
            i++;
        }
    }
}
