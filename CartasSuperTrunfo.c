#include <stdio.h>

int main() {
    //essas sao as variaveis criadas por mim, com nomes de facil entendimento.
    char Estado;
    char nome_cidade[20], codigo_carta[10];
    int populacao, pontos_turisticos;
    float PIB, area_emkm;

    //a maior parte do programa foi feito usando printf para imprimir as informações das cartar e scanf para capturar, usei tambem o fgets.
    //aqui eu peço as informações da primeira carta.
    //temos aqui o país Brasil com 8 estados diferentes A-H e cada estado com 4 cidades diferentes 1-4.
    //quando o programa te pedir o código da carta digite a letra que representa o estado e um número de 1 a 4 que represente a cidade Ex:E01, A02.
    printf("CARTA 1\n");

    printf("\n");
    
    printf("Qual o estado presente na carta?\n");
    scanf("%c", &Estado);

    printf("\n");

    printf("Insira o código da carta:\n");
    scanf("%s", codigo_carta);

    printf("\n");

    //Aqui coloquei o fgets e getchar para conseguir ler os espaços que tem na escrita.
    printf("Qual o nome da cidade?\n");
    getchar();
    fgets(nome_cidade, 20, stdin);  

    printf("\n");

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("\n");

    printf("Qual a área da cidade?(em km²)\n");
    scanf("%f", &area_emkm);

    printf("\n");

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);
    
    printf("\n");

    printf("Quantos pontos túristicos existem na cidade?\n");
    scanf("%d", &pontos_turisticos);

    printf("\n");
    
    printf("CARTA 1\n");

    printf("Estado: %c\n", Estado);

    printf("Código da carta: %s\n", codigo_carta);

    printf("Nome da Cidade:%s", nome_cidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area_emkm);

    printf("PIB: %.2f\n", PIB);

    printf("Números de Pontos Túristicos: %d\n", pontos_turisticos);
    
    printf("\n");

    //Aqui eu peço as informações da segunda carta, assim como foi solicitado.
    printf("CARTA 2\n");

    printf("\n");
    
    //Aqui coloquei o getchar para poder recapturar a informação da variável "Estado".
    getchar();
    printf("Qual o estado presente na carta?\n");
    scanf("%c", &Estado);

    printf("\n");

    printf("Insira o código da carta:\n");
    scanf("%s", codigo_carta);

    printf("\n");

    printf("Qual o nome da cidade?\n");
    getchar();
    fgets(nome_cidade, 20, stdin);  

    printf("\n");

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("\n");

    printf("Qual a área da cidade?(em km²)\n");
    scanf("%f", &area_emkm);

    printf("\n");

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);
    
    printf("\n");

    printf("Quantos pontos túristicos existem na cidade?\n");
    scanf("%d", &pontos_turisticos);

    printf("CARTA 2\n");

    printf("Estado: %c\n", Estado);

    printf("Código da carta: %s\n", codigo_carta);

    printf("Nome da Cidade:%s", nome_cidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area_emkm);

    printf("PIB: %.2f\n", PIB);

    printf("Números de Pontos Túristicos: %d\n", pontos_turisticos);
    
    printf("\n");

    return 0;

    //código finalizado e programa tudo certo com as solicitações
}

    



