#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    // DECLARAÇÃO DAS VARIÁVEIS CARTA 1

    char Estado1[20];
    char Codigo1[6];
    char NomeDaCidade1[50];
    unsigned long int Populacao1;
    float Area1, PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1, PIBperCapita1, SuperPoder1;
    float inversoDensidade1 = 0;  
    
    // Inicializa com 0 para evitar divisão por zero

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    
    // ENTRADA DE DADOS CARTA 1
    printf("--- Cadastro da Carta 1 ---\n");

     printf("Digite a letra do Estado (A-H): \n");
    scanf("%s", Estado1); 
    getchar();

    printf("Digite o código da carta (ex. A01): \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", NomeDaCidade1);


    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (bilhões de reais): \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTuristicos1);


     // Cálculos
     DensidadePopulacional1 = Populacao1 / (Area1 + (Area1 == 0)); 
     PIBperCapita1 = (PIB1 * 1000000000) / (Populacao1 + (Populacao1 == 0)); 
     inversoDensidade1 = (DensidadePopulacional1 > 0) * (1 / DensidadePopulacional1);
     SuperPoder1 = Populacao1 + Area1 + (PIB1 * 1000000000) + PontosTuristicos1 + PIBperCapita1 + inversoDensidade1;
    
     
    // DECLARAÇÃO DAS VARIÁVEIS CARTA 2

    char Estado2[20];
    char Codigo2[6];
    char NomeDaCidade2[50];
    unsigned long int Populacao2;
    float Area2, PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2, PIBperCapita2, SuperPoder2;
    float inversoDensidade2 = 0;
    
     // ENTRADA DE DADOS CARTA 2

    printf("\n--- Cadastro da Carta 2 ---\n");
    
     printf("Digite a letra do Estado (A-H): \n");
    scanf("%s", Estado2); 
    getchar();
    
    printf("Digite o código da carta (ex. B02): \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", NomeDaCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (bilhões de reais): \n"); 
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTuristicos2);

     // Cálculos
     DensidadePopulacional2 = Populacao2 / (Area2 + (Area2 == 0)); 
     PIBperCapita2 = (PIB2 * 1000000000) / (Populacao2 + (Populacao2 == 0)); 
     inversoDensidade2 = (DensidadePopulacional2 > 0) * (1 / DensidadePopulacional2);
     SuperPoder2 = Populacao2 + Area2 + (PIB2 * 1000000000) + PontosTuristicos2 + PIBperCapita2 + inversoDensidade2;
     

    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", NomeDaCidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    printf("-------------------------------------------------\n");
    
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", NomeDaCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    
    // Comparação entre as cartas:

    printf("\n--- Comparação entre as Cartas ---\n");

    printf("População: Carta %d venceu\n", 1 + (Populacao2 > Populacao1));
    printf("Area: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1:2, (Area1 > Area2));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1:2, (PIB1 > PIB2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2) ? 1:2, (PontosTuristicos1 > PontosTuristicos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (DensidadePopulacional1 < DensidadePopulacional2) ? 1:2, (DensidadePopulacional1 < DensidadePopulacional2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBperCapita1 > PIBperCapita2) ? 1:2, (PIBperCapita1 > PIBperCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1:2, (SuperPoder1 > SuperPoder2));


    return 0;
}