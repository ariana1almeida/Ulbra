package org.example;
/*
Verifique a validade de uma data e mostre uma mensagem na tela dizendo se a data é válida ou
inválida. Deve haver três variáveis para armazenar esta data: uma para o dia, outra para o mês
e outra para o ano. Considere que fevereiro pode ter somente 28 dias.
 */

public class ExercicioCinco {
    public static void main(String[] args) {
        int day = 18;
        int month = 4;
        int year = 2002;
        String date="The date: " + day + "/" + month + "/" + year;


        if (day <= 0 || day > 31) {
            System.out.println(date +"is invalid because a month can't have lesser than 1 day or more than 31");
            System.exit(0);
        }
        else if (month<=0 || month >12){
            System.out.println(date+" is invalid because of the month, use a number between 1 to 12.");
            System.exit(0);
        }else if (year<=0){
            System.out.println(date+" is invalid because year should be positive and bigger than zero.");
            System.exit(0);
        }

        switch (month){
            case 2:
                if (day>28){
                    System.out.println(date+" is invalid because, February has at most 28 days, this date is not valid.");
                    System.exit(0);
                }
                break;

            case 4:
                if(day>30){
                    System.out.println(date+" is invalid because, april has at most 30 days, this date is not valid.");
                    System.exit(0);
                }
                break;

            case 6:
                if(day>30){
                    System.out.println(date+" is invalid because, june has at most 30 days, this date is not valid.");
                    System.exit(0);
                }
                break;

            case 9:
                if(day>30){
                    System.out.println(date+" is invalid because, september has at most 30 days, this date is not valid.");
                    System.exit(0);
                }
                break;

            case 11:
                if(day>3){
                    System.out.println(date+" is invalid because, november has at most 30 days, this date is not valid.");
                    System.exit(0);
                }
                break;

        }
        System.out.println(date+" is valid.");

    }
}
