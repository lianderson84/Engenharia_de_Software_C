#include <stdio.h>

int main(){
    int idade = 42; // Diferencia maiusculas de minusculas, idade =/= Idade
    int quantidade = 1; // int = número inteiro
    float altura = 1.86; // float = número de ponto flutuante 2.25
    double peso = 120; // Mais casas decimais do que o float.
    char Opção = 'S'; // 1 caractere
    char nome[20] = "Lee"; // Variável nome deve ter até 20 caracteres
    int _teste; // Posso começar nome de variável com underline

    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);


    return 0;
}