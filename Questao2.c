/*
    Autor: Paulo
    Questão 2 - Desenvolver um programa que receba uma quantidade desconhecida de números e
    conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100].
    A entrada de dados deve terminar quando for lido um número negativo.
*/
#include<stdio.h>

int main()
{
    int num, int_0_25, int_26_50, int_51_75, int_76_100;

    int_0_25 = int_26_50 = int_51_75 = int_76_100 = 0;

    do{
        printf("Digite um numero natural: ");
        scanf("%d",&num);
        if(num>=0 && num<=25){
            int_0_25++;
        }
        else if(num>=26 && num<=50){
            int_26_50++;
        }
        else if(num>=51 && num<=75){
            int_51_75++;
        }
        else if(num>=76 && num<=100){
            int_76_100++;
        }
    }while(num>=0);

    printf("Intervalo [0-25]: %d\n", int_0_25);
    printf("Intervalo [26-50]: %d\n", int_26_50);
    printf("Intervalo [51-75]: %d\n", int_51_75);
    printf("Intervalo [76-100]: %d\n", int_76_100);

    return 0;
}
