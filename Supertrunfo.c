#include <stdio.h>
int main (){
char codigo_carta1[4];
unsigned long int populacao_carta1;
float area_carta1;
float pib_carta1;
int pontos_turisticos_carta1;
float densidade_populacional_carta1;
float pib_per_capita_carta1;
float super_poder_carta1;

//carta2
char codigo_carta2[4];
unsigned long int populacao_carta2;
float area_carta2;
float pib_carta2;
int pontos_turisticos_carta2;
float densidade_populacional_carta2;
float pib_per_capita_carta2;
float super_poder_carta2;

printf("--- Cadastro carta 1 --- \n");
printf(" Digite o codigo da carta: ");
scanf("%s", codigo_carta1);
printf("Digite a populacao:");
scanf("%lu", &populacao_carta1);
printf("Digite a area (em Km2):");
scanf("%f", &pib_carta1);
printf("Digite o pib (em trilhoes): ");
scanf("%f", &pib_carta1);
printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos_carta1);
densidade_populacional_carta1 = (float)populacao_carta1 /area_carta1;
pib_per_capita_carta1 = pib_carta1 /populacao_carta1;
super_poder_carta1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + (1.0f / densidade_populacional_carta1) + pib_per_capita_carta1;

printf("\n--- cadastro da carta 2 ---\n");
printf(" Digite o codigo da carta: ");
scanf("%s", codigo_carta2);
printf("Digite a populacao:");
scanf("%lu", &populacao_carta2);
printf("Digite a area (em Km2):");
scanf("%f", &area_carta2);
printf("Digite o pib (em trilhoes)");
scanf("%f", &pib_carta2);
printf("Digite o numero de pontos turisticos:");
scanf("%d", &pontos_turisticos_carta2);
densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
pib_per_capita_carta2 = pib_carta2 / populacao_carta2;
super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + (1.0f / densidade_populacional_carta2) + pib_per_capita_carta2;







}