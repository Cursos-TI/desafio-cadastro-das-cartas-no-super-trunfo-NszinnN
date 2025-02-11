#include <stdio.h>

int main() {
    float populacao;                /*Variavel de valor Flutuante*/
    float area;
    int pib;                        /*Variavel de valor inteiro*/
    char pontos_turisticos[50];     /*Variavel de strings*/


    printf("Digite a população: \n");   /*Mostrar pergunta*/
    scanf("%f", &populacao);            /*Ler a resposta*/

    printf("Digite a área: \n");        /*Mostrar pergunta*/
    scanf("%f", &area);                 /*ler resposta*/

    printf("Digite o PIB: \n"); 
    scanf("%f", &pib);

    printf("Quais os Pontos Turisticos? \n");
    scanf("%s", &pontos_turisticos);

    printf("-------------------------\n");
    printf("População: %f\n", populacao);                   //Mostrar população escrita pelo usuario;
    printf("Área: %.2f\n", area);                             //Mostrar área;
    printf("PIB: %.2f\n", pib);                               //Mostrar PIB;
    printf("Pontos Turisticos: %s\n", pontos_turisticos);   //Mostrar pontos turisticos;
    printf("-------------------------\n");

    return 0;
}
