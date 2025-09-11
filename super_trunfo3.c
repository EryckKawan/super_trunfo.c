#include <stdio.h>

int main(){
    char estado1;
    char codigo_da_carta1[5];
    char nomecidade1[100];
    unsigned long int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2;
    char codigo_da_carta2[5];
    char nomecidade2[100];
    unsigned long int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    float DensidadePopulacional1, DensidadePopulacional2;
    float Pibcapital1, Pibcapital2;
    float superpoder1, superpoder2;

    
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
    scanf("%lu", &populaçao1);
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
    fgets(nomecidade2, sizeof(nomecidade2), stdin); // corrigido
    printf("População: ");
    scanf("%lu", &populaçao2);
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

    superpoder1 = (float)populaçao1 + area1 + pib1 + pontosturisticos1 + Pibcapital1 + (1.0f / DensidadePopulacional1);
    superpoder2 = (float)populaçao2 + area2 + pib2 + pontosturisticos2 + Pibcapital2 + (1.0f / DensidadePopulacional2);
    

    // Exibição dos Dados das Cartas
    printf("\n Exibindo dados da primeira carta \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da cidade: %s", nomecidade1); 
    printf("População: %lu\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", Pibcapital1);
    printf("Super Poder: %.2f\n", superpoder1);


    // Exibição dos Dados da segunda Carta
    printf("\n Exibindo dados da segunda carta \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s", nomecidade2); 
    printf("População: %lu\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", Pibcapital2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\n Comparação de Cartas \n");
    if(populaçao1 > populaçao2) 
        printf("População: Carta 1 venceu (1)\n");
    else 
        printf("População: Carta 2 venceu (0)\n");

    if(area1 > area2)  
        printf("Área: Carta 1 venceu (1)\n");
    else 
        printf("Área: Carta 2 venceu (0)\n");

    if(pib1 > pib2)    
        printf("PIB: Carta 1 venceu (1)\n");
    else    
        printf("PIB: Carta 2 venceu (0)\n");

    if(pontosturisticos1 > pontosturisticos2) 
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else 
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    if(DensidadePopulacional1 < DensidadePopulacional2) 
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else    
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    if(Pibcapital1 > Pibcapital2) 
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else   
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    if(superpoder1 > superpoder2) 
        printf("Super Poder: Carta 1 venceu (1)\n");
    else 
        printf("Super Poder: Carta 2 venceu (0)\n");
    return 0;
}

