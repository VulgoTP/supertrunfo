#include <stdio.h>

int main(){
    char estado[2], estado2[2], codigo[5], codigo2[5], nome[20], nome2[20];
    int populacao, populacao2, turisticos, turisticos2;
    float area, area2, pib, pib2, dencidade, dencidade2, pibcarpita, pibcarpita2 ;


    
    printf("\n <----CARTA 1----> \n");
    printf("Uma letra de A a H(representando um dos oito estados): ");
    scanf("%s", estado);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo);

    printf("O nome da cidade: ");
    scanf("%s", nome);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf(" A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turisticos);
        


                // CARTA 2
    printf("\n <----CARTA 2----> \n");
    printf("Uma letra de A a H(representando um dos oito estados): ");
    scanf("%s", estado2);

    printf("A letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);

    printf("O nome da cidade: ");
    scanf("%s", nome2);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf(" A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turisticos2);

    dencidade = populacao / area;
    dencidade2 = populacao2 / area2;
    pibcarpita = pib / populacao;
    pibcarpita2 = pib2 / populacao2;
          // Mostrar Carta
    printf("\n<----------CARTA 1 ------------>\n");
    printf("ESTADO: %s\n", estado);
    printf("CODIFO: %s\n", codigo);
    printf("NOME DA CIDADE: %s\n", nome);
    printf("POPULAÇAO: %d\n", populacao);
    printf("ÁREA: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("NUMEROS PONTOS TURISTICOS: %d\n", turisticos);
    printf("Dencidade Populacional: %.2f\n", dencidade);
    printf("PIB per Capita: %.2f\n",pibcarpita );

    printf("\n<----------CARTA 2 ------------>\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIFO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", nome2);
    printf("POPULAÇAO: %d\n", populacao2);
    printf("ÁREA: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("NUMEROS PONTOS TURISTICOS: %d\n", turisticos2);
    printf("Dencidade Populacional: %.2f\n", dencidade2);
    printf("PIB per Capita: %.2f\n",pibcarpita2 );



    return 0;

}