#include <stdio.h>

int main (){
    int idade, matricula;
    float nota1, nota2, nota3, media;
    char nome[50];

    printf("Digite o nome do aluno: ");
    fgets(nome, 50, stdin);

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Nome: %s", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Média: %.2f\n", media);

    return 0;

}