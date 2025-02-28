#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char A, B, C, D, E, F, G, H;
    char codcarta1, codcarta2[20];
    char nomeE1, nomeE2[20];
    int populacao1, populacao2;
    int numerosP1, numerosp2;
    float area1, area2;
    float pib1, pib2;
     
    printf("Carta 1:\n");

    printf("Digite a letra do Estado:\n");
    scanf("%s", &A);

    printf("Digite o código da carta:\n");
    scanf("%s", &codcarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeE1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite quantos pontod turísticos possui a cidade:\n");
    scanf("%d");
    

    printf("Carta 1:\n");
    printf("Estado: %s\n", A);
    printf("Cidade: %s\n", nomeE1);
    printf("Codigo: %s-%s\n", A, codcarta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKm²\n", area1);
    printf("PIB: R$ %.f bilhões\n", pib1);
    printf("Número de Ponto Turístico: %d\n", numerosP1);

    return 0;


}
