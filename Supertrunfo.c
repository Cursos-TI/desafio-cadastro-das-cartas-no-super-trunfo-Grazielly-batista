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
printf("Digite o pib (em trilhoes):");
scanf("%f", &pib_carta2);
printf("Digite o numero de pontos turisticos:");
scanf("%d", &pontos_turisticos_carta2);
densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
pib_per_capita_carta2 = pib_carta2 / populacao_carta2;
super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + (1.0f / densidade_populacional_carta2) + pib_per_capita_carta2;
printf("\n--- dados da carta 1 (%s) ---\n" , codigo_carta1);
printf("populacao: %lu\n", populacao_carta1);
printf("area: %.2f km2\n", area_carta1);
printf("pib: %.2f trilhoes: \n", pib_carta1);
printf("pontos turisticos: %d\n", pontos_turisticos_carta1);
printf("densidade populacional: %.2f hab/km2\n", densidade_populacional_carta1);
printf("pib per capita: %.2f trilhoes/hab\n", pib_per_capita_carta1);
printf("super poder: %.2f\n", super_poder_carta1);
//exibiçao carta 2
printf("\n--- dados da carta 2 (%s) ---\n", codigo_carta2);
printf("populacao: %lu\n", populacao_carta2);
printf("area: %.2f km2\n", area_carta2);
printf("pib: %.2f trilhoes\n", pib_carta2);
printf("pontos turisticos: %d\n", pontos_turisticos_carta2);
printf("densidade populacional:%.2f hab/km2\n", densidade_populacional_carta2);
printf("pib per capita: %.2f trilhoes/hab\n", pib_per_capita_carta2);
printf("super poder: %.2f\n", super_poder_carta2);
//comparacao de atributos
printf("\n--- comparacao de atributos (1= carta 1 vence, 0 = carta 2 vence) ---\n");
printf("populacao: %d\n", populacao_carta1 > populacao_carta2 ? 1 : 0);
printf("area: %d\n", area_carta1 > area_carta2 ? 1 : 0);
printf("pib: %d\n", pib_carta1 > pib_carta2 ? 1: 0);
printf("pontos turisticos: %d\n", pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0);
printf(" densdade ppulacional: %d\n", densidade_populacional_carta1 > densidade_populacional_carta2 ? 1 : 0);
printf("pib per capita %d\n", pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 :0);
printf("super poder: %d\n", super_poder_carta1 > super_poder_carta2 ? 1 : 0);
return 0;








}