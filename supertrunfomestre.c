#include <stdio.h>
#include <stdlib.h>

        // Desafio: Super Trunfo De Paises Versão 1.3;
        // Dividir Para Conquistar!

        int main() {

        // Declarando as Variaveis!

          char Estado1[50], Estado2[50];
          char Codigo1[50], Codigo2[50];
          char NomedaCidade1[50], NomedaCidade2[50];

          unsigned int Populacao1, Populacao2;
          float Area1, Area2;
          float PIB1, PIB2;
          unsigned int NumerodePontosTuristicos1, NumerodePontosTuristicos2;

          float DensidadePopulacional1, DensidadePopulacional2;
          float PIBperCapita1, PIBperCapita2;

          float SuperPoder1, SuperPoder2;
          unsigned int ResultadoCarta1, ResultadoCarta2;

  //Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.

  // Exibir As Perguntas da Carta 1

    printf("\033[1;34m Desafio Super Trunfo! \033[0m \n ");
      printf("    (Carta 1)\n\n");

    printf("Digite o Estado: ");
    scanf("%s", Estado1);

    printf("Digite o Código: ");
    scanf("%s", Codigo1);
   
    printf("Digite o Nome_Da_Cidade: ");
    scanf("%s", NomedaCidade1);

    printf("Didite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%u", &NumerodePontosTuristicos1);

  // Limpar Informações da Carta 1 da Tela!

    system("clear");

  // Exibir As Perguntas Da Carta 2

    printf("\033[1;31m Desafio Super Trunfo!\033[0m \n ");
      printf("    (Carta 2)\n\n");

    printf("Digite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite o Código: ");
    scanf("%s", Codigo2);

    printf("Digite o Nome_Da_Cidade: ");
    scanf("%s", NomedaCidade2);

    printf("Didite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%u", &NumerodePontosTuristicos2); 

  // Limpar Informações da Carta 2 da Tela!

    system("clear");

  // Conversão dos Resultados Digitados:
  // Calculando a Densidade Populacional e PIBperCapita.

    DensidadePopulacional1 = Populacao1 / Area1;
    DensidadePopulacional2 = Populacao2 / Area2;

    PIBperCapita1 = PIB1 / Populacao1;
    PIBperCapita2 = PIB2 / Populacao2;

  /*Calcular o Super Poder:Para cada carta, calcule o "Super Poder"
  somando todos os atributos numéricos população, área, PIB, 
  número de pontos turísticos, PIB per capita e o inverso da densidade 
  populacional – quanto menor a densidade, maior o poder:*/

    SuperPoder1 = Populacao1 + Area1 + PIB1 + NumerodePontosTuristicos1 + 
    PIBperCapita1 + (DensidadePopulacional1 / 1);
   
    SuperPoder2 = Populacao2 + Area2 + PIB2 + NumerodePontosTuristicos2 + 
    PIBperCapita2 + (DensidadePopulacional2 / 1);

  // Comparar as Cartas 1 e 2:

    ResultadoCarta1 = Populacao1 > Populacao2;
    ResultadoCarta1 = Area1 > Area2;
    ResultadoCarta1 = PIB1 > PIB2;
    ResultadoCarta1 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2;
    ResultadoCarta1 = DensidadePopulacional1 > DensidadePopulacional2;
    ResultadoCarta1 = PIBperCapita1 > PIBperCapita2;
    ResultadoCarta1 = SuperPoder1 > SuperPoder2;

    ResultadoCarta2 = Populacao2 > Populacao1;
    ResultadoCarta2 = Area2 > Area1;
    ResultadoCarta2 = PIB2 > PIB1;
    ResultadoCarta2 = NumerodePontosTuristicos2 > NumerodePontosTuristicos1;
    ResultadoCarta2 = DensidadePopulacional2 > DensidadePopulacional1;
    ResultadoCarta2 = PIBperCapita2 > PIBperCapita1;
    ResultadoCarta2 = SuperPoder2 > SuperPoder1;

   /** Exibir as Informações da Carta 1 */
  // Exibir os Resultados das Comparações!
  // Adicionei Cor para Diferenciar as Cartas e os Valores!
    
    printf("\n\n \033[1;34m Informações_Da_Carta 1: \033[0m \n\n");

    printf("Estado: \033[1;34m%s\033[0m(%u)\n", Estado1, ResultadoCarta1);
    printf("Código: \033[1;34m%s\033[0m(%u)\n", Codigo1, ResultadoCarta1);
    printf("Cidade: \033[1;34m%s\033[0m(%u)\n", NomedaCidade1, ResultadoCarta1);
    printf("População: \033[1;34m%'.3d Mi\033[0m(%u)\n", Populacao1, ResultadoCarta1);
    printf("Área: \033[1;34m%'.2fkm²\033[0m(%u)\n", Area1, ResultadoCarta1);
    printf("PIB: \033[1;34m%'.2f Bi\033[0m (%u)\n", PIB1, ResultadoCarta1);
    printf("Pontos Turísticos: \033[1;34m%u Lugares\033[0m(%u)\n", NumerodePontosTuristicos1, ResultadoCarta1);

  // exibir a Densidade Populacional e PIB Capita da Carta 1:

    printf("Densidade Populacional: \033[1;34m%'.2f Hab/km²\033[0m(%u)\n", DensidadePopulacional1, ResultadoCarta1);
    printf("PIB per Capita: \033[1;34m%'.2f R$\033[0m(%u)\n", PIBperCapita1, ResultadoCarta1);

  // Exibir o Super_Poder:

    printf("Super Poder: \033[1;33m%'.2f\033[0m(%u)\n\n", SuperPoder1, ResultadoCarta1);


   /** Exibir as Informações da Carta 2 */
  // Exibir os Resultados das Comparações:

    printf("\n\n \033[1;31m Informações_Da_Carta 2: \033[0m \n\n");

    printf("Estado: \033[1;31m%s\033[0m(%u)\n", Estado2, ResultadoCarta2);
    printf("Código: \033[1;31m%s\033[0m(%u)\n", Codigo2, ResultadoCarta2);
    printf("Cidade: \033[1;31m%s\033[0m(%u)\n", NomedaCidade2, ResultadoCarta2);
    printf("População: \033[1;31m%'.3d Mi\033[0m(%u)\n", Populacao2, ResultadoCarta2);
    printf("Área: \033[1;31m%'.2fkm²\033[0m(%u)\n", Area2, ResultadoCarta2);
    printf("PIB: \033[1;31m%'.2f Bi\033[0m(%u)\n", PIB2, ResultadoCarta2);
    printf("Pontos Turísticos: \033[1;31m%u Lugares\033[0m(%u)\n", NumerodePontosTuristicos2, ResultadoCarta2);

  // exibir a Densidade Populacional e PIB Capita da Carta 2:

    printf("Densidade Populacional: \033[1;31m%'.2f Hab/\033[0m(%u)\n", DensidadePopulacional2, ResultadoCarta2);
    printf("PIB per Capita: \033[1;31m%'.2f R$\033[0m(%u)\n", PIBperCapita2, ResultadoCarta2);

  // Exibir o Super Poder Destacado!

    printf("Super Poder: \033[1;33m%'.2f\033[0m(%u)\n\n", SuperPoder2, ResultadoCarta2);




    
   return 0;
 }