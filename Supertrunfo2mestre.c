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
        int escolhajogador, escolhajogador2;
        float soma1, soma2;
        float resultado1, resultado2;

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

            printf("\n==== Escolha um atributo a ser comparado ====\n\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder da Carta\n");
            printf("-Escolha: ");
            scanf("%d", &escolhajogador);

            switch (escolhajogador){
            case 1:
                resultado1 = populacao1 > populacao2 ? 1 : 0;
                if (resultado1 == 1) {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-População da Carta 1: %lu - População da Carta 2: %lu\n", populacao1, populacao2);
                    printf("-Carta 1 venceu pelo atributo população!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-População da Carta 1: %lu - População da Carta 2: %lu\n", populacao1, populacao2);
                    printf("-Carta 2 venceu pelo atributo população!\n"); }
            break;
            case 2:
                resultado1 = area1 > area2 ? 1 : 0;
                if (resultado1 == 1){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Área da Carta 1: %.2f - Área da Carta 2: %.2f\n", area1, area2);
                    printf("-Carta 1 venceu pelo atributo área!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Área da Carta 1: %.2f - Área da Carta 2: %.2f\n", area1, area2);
                    printf("-Carta 2 venceu pelo atributo área!\n"); }
            break;
            case 3:
                resultado1 = pib1 > pib2 ? 1 : 0;
                if (resultado1 == 1) {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-PIB da Carta 1: %.2f - PIB da Carta 2: %.2f", pib1, pib2);
                    printf("-Carta 1 venceu pelo atributo PIB!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-PIB da Carta 1: %.2f - PIB da Carta 2: %.2f", pib1, pib2);
                    printf("-Carta 2 venceu pelo atributo PIB!\n"); }   
            break;
            case 4:
                resultado1 = num_ponto_turistico1 > num_ponto_turistico2 ? 1 : 0;
                if(resultado1 == 1){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Número de pontos turísticos da Carta 1: %d - Número de pontos turísticos da Carta 2: %d\n", num_ponto_turistico1, num_ponto_turistico2);
                    printf("-Carta 1 venceu pelo atributo número de pontos turísticos!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Número de pontos turísticos da Carta 1: %d - Número de pontos turísticos da Carta 2: %d\n", num_ponto_turistico1, num_ponto_turistico2);
                    printf("-Carta 2 venceu pelo atributo número de pontos turísticos!\n"); }
            break;
            case 5:
                resultado1 = densidade1 < densidade2 ? 1 : 0;
                if (resultado1 == 1){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Densidade Populacional da Carta 1: %.2f - Densidade Populacional da Carta 2: %.2f\n", densidade1, densidade2);
                    printf("-Carta 1 venceu pelo atributo densidade populacional!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Densidade Populacional da Carta 1: %.2f - Densidade Populacional da Carta 2: %.2f\n", densidade1, densidade2);
                    printf("-Carta 2 venceu pelo atributo densidade populacional!\n"); }
            break;
            case 6:
                resultado1 = ppc1 > ppc2 ? 1 : 0;
                if (resultado1 == 1) {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("PIB per Capita da Carta 1: %.2f - PIB per Capita da Carta 2: %.2f\n", ppc1, ppc2);
                    printf("-Carta 1 venceu pelo atributo PIB per capita!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("PIB per Capita da Carta 1: %.2f - PIB per Capita da Carta 2: %.2f\n", ppc1, ppc2);
                    printf("-Carta 2 venceu pelo atributo PIB per capita!\n"); }
            break;
            case 7:
                resultado1 = superpoder1 > superpoder2 ? 1 : 0;
                if (resultado1 == 1){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("Super Poder da Carta 1: %.2f - Super Poder da Carta 2: %.2f\n", superpoder1, superpoder2);
                    printf("-Carta 1 venceu pelo atributo Super Poder!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("Super Poder da Carta 1: %.2f - Super Poder da Carta 2: %.2f\n", superpoder1, superpoder2);
                    printf("-Carta 2 venceu pelo atributo Super Poder!\n"); }
            break;
            default:
                printf("Opção Inválida!\n");
            }

            printf("\n==== Escolha um segundo atributo a ser comparado ====\n");
            printf("= Atenção: Não escolher o mesmo atributo para fazer a comparação! =\n\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("7. Super Poder da Carta\n");
            printf("-Escolha: ");
            scanf("%d", &escolhajogador2);
            
            if (escolhajogador == escolhajogador2){
                printf("Você escolheu os mesmos atributos!");
            } else {
            switch (escolhajogador2){
            case 1:
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-População da Carta 1: %lu - População da Carta 2: %lu\n", populacao1, populacao2);
                    printf("-Carta 1 venceu pelo atributo população!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-População da Carta 1: %lu - População da Carta 2: %lu\n", populacao1, populacao2);
                    printf("-Carta 2 venceu pelo atributo população!\n"); }
            break;
            case 2:
                resultado2 = area1 > area2 ? 1 : 0;
                if (resultado2 == 1){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Área da Carta 1: %.2f - Área da Carta 2: %.2f\n", area1, area2);
                    printf("-Carta 1 venceu pelo atributo área!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Área da Carta 1: %.2f - Área da Carta 2: %.2f\n", area1, area2);
                    printf("-Carta 2 venceu pelo atributo área!\n"); }
            break;
            case 3:
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-PIB da Carta 1: %.2f - PIB da Carta 2: %.2f", pib1, pib2);
                    printf("-Carta 1 venceu pelo atributo PIB!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-PIB da Carta 1: %.2f - PIB da Carta 2: %.2f\n", pib1, pib2);
                    printf("-Carta 2 venceu pelo atributo PIB!\n"); }
            break;
            case 4:
                resultado2 = num_ponto_turistico1 > num_ponto_turistico2 ? 1 : 0;
                if(resultado2 == 1){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Número de pontos turísticos da Carta 1: %d - Número de pontos turísticos da Carta 2: %d\n", num_ponto_turistico1, num_ponto_turistico2);
                    printf("-Carta 1 venceu pelo atributo número de pontos turísticos!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Número de pontos turísticos da Carta 1: %d - Número de pontos turísticos da Carta 2: %d\n", num_ponto_turistico1, num_ponto_turistico2);
                    printf("-Carta 2 venceu pelo atributo número de pontos turísticos!\n"); } 
            break;
            case 5:
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                if (resultado2 == 1){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Densidade Populacional da Carta 1: %.2f - Densidade Populacional da Carta 2: %.2f\n", densidade1, densidade2);
                    printf("-Carta 1 venceu pelo atributo densidade populacional!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("-Densidade Populacional da Carta 1: %.2f - Densidade Populacional da Carta 2: %.2f\n", densidade1, densidade2);
                    printf("-Carta 2 venceu pelo atributo densidade populacional!\n") ;}
            break;
            case 6:
                resultado2 = ppc1 > ppc2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("PIB per Capita da Carta 1: %.2f - PIB per Capita da Carta 2: %.2f\n", ppc1, ppc2);
                    printf("-Carta 1 venceu pelo atributo PIB per capita!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("PIB per Capita da Carta 1: %.2f - PIB per Capita da Carta 2: %.2f\n", ppc1, ppc2);
                    printf("-Carta 2 venceu pelo atributo PIB per capita!\n"); }
            break;
            case 7:
                resultado2 = superpoder1 > superpoder2 ? 1 : 0;
                if (resultado2){
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("Super Poder da Carta 1: %.2f - Super Poder da Carta 2: %.2f\n", superpoder1, superpoder2);
                    printf("-Carta 1 venceu pelo atributo Super Poder!\n"); }
                else {
                    printf("-País da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
                    printf("Super Poder da Carta 1: %.2f - Super Poder da Carta 2: %.2f\n", superpoder1, superpoder2);
                    printf("-Carta 2 venceu pelo atributo Super Poder!\n"); }
            break;
            default:
                printf("Opção Inválida!\n");
            }
        }
            soma1 = (escolhajogador == 1 ? populacao1 :
            escolhajogador == 2 ? area1 :
            escolhajogador == 3 ? pib1 :
            escolhajogador == 4 ? num_ponto_turistico1 :
            escolhajogador == 5 ? 1 / densidade1 :
            escolhajogador == 6 ? ppc1 :
            superpoder1) 
            + 
            (escolhajogador2 == 1 ? populacao1 :
            escolhajogador2 == 2 ? area1 :
            escolhajogador2 == 3 ? pib1 :
            escolhajogador2 == 4 ? num_ponto_turistico1 :
            escolhajogador2 == 5 ? 1 / densidade1 :
            escolhajogador2 == 6 ? ppc1 :
            superpoder1);

            soma2 = (escolhajogador == 1 ? populacao2 :
            escolhajogador == 2 ? area2 :
            escolhajogador == 3 ? pib2 :
            escolhajogador == 4 ? num_ponto_turistico2 :
            escolhajogador == 5 ? 1 / densidade2 :
            escolhajogador == 6 ? ppc2 :
            superpoder2) 
            + 
            (escolhajogador2 == 1 ? populacao2 :
            escolhajogador2 == 2 ? area2 :
            escolhajogador2 == 3 ? pib2 :
            escolhajogador2 == 4 ? num_ponto_turistico2 :
            escolhajogador2 == 5 ? 1 / densidade2 :
            escolhajogador2 == 6 ? ppc2 :
            superpoder2);

            printf("\n====== Resultado das somas ======\n");
            printf("-Soma dos atributos escolhidos da Carta 1: %.2f\n", soma1);
            printf("-Soma dos atributos escolhidos da Carta 2: %.2f\n", soma2);

            if (soma1 > soma2){
                printf("-Carta 1 venceu pela soma!\n");
            } else if (soma1 < soma2) {
                printf("-Carta 2 venceu pela soma\n");
            } else {
                printf("Empate!\n");
            }
    }