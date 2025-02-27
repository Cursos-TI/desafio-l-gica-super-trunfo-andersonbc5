#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

        // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turistico1;
    //adicionado variáveis para o calculo da densidade populacional e PIB per capita para carta1
    float densidade1;
    float pibpercapita1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    unsigned long int populacao2; // adicionado o unsigned long int
    float area2;
    float pib2;
    int turistico2;
    //adicionado variáveis para o calculo da densidade populacional e PIB per capita para carta2
    float densidade2;
    float pibpercapita2;
    
    // Leitura dos dados da Carta 1
    printf("CADASTRO CARTA 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);  

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);  

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1); 

    printf("População: ");
    scanf("%lu", &populacao1);  

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);
    
    // Cálculo da densidade populacional e PIB per capita da Carta 1
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1e9) / populacao1; // Convertendo PIB para reais
    
    // Leitura dos dados da Carta 2
    printf("\nCADASTRO CARTA 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);  

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);  

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);  

    printf("População: ");
    scanf("%lu", &populacao2);  

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);
    // Cálculo da densidade populacional e PIB per capita da Carta 2
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9) / populacao2; // Convertendo PIB para reais
    

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("---------------------------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("---------------------------------\n");

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("---------------------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("---------------------------------\n");

    printf("\n***** COMPARANDO OS ATRIBUTOS *****\n");

    printf("Atributo: População.\n");
    printf("Carta 1 - %s: %lu\n", nomecidade1,populacao1);
    printf("Carta 2 - %s: %lu\n", nomecidade2,populacao2);
    if(populacao1 > populacao2){
        printf("Carta 1 (%s) venceu!\n",nomecidade1);
    }else{
        printf("Carta 2 (%s) venceu!\n", nomecidade2);
    }
    printf("---------------------------------\n");

    printf("Atributo: Área.\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1,area1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2,area2);
    if(area1 > area2){
        printf("Carta 1 (%s) venceu!\n",nomecidade1);
    }else{
        printf("Carta 2 (%s) venceu!\n", nomecidade2);
    }
    printf("---------------------------------\n");

    printf("Atributo: PIB.\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1,pib1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2,pib2);
    if(pib1 > pib2){
        printf("Carta 1 (%s) venceu!\n",nomecidade1);
    }else{
        printf("Carta 2 (%s) venceu!\n", nomecidade2);
    }
    printf("---------------------------------\n");

    printf("Atributo: Densidade.\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1,densidade1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2,densidade2);
    if(densidade1 < densidade2){
        printf("Carta 1 (%s) venceu!\n",nomecidade1);
    }else{
        printf("Carta 2 (%s) venceu!\n", nomecidade2);
    }
    printf("---------------------------------\n");

    printf("Atributo: PIB per capita.\n");
    printf("Carta 1 - %s: %.2f\n", nomecidade1,pibpercapita1);
    printf("Carta 2 - %s: %.2f\n", nomecidade2,pibpercapita2);
    if(pibpercapita1 > pibpercapita2){
        printf("Carta 1 (%s) venceu!\n",nomecidade1);
    }else{
        printf("Carta 2 (%s) venceu!\n", nomecidade2);
    }
    return 0;
}

   

   
