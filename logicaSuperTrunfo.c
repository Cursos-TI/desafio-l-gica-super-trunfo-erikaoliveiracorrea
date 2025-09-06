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
       int opcao1, opcao2;
        printf("\n=== Escolha o PRIMEIRO atributo para comparar ===\n");
        printf("1. Ataque (População)\n");
        printf("2. Defesa (PIB per capita)\n");
        printf("3. Recuo (Densidade Demográfica)\n");
        scanf("%d", &opcao1);

        printf("\n=== Escolha o SEGUNDO atributo para comparar ===\n");
         if (opcao1 == 1) {
          printf("2. Defesa (PIB per capita)\n");
          printf("3. Recuo (Densidade Demográfica)\n");
          } else if (opcao1 == 2) {
          printf("1. Ataque (População)\n");
          printf("3. Recuo (Densidade Demográfica)\n");
          } else {
          printf("1. Ataque (População)\n");
          printf("2. Defesa (PIB per capita)\n");
    }
    scanf("%d", &opcao2);

     // Pegar valores escolhidos
    float valor1_atributo1 = 0, valor1_atributo2 = 0, valor2_atributo1 = 0, valor2_atributo2 = 0;

    // Primeiro atributo
    switch (opcao1) {
        case 1: 
        valor1_atributo1 = populacao1;
        valor2_atributo1 = populacao2;
        break;
        case 2: 
        valor1_atributo1 = pib_per_capita1; 
        valor2_atributo1 = pib_per_capita2;
        break;
        case 3: 
        valor1_atributo1 = densidade_populacional1;
        valor2_atributo1 = densidade_populacional2;
        break;
    }

    // Segundo atributo
    switch (opcao2) {
        case 1: 
        valor1_atributo2 = populacao1; 
        valor2_atributo2 = populacao2;
        break;
        case 2: 
        valor1_atributo2 = pib_per_capita1; 
        valor2_atributo2 = pib_per_capita2;
        break;
        case 3: 
        valor1_atributo2 = densidade_populacional1; 
        valor2_atributo2 = densidade_populacional2; 
        break;
    }

    // Regras: densidade vence menor, os outros vence maior
    float pontos1 = 0, pontos2 = 0;

    pontos1 += (opcao1 == 3) ? (valor1_atributo1 < valor2_atributo1) : (valor1_atributo1 > valor2_atributo1);
    pontos2 += (opcao1 == 3) ? (valor2_atributo1 < valor1_atributo1) : (valor2_atributo1 > valor1_atributo1);

    pontos1 += (opcao2 == 3) ? (valor1_atributo2 < valor2_atributo2) : (valor1_atributo2 > valor2_atributo2);
    pontos2 += (opcao2 == 3) ? (valor2_atributo2 < valor1_atributo2) : (valor2_atributo2 > valor1_atributo2);

    // Soma final
    float soma1 = valor1_atributo1 + valor1_atributo2;
    float soma2 = valor2_atributo1 + valor2_atributo2;

    printf("\n=== RESULTADO ===\n");
    printf("%s -> %.2f + %.2f = %.2f\n", nome_cidade1, valor1_atributo1, valor1_atributo2, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", nome_cidade2, valor2_atributo1, valor2_atributo2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", nome_cidade1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", nome_cidade2);
    } else {
        printf("Empate!\n");
    }
       
         return 0;
    }
