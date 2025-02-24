#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Estrutura para armazenar os atributos da carta
    typedef struct {
        char codigo[4];
        unsigned long int populacao;
        float area;
        float pib;
        int pontos_turisticos;
        float densidade_populacional;
        float pib_per_capita;
        float super_poder;
    } Carta;
    
    int main() {
        Carta carta1, carta2;
    
        // Cadastro da primeira carta
        printf("===== Cadastro da Primeira Carta =====\n");
        printf("Digite o código da cidade (ex: A01): ");
        scanf("%s", carta1.codigo);
        printf("Digite a população: ");
        scanf("%lu", &carta1.populacao);
        printf("Digite a área (em km²): ");
        scanf("%f", &carta1.area);
        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &carta1.pib);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &carta1.pontos_turisticos);
    
        // Cálculo dos atributos da primeira carta
        carta1.densidade_populacional = carta1.populacao / carta1.area;
        carta1.pib_per_capita = carta1.pib / carta1.populacao;
        carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + (1 / carta1.densidade_populacional) + carta1.pib_per_capita;
    
        printf("\n");
    
        // Cadastro da segunda carta
        printf("===== Cadastro da Segunda Carta =====\n");
        printf("Digite o código da cidade (ex: B02): ");
        scanf("%s", carta2.codigo);
        printf("Digite a população: ");
        scanf("%lu", &carta2.populacao);
        printf("Digite a área (em km²): ");
        scanf("%f", &carta2.area);
        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &carta2.pib);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &carta2.pontos_turisticos);
    
        // Cálculo dos atributos da segunda carta
        carta2.densidade_populacional = carta2.populacao / carta2.area;
        carta2.pib_per_capita = carta2.pib / carta2.populacao;
        carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + (1 / carta2.densidade_populacional) + carta2.pib_per_capita;
    
        printf("\n===== CARTAS CADASTRADAS =====\n");
    
        // Exibição organizada da primeira carta
        printf("\n--------------------------------\n");
        printf("| Carta 1 - Código: %-10s |\n", carta1.codigo);
        printf("| População: %-12lu      |\n", carta1.populacao);
        printf("| Área: %-15.2f km²    |\n", carta1.area);
        printf("| PIB: %-16.2f bilhões|\n", carta1.pib);
        printf("| Pontos Turísticos: %-5d     |\n", carta1.pontos_turisticos);
        printf("| Densidade Pop.: %-8.2f      |\n", carta1.densidade_populacional);
        printf("| PIB per Capita: %-8.2f      |\n", carta1.pib_per_capita);
        printf("| Super Poder: %-10.2f      |\n", carta1.super_poder);
        printf("--------------------------------\n");
    
        // Exibição organizada da segunda carta
        printf("\n--------------------------------\n");
        printf("| Carta 2 - Código: %-10s |\n", carta2.codigo);
        printf("| População: %-12lu      |\n", carta2.populacao);
        printf("| Área: %-15.2f km²    |\n", carta2.area);
        printf("| PIB: %-16.2f bilhões|\n", carta2.pib);
        printf("| Pontos Turísticos: %-5d     |\n", carta2.pontos_turisticos);
        printf("| Densidade Pop.: %-8.2f      |\n", carta2.densidade_populacional);
        printf("| PIB per Capita: %-8.2f      |\n", carta2.pib_per_capita);
        printf("| Super Poder: %-10.2f      |\n", carta2.super_poder);
        printf("--------------------------------\n");
    
        // Comparação das cartas
        printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    
        printf("\n-----------------------------------------\n");
        printf("|População: %d                           |\n", carta1.populacao > carta2.populacao);
        printf("|Área: %d                                |\n", carta1.area > carta2.area);
        printf("|PIB: %d                                 |\n", carta1.pib > carta2.pib);
        printf("|Pontos Turísticos: %d                   |\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
        printf("|Densidade Populacional (menor vence): %d|\n", carta1.densidade_populacional < carta2.densidade_populacional);
        printf("|PIB per Capita: %d                      |\n", carta1.pib_per_capita > carta2.pib_per_capita);
        printf("|Super Poder: %d                         |\n", carta1.super_poder > carta2.super_poder);
        printf("\n-----------------------------------------\n");
    
        return 0;
    }