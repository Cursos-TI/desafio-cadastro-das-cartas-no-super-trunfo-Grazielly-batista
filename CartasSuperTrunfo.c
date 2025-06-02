#include <stdio.h>



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado [3];
    char codigo [10];
    char nomecidade[100];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;
    printf("digite o estado: \n");
    scanf("%2s", estado);
    printf("digite o codigo: \n");
    scanf("%s", codigo);
    printf("digite o nome da cidade: \n");
    scanf(" %99[^\n]", nomecidade);
    printf("digite a populacao: \n");
    scanf("%d", &populacao);
    printf("digite o area: \n");
    scanf("%f", &area);
    printf("digite o pib: \n");
    scanf("%f", &pib);
    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numerodepontosturisticos);
    printf("\n--- dados da cidade ---\n");
    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("nome da cidade: %s\n", nomecidade);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f km2\n", area);
    printf("pib: %.2f bilhoes \n", pib);
    printf("numero de pontos turisticos: %d\n", numerodepontosturisticos);
    return 0;
}  
