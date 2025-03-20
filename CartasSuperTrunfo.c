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
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1[150];

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    
    // ENTRADA DE DADOS CARTA 1

     printf("Digite a letra do Estado (A-H): ");
    scanf("%s", Estado1); 
    getchar();

    printf("Digite o código da carta (ex. A01): ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", NomeDaCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &PontosTuristicos1[0]);

    // DECLARAÇÃO DAS VARIÁVEIS CARTA 2

    char Estado2[20];
    char Codigo2[6];
    char NomeDaCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2[150];

     // ENTRADA DE DADOS CARTA 2

     printf("Digite a letra do Estado (A-H): ");
    scanf("%s", Estado2); 

    printf("Digite o código da carta (ex. B02): ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", NomeDaCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (bilhões de reais): "); 
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &PontosTuristicos2[0]);


    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos turísticos: %d\n", PontosTuristicos1[0]);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos turísticos: %d\n", PontosTuristicos2[0]);

    
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
