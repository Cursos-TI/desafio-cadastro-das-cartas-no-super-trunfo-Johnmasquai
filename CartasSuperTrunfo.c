#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //essas sao as variaveis criadas por mim, com nomes de facil entendimento.
    char Estado1, Estado2, atributo1, atributo2;
    char nome_cidade1[20], codigo_carta1[10], nome_cidade2[20], codigo_carta2[10], NomedoPais1[20], NomedoPais2[20];
    unsigned long int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float PIB1, area_emkm1, PIB2, area_emkm2, PIBpercapita1, Densidadepopulacional1, PIBpercapita2, Densidadepopulacional2;
    float Superpoder1, Superpoder2;
    float resultadoPopulacao, resultadoPT, resultadoPIB, resultadoArea, resultadoPIBper, resultadoDensidade, resultadoSuperpoder, resultado1, resultado2;
    int opcao;
    //a maior parte do programa foi feito usando printf para imprimir as informações das cartar e scanf para capturar, usei tambem o fgets.
    //aqui eu peço as informações da primeira carta.
    //temos aqui o país Brasil com 8 estados diferentes A-H e cada estado com 4 cidades diferentes 1-4.
    //quando o programa te pedir o código da carta digite a letra que representa o estado e um número de 1 a 4 que represente a cidade Ex:E01, A02.

    printf("CARTA 1\n");
    
    printf("\n");

    printf("Qual o nome do primeiro país?\n");
    getchar();
    fgets(NomedoPais1, 20, stdin);

    printf("\n");
    
    printf("Qual o estado presente na carta?\n");
    scanf("%c", &Estado1);

    printf("\n");

    printf("Insira o código da carta:\n");
    scanf("%s", codigo_carta1);

    printf("\n");

    //Aqui coloquei o fgets e getchar para conseguir ler os espaços que tem na escrita.
    printf("Qual o nome da cidade?\n");
    getchar();
    fgets(nome_cidade1, 20, stdin);  

    printf("\n");

    printf("Qual a população da cidade?\n");
    scanf("%lu", &populacao1);

    printf("\n");

    printf("Qual a área da cidade?(em km²)\n");
    scanf("%f", &area_emkm1);

    printf("\n");

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB1);
    
    printf("\n");

    printf("Quantos pontos túristicos existem na cidade?\n");
    scanf("%lu", &pontos_turisticos1);

    printf("\n");
    
    //Aqui são os calculos do PIB per capita e densidade populacional da carta 1
    PIBpercapita1 = PIB1 / populacao1;
    Densidadepopulacional1 = populacao1 / area_emkm1;
    
    //calculo do Super poder carta 1
    Superpoder1 = (float) populacao1 + PIB1 + area_emkm1 + PIBpercapita1 + (1 / Densidadepopulacional1) + pontos_turisticos1;
    
    //Aqui eu peço as informações da segunda carta, assim como foi solicitado.
    printf("CARTA 2\n");

    printf("\n");

    printf("Qual o nome do segundo País?\n");
    getchar();
    fgets(NomedoPais2, 20, stdin);

    printf("\n");

    printf("Qual o estado presente na carta?\n");
    scanf(" %c", &Estado2);

    printf("\n");

    printf("Insira o código da carta:\n");
    scanf("%s", codigo_carta2);

    printf("\n");

    printf("Qual o nome da cidade?\n");
    getchar();
    fgets(nome_cidade2, 20, stdin);  

    printf("\n");

    printf("Qual a população da cidade?\n");
    scanf("%lu", &populacao2);

    printf("\n");

    printf("Qual a área da cidade?(em km²)\n");
    scanf("%f", &area_emkm2);

    printf("\n");

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB2);
    
    printf("\n");

    printf("Quantos pontos túristicos existem na cidade?\n");
    scanf("%lu", &pontos_turisticos2);

    printf("\n");

    //Aqui são os calculos do PIB per capita e densidade populacional da carta 2
    PIBpercapita2 = PIB2 / populacao2;
    Densidadepopulacional2 = populacao2 / area_emkm2;
    
    //calculo Super poder carta 2
    Superpoder2 = (float) populacao2 + PIB2 + area_emkm2 + PIBpercapita2 + (1 / Densidadepopulacional2) + pontos_turisticos2;

    //Aqui é o espaço onde está exibindo as informações das cartas

    //CARTA 1
    printf("CARTA 1\n");

    printf("Estado: %c\n", Estado1);

    printf("Código da carta: %s\n", codigo_carta1);

    printf("Nome da Cidade:%s", nome_cidade1);

    printf("População: %lu\n", populacao1);

    printf("Área: %.2f km²\n", area_emkm1);

    printf("PIB: %.2f\n", PIB1);

    printf("Números de Pontos Túristicos: %lu\n", pontos_turisticos1);

    printf("Densidade populacional: %.2f\n", Densidadepopulacional1);

    printf("PIB per capita: %.2f\n", PIBpercapita1);
    
    printf("\n");

    printf("Super Poder: %.2f\n", Superpoder1);

    printf("\n");

    //CARTA2 

    printf("CARTA 2\n");

    printf("Estado: %c\n", Estado2);

    printf("Código da carta: %s\n", codigo_carta2);

    printf("Nome da Cidade:%s", nome_cidade2);

    printf("População: %lu\n", populacao2);

    printf("Área: %.2f km²\n", area_emkm2);

    printf("PIB: %.2f\n", PIB2);

    printf("Números de Pontos Túristicos: %lu\n", pontos_turisticos2);

    printf("Densidade populacional: %.2f\n", Densidadepopulacional2);

    printf("PIB per capita: %.2f\n", PIBpercapita2);
    
    printf("\n");

    printf("Super Poder: %.2f\n", Superpoder2);

    printf("\n");

    //calculos das comparações das cartas

    printf("==============\n");
    printf("COMPARANDO DOIS ATRIBUTOS!\n");
    printf("==============\n");

    printf("\n");

    printf("Escolha o primeiro atributo!\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n");
    printf("T. Pontos Turisticos\n");
    printf("D. Densidade demográfica\n");

    printf("\n");

    printf("Escolha o segundo atributo!\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n");
    printf("T. Pontos Turisticos\n");
    printf("D. Densidade demográfica\n");

    printf("Escolha a comparação:\n");
    scanf(" %c", &atributo1);

    printf("Escolha a comparação:\n");
    scanf(" %c", &atributo2);

    if (atributo1 == atributo2){
        printf("Atributos são os mesmos!\n");
    }

    switch (atributo1)
        {
        case 'P':
        case 'p':
            printf("Nome do primeiro país: %s\n", NomedoPais1);
            printf("Nome do segundo país: %s\n", NomedoPais2);
            printf("Você escolheu a opção População!\n");
            printf("Carta 1:%lu, Carta 2:%lu", populacao1, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 'A':
        case 'a':
            printf("Nome do primeiro país: %s\n", NomedoPais1);
            printf("Nome do segundo país: %s\n", NomedoPais2);
            printf("Você escolheu a opção Área!\n");
            printf("Carta 1:%.2f, Carta 2:%.2f", area_emkm1, area_emkm2);
            resultado1 = area_emkm1 > area_emkm2 ? 1 : 0;
        break;
        case 'B':
        case 'b':
            printf("Nome do primeiro país: %s\n", NomedoPais1);
            printf("Nome do segundo país: %s\n", NomedoPais2);
            printf("Você escolheu a opção PIB!\n");
            printf("Carta 1:%.2f, Carta 2:%.2f", PIB1, PIB2);
            resultado1 = PIB1 > PIB2 ? 1 : 0;
        break;
        case 'T':
        case 't':
            printf("Nome do primeiro país: %s\n", NomedoPais1);
            printf("Nome do segundo país: %s\n", NomedoPais2);
            printf("Você escolheu a opção Pontos Turisticos!\n");
            printf("Carta 1:%lu, Carta 2:%lu", pontos_turisticos1, pontos_turisticos2);
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
        case 'D':
        case 'd':
            printf("Nome do primeiro país: %s\n", NomedoPais1);
            printf("Nome do segundo país: %s\n", NomedoPais2);
            printf("Você escolheu a opção Densidade demográfica!\n");
            printf("Carta 1:%.2f, Carta 2:%.2f", Densidadepopulacional1, Densidadepopulacional2);
            resultado1 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;
        break;
        default: 
            printf("Opção inválida!\n");
        break;
    }

    printf("\n");
    
    switch (atributo2)
        {
        case 'P':
        case 'p':
            printf("Você escolheu a opção População!\n");
            printf("Carta 1:%lu, Carta 2:%lu", populacao1, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 'A':
        case 'a':
            printf("Você escolheu a opção Área!\n");
            printf("Carta 1:%.2f, Carta 2:%.2f", area_emkm1, area_emkm2);
            resultado2 = area_emkm1 > area_emkm2 ? 1 : 0;
        break;
        case 'B':
        case 'b':
            printf("Você escolheu a opção PIB!\n");
            printf("Carta 1:%.2f, Carta 2:%.2f", PIB1, PIB2);
            resultado2 = PIB1 > PIB2 ? 1 : 0;
        break;
        case 'T':
        case 't':
            printf("Você escolheu a opção Pontos Turisticos!\n");
            printf("Carta 1:%lu, Carta 2:%lu", pontos_turisticos1, pontos_turisticos2);   
            resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção Densidade demográfica!\n");
            printf("Carta 1:%.2f, Carta 2:%.2f", Densidadepopulacional1, Densidadepopulacional2);
            resultado2 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;
        break;
        default:
            printf("Opção inválida!\n");
        break;
        }
    
    printf("\n");

    printf("Resultados:\n");

    if (resultado1 && resultado2){
        printf("Parabéns, você ganhou!\n");
    }   else if (resultado1 != resultado2){
        printf("Empatou!\n");
    }   else {
        printf("Infelizmente, você perdeu!\n");
    }
    return 0;
    //código finalizado e programa tudo certo com as solicitações
}

    



