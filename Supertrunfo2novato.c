#include <stdio.h>

int main() {

        char estado1, estado2;
        char codigo1[4], codigo2[4];
        char nome_cidade1[30], nome_cidade2[30];
        unsigned long int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int num_ponto_turistico1, num_ponto_turistico2;
        float densidade1, densidade2;
        float ppc1, ppc2;
        float superpoder1, superpoder2;
        
        printf("---- CADASTRO CARTA 1 ----\n\n");
                
            printf("--Digite o estado (Uma letra de 'A' a 'H'): \n");
            scanf(" %c", &estado1);
                
            printf("--Digite o código da cidade (A letra do estado e um número de 01 a 04): \n");
            scanf("%s", codigo1);
            getchar ();
            printf("--Digite o nome da cidade: \n");
            scanf(" %[^\n]", nome_cidade1);
    
            printf("--Digite a população da cidade: \n");
            scanf("%lu", &populacao1);
    
            printf("--Digite a área da cidade em KM²: \n");
            scanf("%f", &area1);
    
            printf("--Digite o PIB da cidade em bilhões: \n");
            scanf("%f", &pib1);
    
            printf("--Digite o número de pontos turísticos: \n");
            scanf("%d", &num_ponto_turistico1);
    
            densidade1 = populacao1 / area1;
            float densidade_invertida1 = 1 / densidade1;

            ppc1 = (pib1 * 1e9) / populacao1;
                
            superpoder1 = (float) populacao1 + area1 + pib1 + num_ponto_turistico1 + ppc1 + densidade_invertida1;

            printf("\n--Carta 1--\n\n");
            printf("-Estado: %c\n", estado1);
            printf("-Código da cidade: %s\n", codigo1);
            printf("-Nome da Cidade: %s\n", nome_cidade1);
            printf("-População da cidade: %lu\n", populacao1);
            printf("-Área da cidade em km²: %.2f KM²\n", area1);
            printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib1);
            printf("-Número de pontos turísticos: %d\n", num_ponto_turistico1);
            printf("-Densidade populacional: %.2f hab/km²\n", densidade1);
            printf("-PIB per capita: %.2f reais\n", ppc1);
            printf("-Super Poder da carta 1: %.2f\n", superpoder1);
    
        printf("\n---- CADASTRO CARTA 2 ----\n\n"); 
    
            printf("--Digite o estado (Uma letra de 'A' a 'H'): \n");
            scanf(" %c", &estado2);
                
            printf("--Digite o código da cidade (A letra do estado e um número de 01 a 04): \n");
            scanf("%s", codigo2);
            getchar ();
            printf("--Digite o nome da cidade: \n");
            scanf(" %[^\n]", nome_cidade2);
    
            printf("--Digite a população da cidade: \n");
            scanf("%lu", &populacao2);
    
            printf("--Digite a área da cidade em KM²: \n");
            scanf("%f", &area2);
    
            printf("--Digite o PIB da cidade em bilhões: \n");
            scanf("%f", &pib2);
    
            printf("--Digite o número de pontos turísticos: \n");
            scanf("%d", &num_ponto_turistico2);
    
            densidade2 = populacao2 / area2;
            float densidade_invertida2 = 1 / densidade2;

            ppc2 =  (pib2 * 1e9) / populacao2;

            superpoder2 = (float) populacao2 + area2 + pib2 + num_ponto_turistico2 + ppc2 + densidade_invertida2;             

            printf("\n--Carta 2--\n\n");
            printf("-Estado: %c\n", estado2);
            printf("-Código da cidade: %s\n", codigo2);
            printf("-Nome da Cidade: %s\n", nome_cidade2);
            printf("-População da cidade: %lu\n", populacao2);
            printf("-Área da cidade em km²: %.2f KM²\n", area2);
            printf("-PIB da cidade em bilhões de reais: %.2f bilhões de reais\n", pib2);
            printf("-Número de pontos turísticos: %d\n", num_ponto_turistico2);
            printf("-Densidade populacional: %.2f hab/km²\n", densidade2);
            printf("-PIB per capita: %.2f reais\n", ppc2);
            printf("-Super Poder da carta 2: %.2f\n", superpoder2);

            printf("\n-- Comparação das Cartas pelo PIB --\n\n"); //Uma comparação única das cartas usando if, else

            printf("PIB da Carta 1 %s - %.2f\n", nome_cidade1, pib1); //informa a cidade e o pib da carta 1
            printf("PIB da Carta 2 %s - %.2f\n", nome_cidade2, pib2); //informa a cidade e o pib da carta 2

            //usamos if, else para determinar qual carta vencerá
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 - %s - venceu!\n", nome_cidade1);
            } else {
                printf("Resultado: Carta 2 - %s - venceu!\n", nome_cidade2);
            }

}