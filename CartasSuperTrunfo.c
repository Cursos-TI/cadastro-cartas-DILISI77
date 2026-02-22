#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    char Código;
    char Estado;
    char Cidade;
    float População;
    int Número;
    float Área;
    float Pib;
    float Densidade;
    float pibpercapita;

printf("Projeto do jogo Super Trunfo \n");

printf("\n");

printf("!Carta numero 01!\n");

printf("\n"); 

printf("Digite o código da carta: \n");
scanf("%s",&Código);

printf("Digite o Estado: \n");
scanf("%s", &Estado);

printf("Digite o nome da cidade:\n");
scanf("%s", &Cidade);

printf("Digite o numero de habitantes da cidade:\n");
scanf("%f", &População);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &Número);

printf("Digite o tamanho da área por Quilometros:\n");
scanf("%f", &Área);

printf("Digite o Pib da cidade:\n");
scanf("%f", &Pib); 

Densidade =(float) População / Área;

pibpercapita =(double) Pib / População;

printf("\n");

printf("! SUPER TRUNFO !\n");

printf("\n");
printf("Carta numero 01\n");
printf("O Estado: %s\n",Estado);
printf("Codigo da carta: %s\n",Código);
printf("Nome da Cidade: %s\n",Cidade );
printf("População: %.3f\n",População);
printf("Área por km²: %.2f\n",Área);
printf("Pib: %.2f\n",Pib);
printf("Número de pontos turisticos: %d\n",Número);
printf("A densidade populacional é: %.2f\n:",Densidade);
printf("Pib per capita é: %f\n", pibpercapita);

printf("\n");


printf("!Carta numero 02!\n");
printf("\n"); 

printf("Projeto do jogo Super Trunfo \n");

printf("\n");

printf("!Carta numero 01!\n");

printf("\n"); 

printf("Digite o código da carta: \n");
scanf("%s",&Código);

printf("Digite o Estado: \n");
scanf("%s", &Estado);

printf("Digite o nome da cidade:\n");
scanf("%s", &Cidade);

printf("Digite o numero de habitantes da cidade:\n");
scanf("%f", &População);

printf("Digite o numero de pontos turisticos:\n");
scanf("%d", &Número);

printf("Digite o tamanho da área por Quilometros:\n");
scanf("%f", &Área);

printf("Digite o Pib da cidade:\n");
scanf("%f", &Pib); 

Densidade =(float) População / Área;

pibpercapita =(double) Pib / População;

printf("\n");

printf("! SUPER TRUNFO !\n");

printf("\n");
printf("Carta numero 01\n");
printf("Estado: %s\n",Estado);
printf("Codigo da carta: %s\n",Código);
printf("Nome da Cidade: %s\n",Cidade );
printf("População: %.3f\n",População);
printf("Área por km²: %.2f\n",Área);
printf("Pib: %.2f\n",Pib);
printf("Número de pontos turisticos: %d\n",Número);
printf("A densidade populacional é: %.2f\n:",Densidade);
printf("Pib per capita é: %f\n", pibpercapita);

printf("\n");



return 0;
} 
