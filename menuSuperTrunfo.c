#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//Criando Carta Super Trunfo

/*
Carta:
Estado:
Código: 
Nome da Cidade:
População: 
Área: 
PIB: 
Número de Pontos Turísticos: 
*/

int main(){

// variáveis para criação da carta 1

    char estado1[2], codigoCarta1[4], nomeCidade1[50];
    float area1, pib1;
    int numPt_turistico1, populacao1;

// variáveis para criação da carta 2

    char estado2[2], codigoCarta2[4], nomeCidade2[50];
    float area2, pib2;
    int numPt_turistico2, populacao2;

//Entrada de dados para armazenamento Carta 1

    printf("Por favor, insira os dados para a Carta 1. \n");

    //Solicitando o nome do Estado
    printf("\n");
    printf("Digite o estado (letra de A a H): ");
    scanf("%s", &estado1);

    //Solicitando o código da carta
    printf("Digite o código da carta (01 A 08): ");
    scanf("%s", &codigoCarta1);

    //Solicitando o nome da Cidade
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade1);

    //Solicitando o número de habitantes da Cidade
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao1);

    //Solicitando a área da Cidade em KM²
    printf("Digite a área (em KM²): ");
    scanf("%f", &area1);

    //Solicitando o PIB (Produto interno Bruto) da Cidade
    printf("Informe o PIB da Cidade (Produto Interno Bruto): ");
    scanf("%f", &pib1);

    //Solicitando o número de Pontos Turísticos
    printf("Informe o número de Pontos Turísticos da Cidade: ");
    scanf("%d", &numPt_turistico1);

    float densipop1 = (float) populacao1 / area1; //Calcula a Densidade Populacional
    float pibpercap1 = (float) pib1 / populacao1; //Calcula o PIB per Capita

    printf("\n"); //pula 1 linha

//Entrada de dados para armazenamento Carta 2

    printf("Por favor, insira os dados para a Carta 2. \n");

    //Solicitando o nome do Estado
    printf("\n");
    printf("Digite o estado (letra de A a H): ");
    scanf("%s", &estado2);

    //Solicitando o código da carta
    printf("Digite o código da carta (01 A 08): ");
    scanf("%s", &codigoCarta2);

    //Solicitando o nome da Cidade
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade2);

    //Solicitando o número de habitantes da Cidade
    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao2);

    //Solicitando a área da Cidade em KM²
    printf("Digite a área (em KM²): ");
    scanf("%f", &area2);

    //Solicitando o PIB (Produto interno Bruto) da Cidade
    printf("Informe o PIB da Cidade (Produto Interno Bruto): ");
    scanf("%f", &pib2);

    //Solicitando o número de Pontos Turísticos
    printf("Informe o número de Pontos Turísticos da Cidade: ");
    scanf("%d", &numPt_turistico2);

    float densipop2 = (float) populacao2 / area2; //Calcula a Densidade Populacional
    float pibpercap2 = (float) pib2 / populacao2; //Calcula o PIB per Capita

    printf("\n"); //pula 1 linha

    // Menu de seleção de atributo à ser comparado
    int comparar;

    printf("Escolha o atributo para comparação");
    printf("1. População");
    printf("2. Área");
    printf("3. PIB");
    printf("4. Nº de Pontos Turísticos");
    printf("5. Densidade Populacional");
    printf("6. PIB per Capita");
    scanf("%d", &comparar);


//Exibe a Carta 1

    printf("Carta 1: \n"); 
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f KM² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPt_turistico1);
    printf("Densidade Popilacional: %.2f hab/km²\n", densipop1);
    printf("PIB per Capita %.2f reais \n", pibpercap1);
    printf("\n"); //pula 1 linha

//Exibe a Carta 2

    printf("Carta 2: \n"); 
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPt_turistico2);
    printf("Densidade Popilacional: %.2f hab/km²\n", densipop2);
    printf("PIB per Capita %.2f reais \n", pibpercap2);
    
    printf("\n"); //pula 1 linha

    //exibir resultado da comparação e carta vencedora
    printf("Comparação de cartas (Atributo: PiIB per Capita): \n");

    printf("\n"); //pula 1 linha
 
    printf("Carta 1 - %s: %.2f \n", nomeCidade1, pibpercap1);
    printf("Carta 2 - %s: %.2f \n", nomeCidade2, pibpercap2);
    
    //Comparação de Cartas:
    if (pibpercap1 > pibpercap2){
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
    }
    

    return 0;
}