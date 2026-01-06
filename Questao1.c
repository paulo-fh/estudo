/*
    Autor: Paulo
    Questão 1 -Desenvolver um programa que leia nome e ano de nascimento de um conjunto de pessoas.
    O programa deve exibir o nome da pessoa mais velha que nasceu em um ano ímpar. A leitura dos
    dados se encerra quando o usuário digita zero para o ano de nascimento. Uma mensagem deve ser
    exibida caso não haja nascimentos em ano ímpar.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char nome[20], nome_velha[20];
    int ano_nasc, id_velha=0;

    do{
        printf("Nome: ");
        scanf(" %19[^\n]s",nome);
        printf("Ano nascimento: ");
        scanf("%d",&ano_nasc);
        if(id_velha==0 || (ano_nasc<id_velha && ano_nasc%2!=0)){
            strcpy(nome_velha,nome);
            id_velha = ano_nasc;
        }

    }while(ano_nasc!=0);

    if(id_velha!=0){
        printf("%s eh a pessoa mais velha, nasceu em %d.\n", nome_velha, id_velha);
    }else{
        printf("Não ha pessoas nascidas em ano impar!");
    }
    return 0;
}
