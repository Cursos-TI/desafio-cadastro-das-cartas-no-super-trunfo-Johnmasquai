#include <stdio.h>

int main() {
    char Estado;
    char nomecidade[20];
    int populacao, pontos_turisticos, codigo_carta;
    float PIB, area_emkm;

    printf("CARTA 1\n");

    printf("\n");
    
    printf("Qual o estado presente na carta?\n");
    scanf("%c", &Estado);

    printf("\n");

    printf("Insira o código da carta:\n");
    scanf("%d", &codigo_carta);

    printf("\n");

    printf("Qual o nome da cidade?\n");
    getchar();
    fgets(nomecidade, 20, stdin);  

    printf("\n");

    printf("Qual a populção da cidade?\n");
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

    printf("CARTA 1\n");

    printf("Estado: %c\n", Estado);

    printf("Código da carta:%c0%d\n", Estado,codigo_carta);

    printf("Nome da Cidade:%s", nomecidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area_emkm);

    printf("PIB: %.2f\n", PIB);

    printf("Números de Pontos Túristicos: %d\n", pontos_turisticos);
    
    printf("\n");

    return 0;
}
    
#include <stdio.h>

int main(){
    
    char Estado;
    char nomecidade[20];
    int populacao, pontos_turisticos, codigo_carta;
    float PIB, area_emkm;

    printf("CARTA 2\n");

    printf("\n");
    
    printf("Qual o estado presente na carta?\n");
    scanf("%c", &Estado);

    printf("\n");

    printf("Insira o código da carta:\n");
    scanf("%d", &codigo_carta);

    printf("\n");

    printf("Qual o nome da cidade?\n");
    getchar();
    fgets(nomecidade, 20, stdin);  

    printf("\n");

    printf("Qual a populção da cidade?\n");
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

    printf("Código da carta:%c0%d\n", Estado,codigo_carta);

    printf("Nome da Cidade:%s", nomecidade);

    printf("População: %d\n", populacao);

    printf("Área: %.2f km²\n", area_emkm);

    printf("PIB: %.2f\n", PIB);

    printf("Números de Pontos Túristicos: %d\n", pontos_turisticos);
    
    printf("\n");

    return 0;
}

    



