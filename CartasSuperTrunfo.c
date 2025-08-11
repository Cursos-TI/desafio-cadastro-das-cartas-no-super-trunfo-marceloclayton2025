#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Variáveis para carta 1
        char estado1;
        char Codigo1[4];         // por exemplo: a01
        char nomeCidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;

        // Variáveis para carta 2
        char estado2;
        char codigo2[4];
        char nomeCidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Cadastro das Cartas:
        // Instruções para o usuário - carta 1
        printf("Cadastro da Carta 1:\n");

        printf("Digite o Estado (letra de A a H): ");
        scanf(" %c", &estado1);

        printf("Digite o Código da Carta (ex: A01): ");
        scanf("%3s", codigo1);

        printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade1);  // lê até o newline

        printf("Digite a População: ");
        scanf("%d", &populacao1);

        printf("Digite a Área (em km²): ");
        scanf("%f", &area1);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", &pontosTuristicos1);

        printf("\n"); // Linha em branco para separar as entradas

        // Instruções para o usuário - carta 2
        printf("Cadastro da Carta 2:\n");

        printf("Digite o Estado (letra de A a H): ");
        scanf(" %c", &estado2);

        printf("Digite o Código da Carta (ex: B02): ");
        scanf("%3s", codigo2);

        printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade2);

        printf("Digite a População: ");
        scanf("%d", &populacao2);

        printf("Digite a Área (em km²): ");
        scanf("%f", &area2);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", &pontosTuristicos2);

        printf("\n");
         // Linha em branco antes da exibição

        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição dos dados - carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco para separar

    // Exibição dos dados - carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
