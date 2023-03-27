package org.example;
import java.util.Scanner;

/*
Escreva um programa em Java que recebe um número
inteiro positivo e imprime se ele é um número primo ou
não. Utilize um loop for para testar se o número é primo.
 */
public class ExercicioDoisJavaTres {
    public static void main(String[] args) {
        int num;
        int cont =0;
        Scanner input = new Scanner(System.in);
        System.out.print("Digite um número inteiro positivo: ");
        num = input.nextInt();

        for (int i =1; i <= num; i ++){
            if(num % i == 0){
                cont ++;
            }

        }if(cont == 2){
            System.out.println("O número" + " " + num + " é primo" );
        }else{
            System.out.println("O número" + " " + num + " não é primo");
        }
    }
}
