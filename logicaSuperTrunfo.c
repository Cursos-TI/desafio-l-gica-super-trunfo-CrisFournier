    //Você implementará a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). 
    //Este desafio é uma continuação do desafio do tema anterior, onde você desenvolveu o cadastro das cartas e você poderá reaproveitar o código de cadastro de cartas que já foi desenvolvido. 
    //O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.
    

    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
    // Siga os comentários para implementar cada parte do desafio.
    #include <stdio.h>

    int main() {
        // Definição das variáveis para armazenar as propriedades das cidades
        // Você pode utilizar o código do primeiro desafio
        int nPontoTur1, nPontoTur2;
        unsigned int populacao1, populacao2;
        float area1, pib1, area2, pib2, densiPopula1, percapta1, densiPopula2, percapta2, superpoder1, superpoder2;
        float resultPop, resultArea, resultPib, resultTur, resultDen, resultPer, resultSPoder;
        char estadoA[2], codCarta1[3], cidade1[30];
        char estadoB[2], codCarta2[3], cidade2[30];

    
        // Cadastro das Cartas:
        // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
        // utilizando a função scanf para capturar as entradas.
        // utilize o código do primeiro desafio

        printf("PREENCHA AS SEGUINTES INFORMAÇÕES PARA CADASTRAR A CARTA 1 \nCARTA 1- Digite uma letra (de A a H) que represente o Estado: ");
        scanf("%s", &estadoA);

        printf("CARTA 1- Digite um Código para seu estado, sendo a letra do Estado, seguida de um número de 01 a 04: ");
        scanf("%s", &codCarta1);

        printf("CARTA 1- Digite o nome da Cidade: ");
        scanf("%s", &cidade1);
        
        printf("CARTA 1- Digite o número de habitantes da cidade: ");
        scanf("%u", &populacao1);

        printf("CARTA 1- Digite a área da cidade em km²: ");
        scanf("%f", &area1);

        printf("CARTA 1- Digite o valor do PIB da cidade em reais: ");
        scanf("%f", &pib1);

        printf("CARTA 1- Digite a quantidade de pontos turísticos na cidade: ");
        scanf("%i", &nPontoTur1);

        densiPopula1 = (float)(populacao1/ area1);

        percapta1 = (float)(pib1/populacao1);

        printf("AGORA INFORME DADOS PARA A CARTA 2: \nCARTA 2- Digite uma letra (de A a H) que represente o Estado: ");
        scanf("%s", &estadoB);

        printf("CARTA 2-  Digite um Código para seu estado, sendo a letra do Estado, seguida de um número de 01 a 04: ");
        scanf("%s", &codCarta2);

        printf("CARTA 2- Digite o nome da Cidade: ");
        scanf("%s", &cidade2);
        
        printf("CARTA 2- Digite o número de habitantes da cidade: ");
        scanf("%u", &populacao2);

        printf("CARTA 2- Digite a área da cidade em km²: ");
        scanf("%f", &area2);

        printf("CARTA 2- Digite o valor do PIB da cidade em reais: ");
        scanf("%f", &pib2);

        printf("CARTA 2- Digite a quantidade de pontos turísticos na cidade: ");
        scanf("%i", &nPontoTur2);

        densiPopula2 = (float)(populacao2/ area2);

        percapta2 = (float)(pib2/populacao2);


        //Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
        superpoder1 = (float)(populacao1 + area1 + pib1 + nPontoTur1 + percapta1 + (1/densiPopula1));
        superpoder2 = (float)(populacao2 + area2 + pib2 + nPontoTur2 + percapta2 + (1/densiPopula2));


        // Comparação de Cartas:
        // Desenvolva a lógica de comparação entre duas cartas.
        // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
        
        printf("   Comparação entre População e Área\n");
        if (populacao1 > populacao2) {
            printf("Cidade 1 tem maior população.\n");
        } else {
            printf("Cidade 2 tem maior população.\n");
        }

        if (pib1 > pib2) {
            printf("Cidade 1 tem maior PIB.\n");
        } else {
            printf("Cidade 2 tem maior PIB.\n");
        }


        // Exibição dos Resultados:
        // Após realizar as comparações, exiba os resultados para o usuário.
        // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
        
        printf("   Comparação de cartas - Atributo: População: \n");
        printf("Carta 1 -  Nome da Cidade: %s - População: %u \n", cidade1, populacao1);
        printf("Carta 2 -  Nome da Cidade: %s - População: %u \n", cidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Carta 1 (cidade:  %s) venceu! \n", cidade1);
        } else {
            printf("Carta 2 (cidade:  %s) venceu! \n", cidade2);
        }
        
    return 0;
}
