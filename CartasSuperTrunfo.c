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

    
    printf ("Desafio Super Trunfo - Países\n");

    printf ("Carta_01\n");

    char estado [10] = "A";
    char codigo [10] = "A01\n";
    char cidade [30] = "Fortaleza\n";
    int populacao = 200.000;
    float area = 100.10;
    int pontos = 25;

    
printf ("Estado: %s\n Codigo: %s\n Cidade: %s\n população: %d\n Area: %f\n Pontos turisticos: %d\n", estado, codigo, cidade, populacao, area, pontos);

printf ("Carta_02\n");

    char estado [10] = "B";
    char codigo [20] = "B01\n";
    char cidade [30] = "Recife\n";
    int populacao = 300.000;
    float area = 200.20;
    int pontos = 50;

    printf ("Estado: %s\n Codigo: %s\n Cidade: %s\n população: %d\n Area: %f\n Pontos turisticos: %d\n", estado, codigo, cidade, populacao, area, pontos);


return 0;

}
