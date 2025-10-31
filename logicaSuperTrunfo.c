#include <stdio.h>

int main() {
    
    //Dados usados nas cartas para testes
    /*
    Carta 1
    Estado: A
    Código: 01
    Cidade: Piracicaba
    População: 423323
    Área: 1374954
    PIB: 34555723.85
    Número de pontos turísticos: 5

    Carta 2
    Estado: B
    Código: 02
    Cidade: Campinas
    População: 1139047
    Área: 794571
    PIB: 72946744.92
    Número de pontos turísticos: 8
    */

    char estado1 = 'A';
    char estado2 = 'B';
    char cod_carta1[10] = "01", cod_carta2[10] = "02";
    char cidade1[20] = "Piracicaba", cidade2[20] = "Campinas";
    unsigned long int populacao1 = 423323, populacao2 = 1139047;
    float area1 = 1374954, area2 = 794571;
    double pib1 = 34555723.85, pib2 = 72946744.92;
    float pib_percapita1, pib_percapita2;
    int ponto_turistico1 = 5, ponto_turistico2 = 8;
    float densidade1, densidade2;
    float super_poder1, super_poder2;

    // Calculando a densidade populacional da carta 1
    densidade1 = (float)populacao1 / area1;

    // Calculando o PIB per capita da carta 1
    pib_percapita1 = pib1 / populacao1;

    // Mostrando os dados da carta 1
    printf("--- * --- CARTA 01 --- * ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Número de pontos turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.4f\n", densidade1);
    printf("PIB per Papita: %.2f\n\n", pib_percapita1);


    // Calculando a densidade populacional da carta 2
    densidade2 = (float)populacao2 / area2;

    // Calculando o PIB per capita da carta 2
    pib_percapita2 = pib2 / (float)populacao2;

    // Mostrando os dados da carta 2
    printf("--- * --- CARTA 02 --- * ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.4f\n", densidade2);
    printf("PIB per Papita: %.2f\n\n", pib_percapita2);


    // Invertendo o valor da densidade populacional e somando atributos para o super poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pib_percapita1 + ponto_turistico1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pib_percapita2 + ponto_turistico2 + (1.0 / densidade2);

    // Comparando as cartas
    printf("\n-----------------------------\n");
    printf("Selecione a opção que gostaria de comparar:\n\n");

    // Menu de comparação
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");

    int opcao;
    printf("\nDigite a opção desejada (1-5): ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        /* População */
        if (populacao1 > populacao2) {
            printf("Resultado de maior População\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %lu - ", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            printf("Carta 1 %s venceu!\n", cidade1);
        }else if (populacao1 < populacao2) {
            printf("Resultado de maior População\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %lu - ", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            printf("Carta 2 %s venceu!\n", cidade2);
        }else{
            printf("Resultado de maior População\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %lu - ", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            printf("Empate!\n");
        }
        break;

    case 2:
        /* Área */
        if (area1 > area2) {
            printf("Resultado de maior Área\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %.2f - ", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            printf("Carta 1 %s venceu!\n", cidade1);
        }else if (area1 < area2) {
            printf("Resultado de maior Área\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %.2f - ", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            printf("Carta 2 %s venceu!\n", cidade2);
        }else{
            printf("Resultado de maior Área\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %.2f - ", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            printf("Empate!\n");
        }
        break;

    case 3:
        /* PIB */
        if (pib1 > pib2) {
            printf("Resultado de maior PIB\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %.2lf - ", cidade1, pib1);
            printf("%s: %.2lf\n", cidade2, pib2);
            printf("Carta 1 %s venceu!\n", cidade1);
        }else if (pib1 < pib2) {
            printf("Resultado de maior PIB\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %.2lf - ", cidade1, pib1);
            printf("%s: %.2lf\n", cidade2, pib2);
            printf("Carta 2 %s venceu!\n", cidade2);
        }else{
            printf("Resultado de maior PIB\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %.2lf - ", cidade1, pib1);
            printf("%s: %.2lf\n", cidade2, pib2);
            printf("Empate!\n");
        }
        break;

    case 4:
        /* Num. pontos turisticos */
        if (ponto_turistico1 > ponto_turistico2) {
            printf("Resultado de mais Pontos Turísticos\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %d - ", cidade1, ponto_turistico1);
            printf("%s: %d\n", cidade2, ponto_turistico2);
            printf("Carta 1 %s venceu!\n", cidade1);
        }else if (ponto_turistico1 < ponto_turistico2) {
            printf("Resultado de mais Pontos Turísticos\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %d - ", cidade1, ponto_turistico1);
            printf("%s: %d\n", cidade2, ponto_turistico2);
            printf("Carta 2 %s venceu!\n", cidade2);
        }else{
            printf("Resultado de mais Pontos Turísticos\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %d - ", cidade1, ponto_turistico1);
            printf("%s: %d\n", cidade2, ponto_turistico2);
            printf("Empate!\n");
        }
        break;

    case 5:
        /* Dens. populacional */
        if (densidade1 > densidade2) {
            printf("Resultado menor Densidade Populacional\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %lu - ", cidade1, densidade1);
            printf("%s: %lu\n", cidade2, densidade2);
            printf("Carta 2 %s venceu!\n", cidade2);
        }else if (densidade1 < densidade2) {
            printf("Resultado menor Densidade Populacional\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %lu - ", cidade1, densidade1);
            printf("%s: %lu\n", cidade2, densidade2);
            printf("Carta 1 %s venceu!\n", cidade1);
        }else{
            printf("Resultado menor Densidade Populacional\n");
            printf("--------- %s VS %s! ---------\n", cidade1, cidade2);
            printf("%s: %lu - ", cidade1, densidade1);
            printf("%s: %lu\n", cidade2, densidade2);
            printf("Empate!\n");
        }
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }


    return 0;
}