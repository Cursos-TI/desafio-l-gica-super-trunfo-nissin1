#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char codigo1[4], codigo2[4];
    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Interação com o usuário para a criação da 1ª carta
    printf("Seja bem vindo(a) ao simulador de criação de cartas do Super Trunfo - Edição Países!\n");
    printf("Vamos criar os dados da sua 1ª carta de cidade:");
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome do Estado federativo ao qual pertence a cidade:\n");
    scanf("%s", &estado1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite o número referente ao tamanho da população:\n");
    scanf("%d", &populacao1);
    printf("Digite o número referente ao tamanho da área (em km²):\n");
    scanf("%f", &area1);
    printf("Digite o número referente ao tamanho do Produto Interno Bruto (PIB):\n");
    scanf("%f", &pib1);
    printf("Digite o número referente a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Interação com o usuário para a criação da 2ª carta
    printf("----------------------------------------------------------\n");
    printf("Agora, vamos criar os dados da sua 2ª carta de cidade:\n");
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);
    printf("Digite o nome do Estado federativo ao qual pertence a cidade:\n");
    scanf("%s", &estado2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite o número referente ao tamanho da população:\n");
    scanf("%d", &populacao2);
    printf("Digite o número referente ao tamanho da área (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o número referente ao tamanho do Produto Interno Bruto (PIB):\n");
    scanf("%f", &pib2);
    printf("Digite o número referente a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Variáveis para calcular a densidade populacional e o PIB per capita
    float dp1 = (float)populacao1 / area1;
    float dp2 = (float)populacao2 / area2;
    float pibpc1 = pib1 / (float)populacao1;
    float pibpc2 = pib2 / (float)populacao2;

    // Variáveis para calcular o "Super Poder" das cartas (soma de todas as propriedades)
    float sp1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1;
    float sp2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2;

    // Exibição dos dados das cartas
    printf("----------------------------------------------------------\n");
    printf("Estes são os dados da 1ª carta:\n");
    printf("Código: %s | Estado Federativo: %s | Nome da Cidade: %s\n", codigo1, estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    printf("PIB per Capita: R$%.2f\n", pibpc1);
    printf("Calculando o Super Poder da sua carta...\n");
    printf("O Super Poder da carta %s é: %f", codigo1, sp1);

    printf("----------------------------------------------------------\n");
    printf("Estes são os dados da 2ª carta:\n");
    printf("Código: %s | Estado Federativo: %s | Nome da Cidade: %s\n", codigo2, estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: R$%.2f\n", pibpc2);
    printf("Calculando o Super Poder da sua carta...\n");
    printf("O Super Poder da carta %s é: %f", codigo2, sp2);

    // Exibição da comparação das cartas
    printf("----------------------------------------------------------\n");
    printf("Agora vamos comparar qual carta é melhor!");

    // Comparação por densidade populacional (menor vence)
    printf("No quesito 'Densidade Populacional' a carta vencedora é...\n");
    if (dp1 < dp2) {
        printf("A carta %s - %s com %.2f hab/km²!\n", codigo1, cidade1, dp1);
    } else if (dp2 < dp1){
        printf("A carta %s - %s com %.2f hab/km²!\n", codigo2, cidade2, dp2);
    } else {
        printf("Opa! Parece que houve um empate!");
    }

    // Comparação por PIB per capita (maior vence)
    printf("No quesito 'PIB per Capita' a carta vencedora é...\n");
    if (pibpc1 > pibpc2) {
        printf("A carta %s - %s com R$%.2f!\n", codigo1, cidade1, pibpc1);
    } else if (pibpc2 > pibpc1){
        printf("A carta %s - %s com R$%.2f!\n", codigo2, cidade2, dp2);
    } else {
        printf("Opa! Parece que houve um empate!");
    }

    // Comparação por número de pontos turísticos (maior vence)
    printf("No quesito 'Pontos Turísticos' a carta vencedora é...\n");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("A carta %s - %s com %d pontos turísticos!\n", codigo1, cidade1, pontos_turisticos1);
    } else if (pontos_turisticos2 > pontos_turisticos1){
        printf("A carta %s - %s com %d pontos turísticos!\n", codigo2, cidade2, pontos_turisticos2);
    } else {
        printf("Opa! Parece que houve um empate!");
    }

    // Comparação pelo "Super Poder" (maior vence)
    printf("No quesito 'Super Poder' a carta vencedora é...\n");
    if (sp1 > sp2) {
        printf("A carta %s - %s com um Super Poder de %f!\n", codigo1, cidade1, sp1);
    } else if (pibpc2 > pibpc1){
        printf("A carta %s - %s com um Super Poder de %f!\n", codigo2, cidade2, sp2);
    } else {
        printf("Opa! Parece que as duas cartas são tão poderosas que houve um empate!");
    }

    // Agradecimento e encerramento do programa
    printf("Obrigado por usar o simulador de criação de cartas do Super Trunfo - Edição Países!\n");
    printf("Esperamos que tenha gostado da experiência!\n");
    
    return 0;
}
