#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    //Dados e Atributos  das Cartas

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
    //float mediaden1 = (unsigned int) populacao1 /(float) area1 ; Densidade Pop. Normal
    //float mediaden2 = (unsigned int) populacao2 /(float) area2 ; Densidade Pop. Normal
    float mediaden1 = 1 / ((unsigned int) populacao1 /(float) area1) ; // Dens. Pop. Inversa
    float mediaden2 = 1 / ((unsigned int) populacao2 /(float) area2) ; // Dens. Pop. Inversa
    
    float pibcap1 = pib1 / populacao1;
    float pibcap2 = pib2 / populacao2;
    float superPoder1 = (unsigned int)populacao1 + (float)area1 + (float)pib1 + (int)turismo1 + (float)mediaden1 + (float)pibcap1, superPoder2 = (unsigned int)populacao2 + (float) area2 + (float) pib2 + (int) turismo2 +
    (float) mediaden2 + (float) pibcap2 ;
    
    //Dados usados para menus e comparação de um ou múltiplos atributos
    int opcao;
    int resultado, resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    
    // Código usado para imprimir os dados das cartas

    printf(" *** SUPER TRUNFO *** \n");

     printf("Carta 1: \n\n");
    
    printf("Estado: %c \n", estado1);

    printf("Código: %s \n",codcarta1);

    printf("Cidade: %s \n", cidade1);

    printf("População: %d \n", populacao1);

    printf("Área : %.1f \n", area1);
    
    printf("PIB : %.1f \n", pib1);

    printf("Turismo : %d \n", turismo1);

    printf("Densidade Populacional: %.2f Hab/Km² \n",mediaden1);

    printf("PIB per Capita:R$ %.2f \n", pibcap1);

    printf("Super Poder: %.1f\n", superPoder1);

    

    printf("\n\n");

    printf("Carta 2: \n\n");
    
    printf("Estado: %c \n", estado2);

    printf("Código: %s \n",codcarta2);

    printf("Cidade: %s \n", cidade2);

    printf("População: %d \n", populacao2);

    printf("Área : %.1f \n", area2);
    
    printf("PIB : %.1f \n", pib2);

    printf("Turismo : %d \n", turismo2);

    printf("Densidade Populacional: %.2f Hab/Km² \n",mediaden2);

    printf("PIB per Capita:R$ %.2f \n", pibcap2);

    printf("Super Poder: %.1f\n", superPoder2);
    

    
    printf("\n\n");

    //Menu Interativo

    printf("** Menu Principal ** \n");
    printf("1. Comparar População \n");
    printf("2. Comparar Área \n");
    printf("3. Comparar PIB \n");
    printf("4. Comparar Turismo \n");
    printf("5. Comparar Densidade Demográfica \n");
    printf("6. Ver Regras \n");
    printf("7. Sair \n");
    printf("Escolha uma Opção:");
    scanf("%d", &opcao);

    printf("\n\n");

    // Estrutua utilizada para fazer o Comparativo
    
    switch (opcao) { 
    case 1:
        
    printf("População: \n - Carta 1: São Paulo \n[%u] Habitante(s) \n\n - Carta 2: Rio de Janeiro \n[%u] Habitante(s) \n\n ", populacao1 , populacao2);
    printf("\n\n");
    
        resultado = populacao1 > populacao2 ? 1 : 0;
    
        
        break;
    
     
    case 2:
    printf("Área: \n - Carta 1: São Paulo \n[%.1f] Km² \n\n - Carta 2: Rio de Janeiro \n[%.1f] KM² \n\n ", area1 , area2);
    printf("\n\n");

        resultado = area1 > area2 ? 1 : 0;

        break;
    
    case 3:
    printf("PIB: \n - Carta 1: São Paulo \n R$ [%.1f]  \n\n - Carta 2: Rio de Janeiro \n R$ [%.1f]  \n\n !", pib1 , pib2);
    printf("\n\n");

        resultado = pib1 > pib2 ? 1 : 0;


    case 4:
    printf("Turismo: \n - Carta 1: São Paulo \n [%d] Atração(ões)  \n\n - Carta 2: Rio de Janeiro \n [%d] Atração(ões)  \n\n ", turismo1 , turismo2);
    printf("\n\n");

        resultado = turismo1 > turismo2 ? 1 : 0;

        break;

    case 5:
    printf("Densidade Demográfica: \n - Carta 1: São Paulo \n [%.4f] Hab/Km²  \n\n - Carta 2: Rio de Janeiro \n [%.4f] Hab/Km²  \n\n ", mediaden1 , mediaden2);
    printf("\n\n");
   
        resultado = mediaden1 < mediaden2 ? 1 : 0;

    
    case 6:
    printf("-As Cartas são comparadas e aquela tiver o maior valor de determinado atributo VENCE!! \n\n-EXCEÇÃO para quando o atributo é Densidade Demográfica, onde a carta com o menor valor vence! \n");

        break;
        
    case 7:
    printf("Encerrando e Saindo... \n");

        break;
    
    default:
    printf("Opção Inválida!!");

        break;
    }

    if (resultado == 1){
        printf("Carta 1 Venceu !! \n");
    } else {
        printf("Carta 2 Venceu !! \n ");
    }
    
}

