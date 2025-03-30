#include <stdio.h>

int main(){
    char carta;
    char estado[32];
    char codigodacarta[32];
    char nomedacidade[50];
    unsigned long int populacao;
    float  area;
    double pib;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
    float superpoder;
    long double invdensidadepopulacional;
    int n = 1;

    printf("*** Super trunfo***\n\n");
    printf("Carta 1 \n", carta);
    printf("Estado: A \n", estado);
    printf("Código da Carta: A01 \n", codigodacarta);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade);
    printf("A Cidade é: %s\n", nomedacidade);

    printf("Digite o Número da População: ");
    scanf("%lu", &populacao);
    printf("O Número da População é:  %ld\n", populacao);

    printf("Digite a área: ");
    scanf("%f", &area);
    printf("A área é: %.0f Km2\n", area);//separar numeros de letras

    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("O PIB é: R$%.0lf\n", pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticos);
    printf("Digite o Número de Pontos Turísticos é: %d\n", numerodepontosturisticos);

    densidadepopulacional = populacao / area;//divisao da populacao pela area;

    printf("A Densidade Populacional é: %.2f Hab/Km2\n", densidadepopulacional);//separar numeros de letra

    pibpercapita = pib / populacao;//divisao do pib pela populacao

    printf("O PIB per Capita é: R$%.2f\n\n", pibpercapita);//separar numeros de letras

    invdensidadepopulacional =  n / densidadepopulacional;//divisao inversa da densidade

    superpoder = populacao + area + pib + numerodepontosturisticos + pibpercapita + (double) invdensidadepopulacional;//soma de todos os atributos numericos

    printf("O Super Poder da Carta 1 é: %.2lf\n\n\n", superpoder);//separar numeros de letras
    printf("--------------------------------------------------------------------- \n\n");


    char carta2;
    char estado2[32];
    char codigodacarta2[32];
    char nomedacidade2[50];
    unsigned long int populacao2;
    float  area2;
    double pib2;
    int numerodepontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    long double invdensidadepopulacional2;
    float superpoder2;



    printf("Carta 2 \n", carta2);
    printf("Estado: B \n", estado2);
    printf("Código da Carta: B01 \n", codigodacarta2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomedacidade2);
    printf("A Cidade é: %s\n", nomedacidade2);

    printf("Digite o Número da População: ");
    scanf("%lu", &populacao2);
    printf("O Número da População é:  %ld\n", populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("A Área é: %.0f Km2\n", area2);//separar numeros de letras

    printf("Digite o PIB: ");
    scanf("%lf", &pib2);
    printf("O PIB é: R$%.0lf\n", pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticos2);
    printf("Digite o Número de Pontos Turísticos é: %d\n", numerodepontosturisticos2);

    densidadepopulacional2 = populacao2 / area2;//divisao da populacao pela area;

    printf("A Densidade Populacional é: %.2f Hab/Km2\n", densidadepopulacional2);//separar numeros de letra

    pibpercapita2 = pib2 / populacao2;//divisao do pib pela populacao

    printf("O PIB per Capita é: R$%.2f\n\n", pibpercapita2);//separar numeros de letra

    invdensidadepopulacional2 =  n / densidadepopulacional2;//divisao inversa da densidade

    superpoder2 = populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2 + (double) invdensidadepopulacional2;//soma de todos os atributos numericos

    printf("O Super Poder da Carta 2 é: %.2lf\n\n\n", superpoder2);
    printf("--------------------------------------------------------------------- \n\n");


    int comp1, comp2, comp3, comp4, comp5, comp6, comp7;

    comp1 = populacao > populacao2;
    comp2 = area > area2;
    comp3 = pib > pib2;
    comp4 = numerodepontosturisticos > numerodepontosturisticos2;
    comp5 = densidadepopulacional > densidadepopulacional2;
    comp6 = pibpercapita > pibpercapita2;
    comp7 = superpoder > superpoder2;

    printf("***Comparacoes das Cartas***\n\n");
    printf("**As comparações serão: População, Área, PIB, Pontos Turísticos, Densidade Populacional e PIB per Capita (Respectivamente)**\n\n");
    printf("**Usaremos 1 para verdadeiro, e 0 para falso**\n\n\n");
    printf("A Carta 1 tem População maior do que o da Carta 2: %d\n\n", comp1);
    printf("A Carta 1 tem Área  maior do que o da Carta 2: %d\n\n", comp2);
    printf("A Carta 1 tem PIB maior do que o da Carta 2: %d\n\n", comp3);
    printf("A Carta 1 tem Número de Pontos Turísticos maior do que o da Carta 2: %d\n\n", comp4);
    printf("A Carta 1 tem Densidade Populacional maior do que o da Carta 2: %d\n\n", comp5);
    printf("A Carta 1 tem PIB per Capita maior do que o da Carta 2: %d\n\n", comp6);
    printf("A Carta 1 tem Super Poder maior do que o da Carta 2: %d\n\n", comp7);







    return 0;
}