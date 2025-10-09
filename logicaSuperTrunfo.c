
#include <stdio.h>

    int main(){

        //criando variaveis carta 1 e 2:

        char estado1, estado2;
        char cod_carta1[10], cod_carta2[10];
        char cidade1[20], cidade2[20];
        unsigned long int populacao1, populacao2;
        float area1, area2;
        double pib1, pib2;
        int ponto_turistico1, ponto_turistico2;
        float densidade1, densidade2;
        double pib_per_capita1, pib_per_capita2;
        double super_poder1, super_poder2;

        //lendo dados da carta 1:
        printf("Digite o estado da carta 1: (A / H) \n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta 1: (01 / 04) \n"); 
        scanf("%s", cod_carta1);

        printf("Digite o nome da cidade 1: \n");
        scanf("%s", cidade1);

        printf("Digite a população da cidade 1: \n");
        scanf("%lu", &populacao1);

        printf("Digite a área da cidade 1: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade 1: \n");
        scanf("%lf", &pib1);

        printf("Digite o número de pontos turísticos da cidade 1: \n");
        scanf("%d", &ponto_turistico1);

        //Calculando a Densidade Populacional e PIB per capita carta 1:
        densidade1 = (float) populacao1 / area1;
        pib_per_capita1 =  pib1 / (float) populacao1;

        //Mostrando os dados da carta 1:
        printf("Carta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, cod_carta1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2lf\n", pib1);
        printf("Pontos Turísticos: %d\n", ponto_turistico1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per capita: %.2lf\n\n", pib_per_capita1);

        //lendo dados da carta 2:

        printf("Digite o estado da carta 2: (A / H) \n");
        scanf(" %c", &estado2);

        printf("Digite o código da carta 2: (01 / 04) \n");
        scanf("%s", cod_carta2);

        printf("Digite o nome da cidade 2: \n");
        scanf("%s", cidade2);

        printf("Digite a população da cidade 2: \n");
        scanf("%lu", &populacao2);

        printf("Digite a área da cidade 2: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade 2: \n");
        scanf("%lf", &pib2);

        printf("Digite o número de pontos turísticos da cidade 2: \n");
        scanf("%d", &ponto_turistico2);

        //Calculando a Densidade Populacional e PIB per capita carta 2:
        densidade2 = (float) populacao2 / area2;
        pib_per_capita2 =  pib2 / (float) populacao2;

        //Mostrando os dados da carta 2:
        printf("Carta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, cod_carta2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2lf\n", area2);
        printf("PIB: %.2lf\n", pib2);
        printf("Pontos Turísticos: %d\n", ponto_turistico2);
        printf("Densidade Populacional: %.2lf\n", densidade2);
        printf("PIB per capita: %.2lf\n\n", pib_per_capita2);

       //Super Poder = Soma de todos valores numéricos.

        super_poder1 = (float)populacao1 + area1 + pib1 + pib_per_capita1 + ponto_turistico1 + (1.0 / densidade1);
        super_poder2 = (float)populacao2 + area2 + pib2 + pib_per_capita2 + ponto_turistico2 + (1.0 / densidade2);

        // Comparação de Cartas (Super Trunfo Cidades)
        printf("Comparação de cartas (PIB per capita)\n\n");
        //Resultados das comparações: PIB

        printf("Resultado Carta 1 %s: %lf\n", cidade1, pib_per_capita1);
        printf("Resultado Carta 2 %s: %lf\n", cidade2, pib_per_capita2);

        //Fazendo as comparações:
        if (pib_per_capita1 > pib_per_capita2){
            printf("Carta 1 %s VENCEU!!\n",cidade1);
        }else{
            printf("Carta 2 %s VENCEU!!\n", cidade2);
        }
        
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

        return 0;
    }