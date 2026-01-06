#include <stdio.h>

int main(){
    char estado[2], estado2[2], codigo[5], codigo2[5], nome[20], nome2[20];

    unsigned long int populacao, populacao2; 
    int turisticos, turisticos2;
    float area, area2, pib, pib2;
    float dencidade, dencidade2, pibcarpita, pibcarpita2;
    float super1, super2;

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

    // ----------- COMPARAÇÃO POPULAÇÃO -------------
    printf("\n===== COMPARAÇÃO FINAL (POPULAÇÃO) =====\n");

    if (populacao > populacao2) {
        printf("Carta 1 (%s) venceu com maior população!\n", nome);
    } else if (populacao2 > populacao) {
        printf("Carta 2 (%s) venceu com maior população!\n", nome2);
    } else {
        printf("Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}
