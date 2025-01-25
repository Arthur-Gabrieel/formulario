#include <stdio.h>
#include <string.h>

int main(){

printf("Desafio Super Trunfo - Países - Cadastro de Cartas - Novato\n");

//País
char pais[50] = "Brasil";

//Primeiro Estado 1 Variáveis
char  estado1[50];
float populacao1;                    // populacao1 = Quantidades de Pessoas que Moram na Cidade
double area1;                        // area1 = Tamanho da Aréa da Cidade
double pib1;                        // pib1 = Produto Interno Bruto
int npt1;                        //npt1 = Número e Pontos Turísticos


  
        printf("Primeiro Vamos Criar os Estados e ás Cidade\n");
         printf(" AVISO: USE SOMENTTE PONTOS (.), USE 'ENTER' DUAS VEZES APÓS DIGITAR Á PALAVRA PARA IR PARA PRÓXIMA PERGUNTA!!!\n");
        printf("--------%s--------\n",pais);        
        
                     //Perguntas 1
      
      //estado1
        printf("1-Qual é o Nome do Primeiro Estado: \n");
        fgets(estado1, sizeof(estado1), stdin);
        estado1[strcspn(estado1, "\n")] = 0;  // Remove a quebra de linha que o fgets() captura
        getchar();
               
    
    //populacao1
        printf("2-Qual é a População da Cidade: \n");
        scanf("%f", &populacao1);
        getchar();
    
    //area1
        printf("3-Qual é a Área dessa Cidade: \n");
        scanf("%lf", &area1);
        getchar();
        
        
        
    //pib1
        printf("4-Qual é o PIB desta Cidade:   (PIB SOMENTE DE 4 DIGITOS!!)\n");
        scanf("%lf", &pib1);
        getchar();
       
                
    //npt1
        printf("5-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt1);
        getchar(); // Limpa o buffer após a leitura de um número


//Primeiro Estado2  Variáveis
char  estado2[50];
float populacao2;                    // populacao2 = Quantidades de Pessoas que Moram na Cidade
double area2;                        // area2 = Tamanho da Aréa da Cidade
double pib2;                        // pib2 = Produto Interno Bruto
int npt2;                        //npt2 = Número e Pontos Turísticos

            //Perguntas 2
        
    //estado2
       printf("6-Qual é o Nome do Segundo Estado:\n");
       fgets(estado2, sizeof(estado2), stdin);
       estado2[strcspn(estado2, "\n")] = 0;
       getchar();
      
    
    //populacao2  
        printf("7-Qual é a População da Segunda Cidade:\n");
        scanf("%f", &populacao2);
        getchar();
               // Limpa o buffer após a leitura de um número
    
    //area2
        printf("8-Qual é a Área dessa Cidade: \n");
        scanf("%lf", &area2);
        getchar();
     
    
    //pib2
        printf("9-Qual é o PIB desta Cidade: (PIB SOMENTE DE 4 DIGITOS!!)(PIB SOMENTE DE 4 DIGITOS!!)\n");
        scanf("%lf", &pib2);
        getchar();
     
    
    //npt2   
        printf("10-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt2);
         getchar();
         //Primeiro Estado3  Variáveis
char  estado3[50];
float populacao3;                    // populacao3 = Quantidades de Pessoas que Moram na Cidade
double area3;                        // area3 = Tamanho da Aréa da Cidade
double pib3;                        // pib3 = Produto Interno Bruto
int npt3;                        //npt3 = Número e Pontos Turísticos

       
                //Perguntas 3

    //estado3
       printf("11-Qual é o Nome do Terceiro Estado:\n");
        fgets(estado3, sizeof(estado3), stdin);
        estado3[strcspn(estado3, "\n")] = 0;
        getchar();       // Lê o nome do primeiro estado ( com espaços )
     
     //populacao3
        printf("12-Qual é a População da Terceira Cidade: \n");
        scanf("%f", &populacao3);
        getchar();
    
     
     //area3
        printf("13-Qual é a Área dessa Cidade: \n");
        scanf("%lf", &area3);
        getchar();
    
    
    //pib3
        printf("14-Qual é o PIB desta Cidade:   (PIB SOMENTE DE 4 DIGITOS!!)\n");
        scanf("%lf", &pib3);
        getchar();

    //npt3
        printf("15-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt3);
        getchar(); 
          //Primeiro Estado4  Variáveis
char  estado4[50];
float populacao4;                    // populacao4 = Quantidades de Pessoas que Moram na Cidade
double area4;                        // area4 = Tamanho da Aréa da Cidade
double pib4;                        // pib4 = Produto Interno Bruto
int npt4;                        //npt4 = Número e Pontos Turísticos


                    //Perguntas 4
    
    //estado4
       printf("16-Qual é o Nome do Quarto Estado:\n");
       fgets(estado4, sizeof(estado4), stdin);
       estado4[strcspn(estado4, "\n")] = 0;

       getchar();
      //populaca4
        printf("17-Qual é a População da Quarta Cidade:\n");
        scanf("%f", &populacao4);
        getchar();
            
      //area4
        printf("18-Qual é a Área dessa Cidade:\n");
        scanf("%lf", &area4);
        getchar();
      

    //pib4
        printf("19-Qual é o PIB desta Cidade:   (PIB SOMENTE DE 4 DIGITOS!!)\n");
        scanf("%lf", &pib4);
        getchar();
       

      //npt4
        printf("20-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt4);
        getchar();

            printf("------------Resultados-----------\n");
        
        printf("1-Estado: %s\n 2-População: %f Milhões\n 3-Área: %f km²\n 4-PIB: R$ %lf\n 5-Pontos Turísticos: %d\n", estado1, populacao1, area1, pib1, npt1);

        printf("--------------------------\n");
        
        printf("6-Estado: %s\n 7-População: %f  Milhões\n 8-Área: %f km²v\n 9-PIB: R$ %lf\n 10-Pontos Turísticos: %d\n", estado2, populacao2, area2, pib2, npt2);
        
        printf("---------------------------\n");
       
        printf("11-Estado: %s\n 12-População: %f  Milhões\n 13-Área: %f km²\n 14-PIB: R$ %lf\n 15-Pontos Turísticos: %d\n", estado3, populacao3, area3, pib3, npt3);
        
        printf("---------------------------\n");
        
        printf("16-Estado: %s\n 17-População: %f  Milhões\n 18-Área: %f km²\n 19-PIB: R$ %lf\n 20-Pontos Turísticos: %d\n", estado4, populacao4, area4, pib4, npt4);



    return 0;

   


}

