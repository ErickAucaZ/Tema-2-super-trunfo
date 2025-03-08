#include <stdio.h>

int main() {

        char estado1, estado2;
        char codigo1[4], codigo2[4];
        char nome_cidade1[30], nome_cidade2[30], pais1[30], pais2[30];
        unsigned long int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int num_ponto_turistico1, num_ponto_turistico2;
        float densidade1, densidade2;
        float ppc1, ppc2;
        float superpoder1, superpoder2;
        int escolhajogador;
        
        printf("---- CADASTRO CARTA 1 ----\n\n");
            
            printf("--Digite o país da 1ª carta: \n");
            scanf(" %[^\n]", pais1);

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
            printf("-País: %s", pais1);
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
    
            printf("Digite o país da 2ª carta: \n");
            scanf(" %[^\n]", pais2);

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
            printf("-País: %s\n", pais2);
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

            printf("\n---- Escolha um atributo das cartas a ser comparado! ----\n\n"); //Comparação das cartas, com base na escolha do usuário
            printf("-Nome do país carta 1: %s - Nome do país carta 2: %s\n", pais1, pais2); //Imprime o nome dos paises de cada carta
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder da carta\n");
            printf("Escolha: ");
            scanf("%d", &escolhajogador);

        switch (escolhajogador){ // usamos switch para definer o que o códgio ira responder diante da escolha do usuário
            case 1: // Caso 1 compara a população
                printf("\n-População escolhida!\n");
                if (populacao1 > populacao2){
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %lu - Carta 2: %lu\n", populacao1, populacao2);
                    printf("-Carta 1 venceu pelo atributo População!\n");
                } else if (populacao1 == populacao2) {
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %lu - Carta 2: %lu\n", populacao1, populacao2);
                    printf("-Empate!\n");
                } else {
                   printf("-Nome do país: %s\n", pais2); 
                   printf("-Carta 1: %lu - Carta 2: %lu\n", populacao1, populacao2);
                   printf("-Carta 2 venceu pelo atributo População!\n");
                }
            break;
            case 2: // Caso 2 compara a área
                printf("\n-Área escolhida!\n");
                if (area1 > area2){
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
                    printf("-Carta 1 venceu pelo atributo Área!\n");
                } else if (area1 == area2) {
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
                    printf("-Empate!\n");
                } else {
                   printf("-Nome do país: %s\n", pais2);
                   printf("-Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
                   printf("-Carta 2 venceu pelo atributo Área!\n");
                }
            break;
            case 3: //Caso 3 compara o PIB
                printf("\n-PIB escolhido!\n");
                if (pib1 > pib2){
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", pib1, pib2);
                    printf("-Carta 1 venceu pelo atributo PIB!\n");
                } else if (pib1 == pib2) {
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", pib1, pib2);
                    printf("-Empate!\n");
                } else {
                   printf("-Nome do país: %s\n", pais2); 
                   printf("-Carta 1: %.2f - Carta 2: %.2f\n", pib1, pib2);
                   printf("-Carta 2 venceu pelo atributo PIB!\n");
                }
            break;
            case 4: //Caso 4 compara o número de pontos turísticos
                printf("\n-Número de pontos turísticos escolhido!\n");
                if (num_ponto_turistico1 > num_ponto_turistico2){
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %d - Carta 2: %d\n", num_ponto_turistico1, num_ponto_turistico2);
                    printf("-Carta 1 venceu pelo atributo Número de pontos turísticos!\n");
                } else if (num_ponto_turistico1 == num_ponto_turistico2) {
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %d - Carta 2: %d\n", populacao1, populacao2);
                    printf("Empate!\n");
                } else {
                   printf("-Nome do país: %s\n", pais2); 
                   printf("-Carta 1: %d - Carta 2: %d\n", num_ponto_turistico1, num_ponto_turistico2);
                   printf("-Carta 2 venceu pelo atributo Número de pontos turísticos!\n");
                }
            break;
            case 5: //Caso 5 compara a Densidade populacional, sendo que o menor valor vence
                printf("\n-Densidade Populacional escolhida!\n");
                printf("-Regra: A carta com menor valor vence nesse atributo!!\n\n");
                if (densidade1 < densidade2){
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", densidade1, densidade2);
                    printf("-Carta 1 venceu pelo atributo Densidade Populacional!\n");
                } else if (densidade1 == densidade2) {
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", densidade1, densidade2);
                    printf("-Empate!\n");
                } else {
                   printf("-Nome do país: %s\n", pais2);
                   printf("-Carta 1: %.2f - Carta 2: %.2f\n", densidade1, densidade2);
                   printf("-Carta 2 venceu pelo atributo Densidade Populacional!\n");
                }
            break;
            case 6: //Caso 6 compara o PIB per Capita
                printf("\n-PIB per Capita escolhido!\n");
                if (ppc1 > ppc2){
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", ppc1, ppc2);
                    printf("-Carta 1 venceu pelo atributo PIB per Capita!\n");
                } else if (ppc1 == ppc2) {
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", ppc1, ppc2);
                    printf("-Empate!\n");
                } else {
                   printf("-Nome do país: %s\n", pais2);
                   printf("-Carta 1: %.2f - Carta 2: %.2f\n", ppc1, ppc2);
                   printf("-Carta 2 venceu pelo atributo PIB per Capita!\n");
                }
            break;
            case 7: //Caso 7 compara o super poder da carta
                printf("\n-Super Poder da carta escolhido!\n");
                if (superpoder1 > superpoder2){
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", superpoder1, superpoder2);
                    printf("-Carta 1 venceu pelo atributo Super Poder da carta!\n");
                } else if (superpoder1 == superpoder2) {
                    printf("-Nome do país: %s\n", pais1);
                    printf("-Carta 1: %.2f - Carta 2: %.2f\n", superpoder1, superpoder2);
                    printf("-Empate!\n");
                } else {
                   printf("-Nome do país: %s\n", pais2);
                   printf("-Carta 1: %.2f - Carta 2: %.2f\n", superpoder1, superpoder2);
                   printf("-Carta 2 venceu pelo atributo população!\n");
                }
            break;
            default: //default é para caso o usuário escolha uma opção que não é válida exemplo um número errado ou um caractere
                printf("-Escolha inválida!");
        }   
    }