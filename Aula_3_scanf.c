#include <stdio.h>

int main(){
    int idade; // Variável para armazenar a idade
    float altura; // Variável para armazenar a altura
    char nome[50]; // Variável para armazenar o nome (até 20 caracteres)

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu nome: ");
    getchar(); // Limpa o buffer do teclado antes de ler a string
    fgets(nome, 50, stdin); // Lê o nome completo do usuário (inclui o caractere de nova linha)

    printf("O seu nome é: %s\n", nome);
    printf("A sua idade é: %d anos\n", idade);
    printf("A sua altura é: %.2f m\n", altura);
    

    return 0;
}