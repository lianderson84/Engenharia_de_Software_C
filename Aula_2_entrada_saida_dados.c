#include <stdio.h>

int main(){
    int idade = 42; // Diferencia maiusculas de minusculas, idade =/= Idade
    int quantidade = 1; // int = número inteiro
    float altura = 1.86; // float = número de ponto flutuante 2.25
    double peso = 120; // Mais casas decimais do que o float.
    char Opção = 'S'; // 1 caractere
    char nome[20] = "Lee"; // Variável nome deve ter até 20 caracteres
    
    printf("O seu nome é %s, você tem %d anos, sua altura é %.2f m e seu peso é %.2f kg.\n", nome, idade, altura, peso);

    /*
    printf("formato1, formato2, formato3", variavel1, variavel2, variavel3);
        - %s = string
        - %c = character
        - %d = inteiro
        - %i = inteiro (pode ser usado no lugar do %d, mas %d é mais comum para inteiros)
        - %f = float
        - %e = float em notação científica
        - %.2f = float com 2 casas decimais
        - %.2lf = double com 2 casas decimais
        - %u = inteiro sem sinal (unsigned int)
    */


    return 0;
}