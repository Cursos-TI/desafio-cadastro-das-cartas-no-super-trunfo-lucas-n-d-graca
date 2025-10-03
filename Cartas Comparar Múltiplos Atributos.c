#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    char estado1= 'A';
    char estado2= 'B';
    char codcarta1 [4] = "A01";
    char codcarta2 [4] = "A02";
    char cidade1 [83] = "São Paulo";
    char cidade2 [83] = "Rio de Janeiro";
    unsigned int populacao1 = 500 , populacao2= 490;
    float area1= 14  , area2= 12  ;
    float pib1 = 50000, pib2= 60000 ;
    int turismo1= 8, turismo2= 4;

    float mediaden1 = 1 / ((unsigned int) populacao1 /(float) area1) ; // Dens. Pop. Inversa
    float mediaden2 = 1 / ((unsigned int) populacao2 /(float) area2) ; // Dens. Pop. Inversa
    
    float pibcap1 = pib1 / populacao1;
    float pibcap2 = pib2 / populacao2;
    float superPoder1 = (unsigned int)populacao1 + (float)area1 + (float)pib1 + (int)turismo1 + (float)mediaden1 + (float)pibcap1, superPoder2 = (unsigned int)populacao2 + (float) area2 + (float) pib2 + (int) turismo2 +
    (float) mediaden2 + (float) pibcap2 ;

    
    int  resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;

    printf("Bem Vindo ao Jogo!! \n");
    printf("Escolha o Primeiro Atributo. \n");
    printf("A. População \n");
    printf("B. Área \n");
    printf("C. PIB \n");
    printf("D. Turismo \n");
    printf("E. Densidade Demográfica \n");
    printf("F. PIB Per Capita \n");
    printf("G. Super Poder \n");

    printf("Escolha a Comparação:\n ");
    scanf("%c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a': 
        printf("Você escolheu a opção População !! \n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu a opção Área !! \n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu a opção PIB !! \n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu a opção Turismo !! \n");
        resultado1 = turismo1 > turismo2 ? 1 : 0;
        break;
    case 'E':
    case 'e':
        printf("Você escolheu a opção Densidade Demográfica !! \n");
        resultado1 = mediaden1 < mediaden2 ? 1 : 0;
        break;
    case 'F':
    case 'f':
        printf("Você escolheu a opção PIB Per Capita !! \n");
        resultado1 = pibcap1 > pib2 ? 1 : 0;
        break;
    case 'G':
    case 'g':
        printf("Você escolheu a opção Super Poder !! \n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;
    default:
        printf("Opção Inválida !\n");
    break;
    }

    printf("Escolha o Segundo Atributo. \n");
    printf("A. População \n");
    printf("B. Área \n");
    printf("C. PIB \n");
    printf("D. Turismo \n");
    printf("E. Densidade Demográfica \n");
    printf("F. PIB Per Capita \n");
    printf("G. Super Poder \n");

    printf("Escolha a Comparação: \n ");
    scanf(" %c", &segundoAtributo);
    if (primeiroAtributo == segundoAtributo)
    {
         printf("Você escolheu o mesmo Atributo!!\n");
    } else { 
        switch (segundoAtributo)
        {
    case 'A':
    case 'a': 
        printf("Você escolheu a opção População !! \n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu a opção Área !! \n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu a opção PIB !! \n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu a opção Turismo !! \n");
        resultado2 = turismo1 > turismo2 ? 1 : 0;
        break;
    case 'E':
    case 'e':
        printf("Você escolheu a opção Densidade Demográfica !! \n");
        resultado2 = mediaden1 < mediaden2 ? 1 : 0;
        break;
    case 'F':
    case 'f':
        printf("Você escolheu a opção PIB Per Capita !! \n");
        resultado2 = pibcap1 > pib2 ? 1 : 0;
        break;
    case 'G':
    case 'g':
        printf("Você escolheu a opção Super Poder !! \n");
        resultado2 = superPoder1 > superPoder2 ? 1 : 0;
        break;
    default:
        printf("Opção Inválida !\n");
    break;
    }

}

    if (resultado1 && resultado2){
        printf("Parabéns!! Você Venceu!! ;)\n");

    } else if (resultado1 != resultado2){
        printf("Empate! :|\n");

    } else {
        printf("Você Perdeu! :(\n");
    }
    
    }