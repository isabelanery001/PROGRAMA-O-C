#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");          // Corrigido de "prtintf"
    scanf("%d", &idade);

    printf("Digite sua altura: \n");         // Corrigido de "print"
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");         // Corrigido de "prinf"
    scanf("%s", nome);                       // '&' não é necessário com arrays de char

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura); // %.2f para formatar a altura

    return 0;
}
