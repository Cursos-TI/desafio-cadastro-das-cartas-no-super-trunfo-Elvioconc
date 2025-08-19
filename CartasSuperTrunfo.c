#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Definindo a estrutura para armazenar os dados da carta 01

    char estado;
    char cod_carta[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib_cidade;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;

    
    // Definindo a estrutura para armazenar os dados da carta 02

    char estado2;
    char cod_carta2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib_cidade2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;
   
    // Mensagem de boas-vindas
    printf("Olá , seja bem-vindo ao Super Trunfo!\n");

    // Cadastro das Cartas:
    // Instruções para o usuário

    printf("Você irá inserir os dados de uma carta.\n");
    printf("Entre com os dados da primeira carta.\n");

    // Coletando os dados da carta 1

    printf("Entre com o estado da carta (A, B, C, ...):\n ");
    scanf(" %c", &estado);

    printf("Entre com o código da carta (A01, A02, A03, ...):\n ");
    scanf(" %s", cod_carta);

    printf("Entre com o nome da cidade:\n ");
    scanf(" %[^\n]", cidade);
    
    printf("Entre com a população da cidade:\n ");
    scanf(" %lu", &populacao);
    
    printf("Entre com a área da cidade:\n ");
    scanf(" %f", &area);
    
    printf("Entre com o PIB da cidade:\n ");
    scanf(" %f", &pib_cidade);
    
    printf("Entre com o número de pontos turísticos da cidade:\n ");
    scanf(" %d", &pontos_turisticos);

    //criação do calculo do pib, desidade e super poder 

    densidade = populacao / area;
    pib_per_capita = pib_cidade / populacao;
    super_poder = populacao + area + pib_cidade + pontos_turisticos + pib_per_capita + (1 / densidade);
   
    // Instruções para o usuário sobre a segunda carta

    printf("\nVocê irá inserir os dados de uma segunda carta.\n");
    printf("Entre com os dados da segunda carta.\n");

    // Coletando os dados da carta 2

    printf("Entre com o estado da carta (A, B, C, ...):\n ");
    scanf(" %c", &estado2);

    printf("Entre com o código da carta (A01, A02, A03, ...):\n ");
    scanf(" %s", cod_carta2);

    printf("Entre com o nome da cidade:\n ");
    scanf(" %[^\n]" , cidade2);
    
    printf("Entre com a população da cidade:\n ");
    scanf(" %lu", &populacao2);
    
    printf("Entre com a área da cidade:\n ");
    scanf(" %f", &area2);
    
    printf("Entre com o PIB da cidade:\n ");
    scanf(" %f", &pib_cidade2);
    
    printf("Entre com o número de pontos turísticos da cidade:\n ");
    scanf(" %d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib_cidade2 / populacao2;
    super_poder2 = populacao2 + area2 + pib_cidade2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);
    // Exibindo os dados da carta 1

    printf("\n=== Carta: 1 ===\n");
    printf("Estado: %c \n", estado);
    printf("Código da carta: %s \n", cod_carta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB da cidade: %f \n", pib_cidade);
    printf("Pontos turísticos: %d \n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder);

     // Exibindo os dados da carta 2

    printf("\n=== Carta: 2 ===\n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", cod_carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB da cidade: %f \n", pib_cidade2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // ================= COMPARAÇÃO DAS CARTAS =================

    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_cidade > pib_cidade2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos > pontos_turisticos2);
    
    // Aqui usamos (<) porque a carta com menor densidade vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder > super_poder2);


    return 0;

}
