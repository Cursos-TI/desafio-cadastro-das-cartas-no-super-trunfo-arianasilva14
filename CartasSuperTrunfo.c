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

     char codigo_carta[4] = 'A01, B02, C03, D04';
     char estado = 'A, H';
     char nome_cidade[10] = "sao paulo";
     int populacao = 12325000;
     float area = 1521.11;
     float pib = 699.28;
     int num_pontos_turisticos = 50;

    printf("Codigo das cartas: %d\n", codigo_carta);
    printf("Estado:  %d\n", estado);
    printf("Nome da Cidade:  %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número dos pontos turísticos: %d\n", num_pontos_turisticos);
    


    return 0;
}
