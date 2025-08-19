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
    int populacao;
    float area;
    float pib_cidade;
    int pontos_turisticos;
    // Criação demais duas variaveis desidade e pib_per_capita
    float densidade;
    float pib_per_capita;

    
    // Definindo a estrutura para armazenar os dados da carta 02

    char estado2;
    char cod_carta2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib_cidade2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
   
    // Mensagem de boas-vindas
    printf("Olá , seja bem-vindo ao Super Trunfo!\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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
    scanf(" %d", &populacao);
    
    printf("Entre com a área da cidade:\n ");
    scanf(" %f", &area);
    
    printf("Entre com o PIB da cidade:\n ");
    scanf(" %f", &pib_cidade);
    
    printf("Entre com o número de pontos turísticos da cidade:\n ");
    scanf(" %d", &pontos_turisticos);

    //criação do calculo do pib e desidade 

    // Calculando derivados
    densidade = populacao / area;
    pib_per_capita = pib_cidade / populacao;
   
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
    scanf(" %d", &populacao2);
    
    printf("Entre com a área da cidade:\n ");
    scanf(" %f", &area2);
    
    printf("Entre com o PIB da cidade:\n ");
    scanf(" %f", &pib_cidade2);
    
    printf("Entre com o número de pontos turísticos da cidade:\n ");
    scanf(" %d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib_cidade2 / populacao2;
    
    // Exibindo os dados da carta 1

    printf("\n=== Carta: 1 ===\n");
    printf("Estado: %c \n", estado);
    printf("Código da carta: %s \n", cod_carta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB da cidade: %f \n", pib_cidade);
    printf("Pontos turísticos: %d \n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f\n", pib_per_capita);

     // Exibindo os dados da carta 2

    printf("\n=== Carta: 2 ===\n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", cod_carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB da cidade: %f \n", pib_cidade2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;

}
