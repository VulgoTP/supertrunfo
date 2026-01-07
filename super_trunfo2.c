#include <stdio.h>

int main(){
    char estado[3], estado2[3], codigo[6], codigo2[6], nome[20], nome2[20];

    unsigned long int populacao, populacao2; 
    int turisticos, turisticos2;
    float area, area2, pib, pib2;
    float dencidade, dencidade2, pibcarpita, pibcarpita2;
    float super1, super2;

    int opcao;

    // ---------------- CARTA 1 ------------------
    printf("\n <----CARTA 1----> \n");
    printf("Uma letra de A a H: ");
    scanf("%s", estado);

    printf("Código (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao);

    printf("Área em km2: ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turisticos);

    // ---------------- CARTA 2 ------------------
    printf("\n <----CARTA 2----> \n");
    printf("Uma letra de A a H: ");
    scanf("%s", estado2);

    printf("Código (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Área em km2: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turisticos2);

    // ----------- CÁLCULOS -------------
    dencidade  = populacao  / area;
    dencidade2 = populacao2 / area2;

    pibcarpita  = pib  / populacao;
    pibcarpita2 = pib2 / populacao2;

    super1 = (float)populacao + area + pib + turisticos + pibcarpita + (1.0f / dencidade);
    super2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibcarpita2 + (1.0f / dencidade2);

    // ----------- MENU -------------
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("5 - Pontos Turísticos\n");
    printf("6 - Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch(opcao){
        case 1: // POPULAÇÃO
            if(populacao > populacao2){
                printf("Carta 1 (%s) venceu em População!\n", nome);
            } else if(populacao2 > populacao){
                printf("Carta 2 (%s) venceu em População!\n", nome2);
            } else {
                printf("EMPATE!");
            }
            break;

        case 2: // ÁREA
            if(area > area2){
                printf("Carta 1 (%s) venceu em Área!\n", nome);
            } else if(area2 > area){
                printf("Carta 2 (%s) venceu em Área!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            if(pib > pib2){
                printf("Carta 1 (%s) venceu em PIB!\n", nome);
            } else if(pib2 > pib){
                printf("Carta 2 (%s) venceu em PIB!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // DENSIDADE
            if(dencidade < dencidade2){
                printf("Carta 1 (%s) venceu em Densidade!\n", nome);
            } else if(dencidade2 < dencidade){
                printf("Carta 2 (%s) venceu em Densidade!\n", nome2);
            } else {
                
            }
            break;

        case 5: // TURISMO
            if(turisticos > turisticos2){
                printf("Carta 1 (%s) venceu em Pontos Turísticos!\n", nome);
            } else if(turisticos2 > turisticos){
                printf("Carta 2 (%s) venceu em Pontos Turísticos!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // SUPER PODER
            if(super1 > super2){
                printf("Carta 1 (%s) venceu no Super Poder!\n", nome);
            } else if(super2 > super1){
                printf("Carta 2 (%s) venceu no Super Poder!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
