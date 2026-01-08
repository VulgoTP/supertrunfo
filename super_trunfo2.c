#include <stdio.h>

int main(){
    char estado[3], estado2[3], codigo[6], codigo2[6], nome[20], nome2[20];

    unsigned long int populacao, populacao2; 
    int turisticos, turisticos2;
    float area, area2, pib, pib2;
    float dencidade, dencidade2, pibcarpita, pibcarpita2;
    float super1, super2;

    int op1, op2;

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

    printf("\nEscolha o PRIMEIRO atributo: ");
    scanf("%d", &op1);

    printf("Escolha o SEGUNDO atributo: ");
    scanf("%d", &op2);

    printf("\n===== RESULTADO =====\n");

    // ---------- PRIMEIRA COMPARAÇÃO ----------
    switch(op1){
        case 1:
            printf("População: %s\n", (populacao > populacao2) ? nome : (populacao2 > populacao ? nome2 : "Empate"));
            break;
        case 2:
            printf("Área: %s\n", (area > area2) ? nome : (area2 > area ? nome2 : "Empate"));
            break;
        case 3:
            printf("PIB: %s\n", (pib > pib2) ? nome : (pib2 > pib ? nome2 : "Empate"));
            break;
        case 4:
            printf("Densidade: %s\n", (dencidade < dencidade2) ? nome : (dencidade2 < dencidade ? nome2 : "Empate"));
            break;
        case 5:
            printf("Turismo: %s\n", (turisticos > turisticos2) ? nome : (turisticos2 > turisticos ? nome2 : "Empate"));
            break;
        case 6:
            printf("Super Poder: %s\n", (super1 > super2) ? nome : (super2 > super1 ? nome2 : "Empate"));
            break;
        default:
            printf("Opção inválida na primeira escolha!\n");
    }

    // ---------- SEGUNDA COMPARAÇÃO ----------
    switch(op2){
        case 1:
            printf("População: %s\n", (populacao > populacao2) ? nome : (populacao2 > populacao ? nome2 : "Empate"));
            break;
        case 2:
            printf("Área: %s\n", (area > area2) ? nome : (area2 > area ? nome2 : "Empate"));
            break;
        case 3:
            printf("PIB: %s\n", (pib > pib2) ? nome : (pib2 > pib ? nome2 : "Empate"));
            break;
        case 4:
            printf("Densidade: %s\n", (dencidade < dencidade2) ? nome : (dencidade2 < dencidade ? nome2 : "Empate"));
            break;
        case 5:
            printf("Turismo: %s\n", (turisticos > turisticos2) ? nome : (turisticos2 > turisticos ? nome2 : "Empate"));
            break;
        case 6:
            printf("Super Poder: %s\n", (super1 > super2) ? nome : (super2 > super1 ? nome2 : "Empate"));
            break;
        default:
            printf("Opção inválida na segunda escolha!\n");
    }

    return 0;
}
