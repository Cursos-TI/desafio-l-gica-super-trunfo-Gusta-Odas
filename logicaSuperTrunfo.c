#include <stdio.h>

int main() {

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
    int resultado1, resultado2;
    double soma_carta1, soma_carta2;


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


    // Invertando o valor da densidade populacional e somando atributos para o super poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pib_percapita1 + ponto_turistico1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pib_percapita2 + ponto_turistico2 + (1.0 / densidade2);

    printf("\n-----------------------------\n");
    printf("Você pode selecionar dois atributos para lutar:\n");
    printf("Selecione o primeiro atributo:\n\n");

    // Menu de comparação
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");

    int primeira_opcao, segunda_opcao;
    printf("\nDigite a opção desejada (1-5): ");
    scanf("%d", &primeira_opcao);
    
    switch (primeira_opcao)
    {
    case 1:
        /* População */
        printf("Você selecionou População.\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        soma_carta1 = populacao1;
        soma_carta2 = populacao2;
        break;

    case 2:
        /* Área */
        printf("Você selecionou Área.\n");
        resultado1 = area1 > area2 ? 1 : 0;
        soma_carta1 = area1;
        soma_carta2 = area2;
        break;

    case 3:
        /* PIB */
        printf("Você selecionou PIB.\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        soma_carta1 = pib1;
        soma_carta2 = pib2;
        break;

    case 4:
        /* Num pontos turisticos */
        printf("Você selecionou o númeroe de Pontos Turísticos.\n");
        resultado1 = ponto_turistico1 > ponto_turistico2 ? 1 : 0;
        soma_carta1 = ponto_turistico1;
        soma_carta2 = ponto_turistico2;
        break;

    case 5:
        /* Densidade populacional */
        printf("Você selecionou a Densidade Populacional.\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        soma_carta1 = densidade1;
        soma_carta2 = densidade2;
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    printf("\n-----------------------------\n");
    printf("Selecione o segundo atributo (precisa ser diferente do primeiro):\n");

    // Menu de comparação
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");

    printf("\nDigite a opção desejada (1-5): ");
    scanf("%d", &segunda_opcao);

    if (primeira_opcao == segunda_opcao) {
        printf("A segunda opção deve ser diferente da primeira!\n\n");
    } else {
        
        switch (segunda_opcao)
        {
        case 1:
            /* População */
            printf("Você selecionou População.\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            soma_carta1 = soma_carta1 + populacao1;
            soma_carta2 = soma_carta2 + populacao2;
            break;
        
        case 2:
            /* Área */
            printf("Você selecionou a Área.\n");
            resultado2 = area1 > area2 ? 1 : 0;
            soma_carta1 = soma_carta1 + area1;
            soma_carta2 = soma_carta2 + area2;
            break;
        
        case 3:
            /* PIB */
            printf("Você selecionou o PIB.\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            soma_carta1 = soma_carta1 + pib1;
            soma_carta2 = soma_carta2 + pib2;
            break;
        
        case 4:
            /* Num pontos turisticos */
            printf("Você selecionou o número de Pontos Turísticos.\n");
            resultado2 = ponto_turistico1 > ponto_turistico2 ? 1 : 0;
            soma_carta1 = soma_carta1 + ponto_turistico1;
            soma_carta2 = soma_carta2 + ponto_turistico2;
            break;

        case 5:
            /* Densidade populacional */   
            printf("Você selecionou a Densidade Populacional.\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            soma_carta1 = soma_carta1 + densidade1;
            soma_carta2 = soma_carta2 + densidade2;
            break;
    
        default:
            printf("Opção inválida!\n");
            break;
        }

        // Mostrando o resultado final
        printf("\n--- * --- RESULTADO FINAL DA BATALHA --- * ---\n");
        if ((resultado1 == 1) && (resultado2 == 1)) {
            printf("Carta 1 %s venceu a batalha!\n", cidade1);
        } else if (resultado1 != resultado2) {
            printf("A batalha terminou em empate!\n");
        } else {
            printf("Carta 2 %s venceu a batalha!\n", cidade2);
        }

        printf("\n--- * --- DETALHES DA BATALHA --- * ---\n");

        if (primeira_opcao == 1) {
            printf("População da carta 1: %lu\n", populacao1);
            printf("População da carta 2: %lu\n\n", populacao2);
        } else if (primeira_opcao == 2) {
            printf("Área da carta 1: %.2f\n", area1);
            printf("Área da carta 2: %.2f\n\n", area2);
        } else if (primeira_opcao == 3) {
            printf("PIB da carta 1: %.2lf\n", pib1);
            printf("PIB da carta 2: %.2lf\n\n", pib2);
        } else if (primeira_opcao == 4) {
            printf("Número de pontos turísticos da carta 1: %d\n", ponto_turistico1);
            printf("Número de pontos turísticos da carta 2: %d\n\n", ponto_turistico2);
        } else if (primeira_opcao == 5) {
            printf("Densidade populacional da carta 1: %f\n", densidade1);
            printf("Densidade populacional da carta 2: %f\n\n", densidade2);
        }else{
            printf("Nenhum atributo válido foi selecionado para exibição.\n");
        }

        if (segunda_opcao == 1) {
            printf("População da carta 1: %lu\n", populacao1);
            printf("População da carta 2: %lu\n", populacao2);
        } else if (segunda_opcao == 2) {
            printf("Área da carta 1: %.2f\n", area1);
            printf("Área da carta 2: %.2f\n", area2);
        } else if (segunda_opcao == 3) {
            printf("PIB da carta 1: %.2lf\n", pib1);
            printf("PIB da carta 2: %.2lf\n", pib2);
        } else if (segunda_opcao == 4) {
            printf("Número de pontos turísticos da carta 1: %d\n", ponto_turistico1);
            printf("Número de pontos turísticos da carta 2: %d\n", ponto_turistico2);
        } else if (segunda_opcao == 5) {
            printf("Densidade populacional da carta 1: %f\n", densidade1);
            printf("Densidade populacional da carta 2: %f\n", densidade2);
        }else{
            printf("Nenhum atributo válido foi selecionado para exibição.\n");
        }

        printf("\nSoma dos atributos da carta 1: %.2lf\n", soma_carta1);
        printf("Soma dos atributos da carta 2: %.2lf\n\n", soma_carta2);
    }
    return 0;
}