// Exibição dos resultados
printf("\n--- Comparação de Cartas ---\n");
printf("População: Carta %d venceu (%d)\n", (Populacao1 > Populacao2) ? 1 : 2, (Populacao1 > Populacao2));
printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, (Area1 > Area2));
printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
printf("Pontos Turísticos: Carta %d venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2) ? 1 : 2, (PontosTuristicos1 > PontosTuristicos2));
printf("Densidade Populacional: Carta %d venceu (%d)\n", (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 2, (DensidadePopulacional1 < DensidadePopulacional2));
printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBperCapita1 > PIBperCapita2) ? 1 : 2, (PIBperCapita1 > PIBperCapita2));
printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, (SuperPoder1 > SuperPoder2));

return 0;