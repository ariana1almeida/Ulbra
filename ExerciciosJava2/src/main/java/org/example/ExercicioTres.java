package org.example;
/*
Imprima os 15 primeiros números da série de Fibonacci. A série de Fibonacci é tem os
seguintes elementos: 0, 1, 1, 2, 3, 5, 8, 13, 21, etc. Para calculá-la, o primeiro e segundo
elementos valem 1, e daí por diante, o n-ésimo elemento vale o (n-1)-ésimo elemento somado
ao (n-2)-ésimo elemento (ex: 8 = 5 + 3).
 */
public class ExercicioTres {
    public static void main(String[] args) {
        int num1 = 1, num2 = 0;

        System.out.println(num2);
        System.out.println(num1);

        for (int i = 0; i <= 15; i++) {
            num1 = num1 + num2;
            num2 = num1 - num2;
            System.out.println(num1);
        }
    }
}
