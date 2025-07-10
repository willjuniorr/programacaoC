/*  Criando as Cartas do Super Trunfo
    Autor: William Junior
    Versão: 1.0
*/

#include <stdio.h>

int main(){

// variáveis para criação da carta 1

    char estado1;
    char codigoCarta1[20];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numPt_turistico1;


// variáveis para criação da carta 2

    char estado2;
    char codigoCarta2[20];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numPt_turistico2;


//Entrada de dados para armazenamento Carta 1

    printf("Por favor, insira os dados solicitados para a Carta 1. \n");

    //Solicitando o nome do Estado
    printf("\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);

    //Solicitando o código da carta
    printf("\n");
    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta1);

    //Solicitando o nome da Cidade
    printf("\n");
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeCidade1);

    //Solicitando o número de habitantes da Cidade
    printf("\n");
    printf("Digite o número de habitantes da Cidade: \n");
    scanf("%d", &populacao1);

    //Solicitando a área da Cidade em KM²
    printf("\n");
    printf("Digite a estensão de área da Cidade: \n");
    scanf("%f", &area1);

    //Solicitando o PIB (Produto interno Bruto) da Cidade
    printf("\n");
    printf("Informe o PIB da Cidade (Produto Interno Bruto): \n");
    scanf("%f", &pib1);

    //Solicitando o número de Pontos Turísticos
    printf("\n");
    printf("Informe o número de Pontos Turísticos da Cidade: \n");
    scanf("%d", &numPt_turistico1);


//  printf("Carta 1: \n");
//  printf("Estado: %s", &estado1);

    return 0;



}