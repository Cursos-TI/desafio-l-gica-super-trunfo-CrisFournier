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
        int nPontoTur1, nPontoTur2, escolhaAtributo1, escolhaAtributo2;
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

        printf("CARTA 2- Digite um Código para seu estado, sendo a letra do Estado, seguida de um número de 01 a 04: ");
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
        // Criar um menu principal usando o switch para permitir que o jogador escolha qual desses atributos ele usará para comparar as cartas
        
        printf("Com base no menu abaixo, escolha dois atributos para realizar a comparação entre as cartas: \n");
        printf("MENU PRINCIPAL:\n 1-População:\n 2-Area:\n 3-PIB:\n 4-Número de Pontos turísticos:\n 5-Média PerCapta:\n 6-Densidade Populacional:\n\n\n  ");
        printf("DIGITE O PRIMEIRO ATRIBUTO: ");
        scanf("%d", &escolhaAtributo1);

        printf("  DIGITE O SEGUNDO ATRIBUTO (diferente do primeiro): ");
        scanf("%d", &escolhaAtributo2);
        
        switch (escolhaAtributo1)
        {
        case 1:
            printf("## POPULAÇÃO - Carta 1: %d X Carta 2: %d ->", populacao1, populacao2);
            if (populacao1 == populacao2)
            {
            printf("  Empatou!\n");
            } else if (populacao1 > populacao2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 2:
            printf("## AREA - Carta 1: %f X Carta 2: %f ->", area1, area2);
            if (area1 == area2)
            {
            printf("  Empatou!\n");
            } else if (area1 > area2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 3:
            printf("## PIB - Carta 1: %f X Carta 2: %f ->", pib1, pib2);
            if (pib1 == pib2)
            {
            printf("  Empatou!\n");
            } else if (pib1 > pib2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 4:
            printf("## Nº PONTOS TUR. - Carta 1: %i X Carta 2: %i ->", nPontoTur1, nPontoTur2);
            if (nPontoTur1 == nPontoTur2)
            {
            printf("  Empatou!\n");
            } else if (nPontoTur1 > nPontoTur2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 5:
            printf("## Média PerCapta  - Carta 1: %f X Carta 2: %f ->n", percapta1, percapta2);
            if (percapta1 == percapta2)
            {
            printf("  Empatou!\n");
            } else if (percapta1 > percapta2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 6:
            printf(" Densidade Populacional - Carta 1: %f X Carta 2: %f \n", densiPopula1, densiPopula2);
            if (densiPopula1 == densiPopula2)
            {
            printf("  Empatou!\n");
            } else if (densiPopula1 < densiPopula2)
                {     
                printf("  Carta 1 venceu!\n");
                } else
                {
                    printf("  Carta 2 venceu!\n");
                }
            break;  
        default:
            printf("Opção inválida\n");
            break;
        }
        switch (escolhaAtributo2)
        {
        case 1:
            printf("## POPULAÇÃO - Carta 1: %d X Carta 2: %d ->", populacao1, populacao2);
            if (populacao1 == populacao2)
            {
            printf("  Empatou!\n");
            } else if (populacao1 > populacao2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 2:
            printf("## AREA - Carta 1: %f X Carta 2: %f ->", area1, area2);
            if (area1 == area2)
            {
            printf("  Empatou!\n");
            } else if (area1 > area2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 3:
            printf("## PIB - Carta 1: %f X Carta 2: %f ->", pib1, pib2);
            if (pib1 == pib2)
            {
            printf("  Empatou!\n");
            } else if (pib1 > pib2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 4:
            printf("## Nº PONTOS TUR. - Carta 1: %i X Carta 2: %i ->", nPontoTur1, nPontoTur2);
            if (nPontoTur1 == nPontoTur2)
            {
            printf("  Empatou!\n");
            } else if (nPontoTur1 > nPontoTur2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 5:
            printf("## Média PerCapta  - Carta 1: %f X Carta 2: %f ->n", percapta1, percapta2);
            if (percapta1 == percapta2)
            {
            printf("  Empatou!\n");
            } else if (percapta1 > percapta2)
                {     
                printf("  Carta 1 é maior venceu!\n");
                } else
                {
                    printf("  Carta 2 é maior venceu!\n");
                }
            break;
            case 6:
            printf(" Densidade Populacional - Carta 1: %f X Carta 2: %f \n", densiPopula1, densiPopula2);
            if (densiPopula1 == densiPopula2)
            {
            printf("  Empatou!\n");
            } else if (densiPopula1 < densiPopula2)
                {     
                printf("  Carta 1 venceu!\n");
                } else
                {
                    printf("  Carta 2 venceu!\n");
                }
            break;
        default:
            printf("Opção inválida\n");
            break;
        };

        
    return 0;
}
