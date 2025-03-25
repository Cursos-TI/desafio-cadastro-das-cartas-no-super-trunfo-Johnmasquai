#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char NomedoPais1[10], NomedoPais2[10];
    int opcao;

    printf("1. Nome do país\n");//só para exibir informações, sem comparação direta
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");//Menor valor vence
    scanf("%d", opcao);
    
    switch (opcao)
    {
    case 1:
         (opcao = 1);
            printf("%s\n", NomedoPais1[10]);
            printf("%s\n", NomedoPais2[10]);
        break;
    default:
        break;
    return 0;
}