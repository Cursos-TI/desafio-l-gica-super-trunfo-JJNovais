#include <stdio.h>
// O programa coleta dados sobre duas cidades e exibe as informações de cada uma delas.
int main() {
    // Definição de variáveis para armazenar os dados da cidade.
    char estado1, estado2;
    char codigo1[3];
    char cidade1[30];
    char codigo2[3];
    char cidade2[30];
    unsigned int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;
    float densidade_invertida1, densidade_invertida2, super_poder1, super_poder2;

    printf("*** Carta 1 ***\n"); // Exibe qual a carta a ser cadastrada.

    // Perguntas sobre os dados da cidade, pedindo que digite o dado em questão.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões de reais: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e do PIB per capita.
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) (pib1 * 1000000000) / populacao1;
    /* Como o PIB foi digitado em bilhões, 
    multiplicamos por 1 bilhão para 
    obter o valor do pib per capita em reais.*/ 

    // Inversão da densidade populacional para comparação.
    densidade_invertida1 = 1 / densidade_populacional1;

    printf("\n");
    // Exibição dos dados recolhidos anteriormente sobre a cidade, para a primeira carta.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n");
    
    printf("*** Carta 2 ***\n"); // Exibe qual a carta a ser cadastrada (no caso agora a segunda carta).
    
    // Perguntas sobre os dados da cidade, pedindo que digite o dado em questão.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2); 
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%u", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões de reais: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e do PIB per capita.
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2; 
    /* Como o PIB foi digitado em bilhões, 
    multiplicamos por 1 bilhão para 
    obter o valor do pib per capita em reais.*/ 

    // Inversão da densidade populacional para comparação.
    densidade_invertida2 = 1 / densidade_populacional2;

    printf("\n");
    // Exibição dos dados recolhidos anteriormente sobre a cidade, para a segunda carta.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Cálculo do super poder de cada carta, que é a soma de todos os atributos da carta.
    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + densidade_invertida1 + pib_per_capita1;
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + densidade_invertida2 + pib_per_capita2;

    printf("\n");
    // Exibição do super poder de cada carta.
    printf("*** Comparação das Cartas ***\n");

    // Comparações entre os atributos das cartas, utilizando if-else para determinar qual carta venceu em cada atributo.
    if (populacao1 > populacao2) {
        printf("A Carta 1 venceu na população, que teve o valor de: %u! E a carta 2 de: %u!\n", populacao1, populacao2);
    } else {
        printf("A Carta 2 venceu na população, que teve o valor de: %u! E a carta 1 de: %u!\n", populacao2, populacao1);
    }

    if (area1 > area2) {
        printf("A Carta 1 venceu na área, que teve o valor de: %.2f km²! E a carta 2 de: %.2f km²!\n", area1, area2);
    } else {
        printf("A Carta 2 venceu na área, que teve o valor de: %.2f km²! E a carta 1 de: %.2f km²!\n", area2, area1);
    }
    
    if (pib1 > pib2) {
        printf("A Carta 1 venceu no PIB, que teve o valor de: %.2f bilhões de reais! E a carta 2 de: %.2f bilhões de reais!\n", pib1, pib2);
    } else {
        printf("A Carta 2 venceu no PIB, que teve o valor de: %.2f bilhões de reais! E a carta 1 de: %.2f bilhões de reais!\n", pib2, pib1);
    }
    
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("A Carta 1 venceu nos pontos turísticos, que teve o valor de: %d! E a carta 2 de: %d!\n", pontos_turisticos1, pontos_turisticos2);
    } else {
        printf("A Carta 2 venceu nos pontos turísticos, que teve o valor de: %d! E a carta 1 de: %d!\n", pontos_turisticos2, pontos_turisticos1);
    }
    
    if (densidade_populacional1 < densidade_populacional2) {
        printf("A Carta 1 venceu na densidade populacional, que teve o valor de: %.2f hab/km²! E a carta 2 de: %.2f hab/km²!\n", densidade_populacional1, densidade_populacional2);
    } else {
        printf("A Carta 2 venceu na densidade populacional, que teve o valor de: %.2f hab/km²! E a carta 1 de: %.2f hab/km²!\n", densidade_populacional2, densidade_populacional1);
    }
    
    if (pib_per_capita1 > pib_per_capita2) {
        printf("A Carta 1 venceu no PIB per capita, que teve o valor de: %.2f reais! E a carta 2 de: %.2f reais!\n", pib_per_capita1, pib_per_capita2);
    } else {
        printf("A Carta 2 venceu no PIB per capita, que teve o valor de: %.2f reais! E a carta 1 de: %.2f reais!\n", pib_per_capita2, pib_per_capita1);
    }

    if (super_poder1 > super_poder2) {
        printf("A Carta 1 venceu no Super Poder, que teve o valor de: %.2f! E a carta 2 de: %.2f!\n", super_poder1, super_poder2);
    } else {
        printf("A Carta 2 venceu no Super Poder, que teve o valor de: %.2f! E a carta 1 de: %.2f!\n", super_poder2, super_poder1);
    }

    return 0;
    // Fim do programa.
}
