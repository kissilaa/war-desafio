//inclusão das bibliotecas

#include <stdio.h>
#include <string.h>

//definir o maximo de 5 territorios
#define MAX_TERRITORIOS 5

// Definição da struct territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    // Vetor de 5 territórios
    struct Territorio territorios[MAX_TERRITORIOS];

    // Cadastro dos territórios
    for (int i = 0; i < MAX_TERRITORIOS; i++) {

        printf("\n===== CADASTRO DE TERRITORIOS =====\n");
        
        printf("Cadastro do territorio %d\n", i + 1);
        
        printf("Digite o nome: ");
        fgets(territorios[i].nome, 30, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Digite a cor do exercito: ");
        fgets(territorios[i].cor, 10, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Digite o numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // limpa o ENTER do buffer
        printf("\n");
    }

    // Exibição dos dados
    printf("\n===== TERRITORIOS CADASTRADOS =====\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome do territorio: %s\n", territorios[i].nome);
        printf("Cor do territorio: %s\n", territorios[i].cor);
        printf("Quantitade de tropas: %d\n", territorios[i].tropas);
    }

    return 0;

}