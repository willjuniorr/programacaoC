/*  Criando as Cartas do Super Trunfo
    Autor: William Junior
    Versão: 1.0
*/

#include <stdio.h>

int main(){

// variáveis para criação da carta 1

    char estado1[2];
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numPt_turistico1;


// variáveis para criação da carta 2

    char estado2[2];
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPt_turistico2;


//Entrada de dados para armazenamento Carta 1

    printf("Por favor, insira os dados para a Carta 1. \n");

    //Solicitando o nome do Estado
    printf("\n");
    printf("Digite o estado (letra de A a H): ");
    scanf("%s", &estado1);

    //Solicitando o código da carta
    printf("\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &codigoCarta1);

    //Solicitando o nome da Cidade
    printf("\n");
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade1);

    //Solicitando o número de habitantes da Cidade
    printf("\n");
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao1);

    //Solicitando a área da Cidade em KM²
    printf("\n");
    printf("Digite a a área (em KM²): ");
    scanf("%f", &area1);

    //Solicitando o PIB (Produto interno Bruto) da Cidade
    printf("\n");
    printf("Informe o PIB da Cidade (Produto Interno Bruto): ");
    scanf("%f", &pib1);

    //Solicitando o número de Pontos Turísticos
    printf("\n");
    printf("Informe o número de Pontos Turísticos da Cidade: ");
    scanf("%d", &numPt_turistico1);

    printf("\n"); //pula 1 linha

//Entrada de dados para armazenamento Carta 2

    printf("Por favor, insira os dados para a Carta 2. \n");

    //Solicitando o nome do Estado
    printf("\n");
    printf("Digite o estado (letra de A a H): ");
    scanf("%s", &estado2);

    //Solicitando o código da carta
    printf("\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &codigoCarta2);

    //Solicitando o nome da Cidade
    printf("\n");
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade2);

    //Solicitando o número de habitantes da Cidade
    printf("\n");
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao2);

    //Solicitando a área da Cidade em KM²
    printf("\n");
    printf("Digite a a área (em KM²): ");
    scanf("%f", &area2);

    //Solicitando o PIB (Produto interno Bruto) da Cidade
    printf("\n");
    printf("Informe o PIB da Cidade (Produto Interno Bruto): ");
    scanf("%f", &pib2);

    //Solicitando o número de Pontos Turísticos
    printf("\n");
    printf("Informe o número de Pontos Turísticos da Cidade: ");
    scanf("%d", &numPt_turistico2);
    
    printf("\n"); //pula 1 linha

//Exibe a Carta 1

    printf("Carta 1: \n"); 
    printf("Estado: %s \n", &estado1);
    printf("Código: %s \n", &codigoCarta1);
    printf("Nome da Cidade: %s \n", &nomeCidade1);
    printf("População: %d \n", &populacao1);
    printf("Área: %f \n", &area1);
    printf("PIB: %f \n", &pib1);
    printf("Número de Pontos Turísticos: %d \n", &numPt_turistico1);

    printf("\n"); //pula 1 linha

//Exibe a Carta 2

    printf("Carta 2: \n"); 
    printf("Estado: %s \n", &estado2);
    printf("Código: %s \n", &codigoCarta2);
    printf("Nome da Cidade: %s \n", &nomeCidade2);
    printf("População: %d \n", &populacao2);
    printf("Área: %f \n", &area2);
    printf("PIB: %f \n", &pib2);
    printf("Número de Pontos Turísticos: %d \n", &numPt_turistico2);

    return 0;



}
