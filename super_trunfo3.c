#include <stdio.h>

int main(){
    char estado1;
    char codigo_da_carta1[5];
    char nomecidade1[100];
    int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2;
    char codigo_da_carta2[5];
    char nomecidade2[100];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    float DensidadePopulacional1, DensidadePopulacional2;
    float Pibcapital1, Pibcapital2;
    
    // PRIMEIRA CARTA
    printf("DIGITE OS DADOS DA PRIMEIRA CARTA: \n");

    printf("Estado (ex: A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo_da_carta1);
    printf("Nome da cidade: ");
    getchar();  
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    printf("População: ");
    scanf("%d", &populaçao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // SEGUNDA  CARTA
    printf("DIGITE OS DADOS DA SEGUNDA CARTA: \n");

    printf("Estado (ex: A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A01): ");
    scanf("%s", codigo_da_carta2);
    printf("Nome da cidade: ");
    getchar();  
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    printf("População: ");
    scanf("%d", &populaçao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);


    // calculando
    DensidadePopulacional1 = populaçao1 / area1;
    DensidadePopulacional2 = populaçao2 / area2;

    Pibcapital1 = (pib1 * 1000000000) / populaçao1;
    Pibcapital2 = (pib2 * 1000000000) / populaçao2;
    

    // Exibição dos Dados das Cartas
    printf("\n Exibindo dados da primeira carta \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s", nomecidade1); 
    printf("População: %d\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", Pibcapital1);

    // Exibição dos Dados da segunda Carta
    printf("\n Exibindo dados da segunda carta \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s", nomecidade2); 
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", Pibcapital2);


    return 0;
}
