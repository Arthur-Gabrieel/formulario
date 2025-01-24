#include <stdio.h>

int main(){

printf("Desafio Super Trunfo - Países - Cadastro de Cartas - Novato\n");

//País
char pais[50] = "Brasil";

//Primeiro Estado 1 Variáveis
char  estado1[50];
float populacao1;                    // populacao1 = Quantidades de Pessoas que Moram na Cidade
double area1;                        // area1 = Tamanho da Aréa da Cidade
int pib1;                        // pib1 = Produto Interno Bruto
int npt1;                        //npt1 = Número e Pontos Turísticos


            //Estado1
        printf("Primeiro Vamos Criar os Estados e ás Cidades\n");
        printf("%s\n",pais);        
        printf("1-Qual é o Nome do Primeiro Estado: \n");
        scanf("%s", estado1);

        //populacao1
        printf("2-Qual é a População da Cidade:\n");
        scanf("%f", &populacao1);

        //area1
        printf("3-Qual é a Área dessa Cidade:\n");
        scanf("%f", &area1);

        //pib1

        printf("4-Qual é o PIB desta Cidade:\n");
        scanf("%d", &pib1);

        //npt1

        printf("5-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt1);


//Primeiro Estado2  Variáveis
char  estado2[50];
float populacao2;                    // populacao2 = Quantidades de Pessoas que Moram na Cidade
double area2;                        // area2 = Tamanho da Aréa da Cidade
int pib2;                        // pib2 = Produto Interno Bruto
int npt2;                        //npt2 = Número e Pontos Turísticos


       printf("6-Qual é o Nome do Segundo Estado:\n");
       scanf("%s", &estado2);

        printf("7-Qual é a População da Segunda Cidade:\n");
        scanf("%f", &populacao2);
        
        printf("8-Qual é a Área dessa Cidade:\n");
        scanf("%f", &area2);
        
        printf("9-Qual é o PIB desta Cidade:\n");
        scanf("%d", &pib2);

        printf("10-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt2);



         //Primeiro Estado3  Variáveis
char  estado3[50];
float populacao3;                    // populacao3 = Quantidades de Pessoas que Moram na Cidade
double area3;                        // area3 = Tamanho da Aréa da Cidade
int pib3;                        // pib3 = Produto Interno Bruto
int npt3;                        //npt3 = Número e Pontos Turísticos


       printf("11-Qual é o Nome do Terceiro Estado:\n");
       scanf("%s", &estado3);

        printf("12-Qual é a População da Terceira Cidade:\n");
        scanf("%f", &populacao3);
        
        printf("13-Qual é a Área dessa Cidade:\n");
        scanf("%f", &area3);
        
        printf("14-Qual é o PIB desta Cidade:\n");
        scanf("%d", &pib3);

        printf("15-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt3);


        printf("1-Estado: %s\n População: %f\n Área: %f\n PIB: %d\n Pontos Turísticos: %d", estado1, populacao1, area1, pib1, npt1);
        printf("1-Estado: %s\n População: %f\n Área: %f\n PIB: %d\n Pontos Turísticos: %d", estado2, populacao2, area2, pib2, npt2);
        printf("1-Estado: %s\n População: %f\n Área: %f\n PIB: %d\n Pontos Turísticos: %d", estado3, populacao3, area3, pib3, npt3);


    return 0;

   


}

