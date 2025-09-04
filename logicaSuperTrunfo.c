#include <stdio.h>

    int main() {

        //CARTA 1 
        char estado1[50], codigo1[4], nome_cidade1[50];                
        int populacao1, pontos_turistico1;            
        float area1, pib1, densidade_populacional1, pib_per_capita1, cidade_vencedora1;            
        

        printf("===SUPER TRUNFO ESTADOS===\n\n");
        
        // Cadastro da carta 1 (entrada de dados)
        printf("\n=== Cadastro da Carta 1 ===\n");

        printf("Digite o estado: ");  
        scanf(" %[^\n]", estado1);  //lê até encontrar o ENTER  
        printf("Digite o código da carta: ");
        scanf("%3s", codigo1);   // limita a 3 caracteres
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome_cidade1);
        printf("Digite a população: ");
        scanf("%d", &populacao1);
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area1);
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turistico1);

        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 =(pib1 * 1000000000) / populacao1; 
        /*
        O PIB é digitado em bilhões, o programa multiplica por 1000000000 para transformar em reais.
        Depois divide pelos habitantes.
        Resultado sai em reais por pessoa.
        */

        cidade_vencedora1 = (float) populacao1 + area1 + pib1 + pontos_turistico1 + pib_per_capita1 + (1.0 / densidade_populacional1);

        // Exibição dos dados
        printf("\n--- Carta 1 ---\n");
        printf("Nome: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nome_cidade1);
        printf("População: %d milhões de habitantes\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("Pontos Turísticos: %d\n", pontos_turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

        //CARTA 2 
        char estado2[50], codigo2[4], nome_cidade2[50];           
        int populacao2, pontos_turistico2;             
        float area2, pib2, densidade_populacional2, pib_per_capita2, cidade_vencedora2;

        // Cadastro da carta 2 (entrada de dados)
        printf("\n=== Cadastro da Carta 2 ===\n");

        printf("Digite o estado: ");  
        scanf(" %[^\n]", estado2); //lê até encontrar o ENTER  
        printf("Digite o código da carta: ");
        scanf("%3s", codigo2);   // limita a 3 caracteres
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome_cidade2);
        printf("Digite a população: ");
        scanf("%d", &populacao2);
        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area2);
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turistico2);

        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 =(pib2 * 1000000000) / populacao2; 

        //casting para float
        cidade_vencedora2 = (float) populacao1 + area1 + pib1 + pontos_turistico1 + pib_per_capita1 + (1.0 / densidade_populacional1);
        
        //MENU INTERATIVO
        int opcao;
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("6. PIB per Capita\n");
        printf("Escolha o atributo para comparar: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
           printf("\n===Comparação da População===\n");
           printf("%s: %d habitantes\n", nome_cidade1, populacao1);
           printf("%s: %d habitantes\n", nome_cidade2, populacao2);
           if(populacao1 > populacao2){
                printf("Vencedora: %s\n", nome_cidade1);
           }else if(populacao2 > populacao1){
                printf("Vencedora: %s", cidade_vencedora2);
           }else{
                printf("Empate!\n");
           }
        break;
        case 2:
           printf("\n===Comparação da Área===\n");
           printf("%s: %.2f km²\n", nome_cidade1, area1);
           printf("%s: %.2f km²\n", nome_cidade2, area2);
           if(area1 > area2){
                printf("Vencedora: %s\n", nome_cidade1);
           }else if(area2 > area1){
                printf("Vencedora: %s", cidade_vencedora2);
           }else{
                printf("Empate!\n");
           }
        break;
         case 3:
           printf("\n===Comparação do PIB===\n");
           printf("%s: %.2f bilhões\n", nome_cidade1, pib1);
           printf("%s: %.2f bilhões\n", nome_cidade2, pib2);
           if(pib1 > pib2){
                printf("Vencedora: %s\n", nome_cidade1);
           }else if(pib2 > pib1){
                printf("Vencedora: %s", cidade_vencedora2);
           }else{
                printf("Empate!\n");
           }
        break;
         case 4:
           printf("\n===Comparação de Pontos Turísticos===\n");
           printf("%s: %d\n", nome_cidade1, pontos_turistico1);
           printf("%s: %d\n", nome_cidade2, pontos_turistico2);
           if(pontos_turistico1 > pontos_turistico2){
                printf("Vencedora: %s\n", nome_cidade1);
           }else if(pontos_turistico2 > pontos_turistico1){
                printf("Vencedora: %s", cidade_vencedora2);
           }else{
                printf("Empate!\n");
           }
        break;
         case 5:
           printf("\n===Comparação da Densidade Demográfica===\n");
           printf("%s: %.2f hab/km²\n", nome_cidade1, densidade_populacional1);
           printf("%s: %.2f hab/km²\n", nome_cidade2, densidade_populacional2);
           if(densidade_populacional1 < densidade_populacional2){
                printf("Vencedora: %s\n", nome_cidade1);
           }else if(densidade_populacional2 < densidade_populacional1){
                printf("Vencedora: %s", cidade_vencedora2);
           }else{
                printf("Empate!\n");
           }
        break;
        case 6:
           printf("\n===Comparação de PIB per Capita===\n");
           printf("%s: %.2f reais\n", nome_cidade1, pib_per_capita1);
           printf("%s: %.2f reais\n", nome_cidade2, pib_per_capita2);
           if(pib_per_capita1 > pib_per_capita2){
                printf("Vencedora: %s\n", nome_cidade1);
           }else if(pib_per_capita2 > pib_per_capita1){
                printf("Vencedora: %s", cidade_vencedora2);
           }else{
                printf("Empate!\n");
           }
        break;
        default:
           printf("Opção Inválida!\n");
            break;
        }

        if (cidade_vencedora1 > cidade_vencedora2){
            printf("Resultado: Carta 1 %s venceu!\n", estado1);
        }else{
           printf("Resultado: Carta 2 %s venceu!\n", estado2);
       }
       
         return 0;
    }
