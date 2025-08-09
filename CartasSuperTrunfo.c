#include <stdio.h>

int main(){
    // Declaração de Variáveis

    char estado1, estado2;
    char codCarta1[3], codCarta2[3];
    char nomeCidade1[15], nomeCidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;


    // --------------- CARTA 1 --------------- 


    printf("\n --- INFORME OS DADOS DA PRIMEIRA CARTA --- \n");
    printf("Estado com uma Letra: ");
    scanf(" %c", &estado1);
    printf("Código da carta de 01 a 04: ");
    scanf(" %s", codCarta1);
    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área em mil km²: ");
    scanf(" %f", &area1);
    printf("PIB em Bilhões de R$: ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\n --- CONFIRMANDO DADOS DA PRIMEIRA CARTA --- \n");
    printf("|            Estado: %c\n", estado1);
    printf("|            Código: %c%s\n", estado1,codCarta1);
    printf("|            Cidade: %s\n", nomeCidade1);
    printf("|         População: %d \n", populacao1);
    printf("|              Área: %.1f mil Km²\n", area1);
    printf("|               PIB: %.2f Bilhões de reais\n", pib1);
    printf("| Pontos Turísticos: %d\n", pontosTuristicos1);


     // --------------- CARTA 2 --------------- 

     
    printf("\n --- INFORME OS DADOS DA SEGUNDA CARTA --- \n");
    printf("Estado com uma Letra: ");
    scanf(" %c", &estado2);
    printf("Código da carta de 01 a 04: ");
    scanf(" %s", codCarta2);
    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área em mil km²: ");
    scanf(" %f", &area2);
    printf("PIB em Bilhões de R$: ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("\n --- CONFIRMANDO DADOS DA SEGUNDA CARTA --- \n");
    printf("|            Estado: %c\n", estado2);
    printf("|            Código: %c%s\n", estado2,codCarta2);
    printf("|            Cidade: %s\n", nomeCidade2);
    printf("|         População: %d \n", populacao2);
    printf("|              Área: %.1f mil Km²\n", area2);
    printf("|               PIB: %.2f Bilhões de reais\n", pib2);
    printf("| Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}