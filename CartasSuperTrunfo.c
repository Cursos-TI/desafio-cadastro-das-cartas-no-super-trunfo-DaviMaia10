#include <stdio.h>

int main(){

float area;   //area da cidade em km²
float pib;    //PIB de cada cidade 
int pontos_turisticos; // Numero de pontos turisticos
char codigo[50];    //codigo da cidade . A01, A02, A03, A04...
int populacao;  // populacao da cidade
char pais[20];  //Nome do País
char opçao[30];
char nome[40];

//Informações sobre os Países 
printf("Serão 2 países e cada país tem 8 estados e 4 cidades;\n");
printf("O primeiro pais será o Brasil.");
printf("Digite SIM ou NAO se você entendeu.");
scanf("%s", &opçao);
printf("Sua opção: %s\n", opçao);


printf("País: Brasil\n");
scanf("%s", &nome);
printf("Nome do pais:1 %s\n", nome);

//Estado A
printf("Estado A: Ceará\n");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A01 
printf("Cidade A01: Juazeiro do norte");
printf("//Digite o codigo da Cidade. ex: A01, A02, A03, A04...\n");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%d", &populacao);
printf("Digite a área da Cidade:");
scanf("%f", &area);
printf("Digite quantos pontos turisticos a Cidade possui:");
scanf("%d", &pontos_turisticos);
printf("Digite o PIB da Cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A02
printf("Cidade A02: Crato");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A03
printf("Cidade A03: Barbalha");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A04
printf("Cidade A04: Sobral:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado B
printf("Estado B: São Paulo\n");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B01
printf("Cidade B01: Sorocaba");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B02
printf("Cidade B02: Santos");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B03
printf("Cidade B03: Guarulhos");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B04
printf("Cidade B04: Osasco");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado C
printf("Estado C: Rio de Janeiro");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C01
printf("Cidade C01: Maricá");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C02
printf("Cidade C02: Itaguaí");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C03
printf("Cidade C03: Duque de Caxias");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C04
printf("Cidade C04: Niterói");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado D
printf("Estado E: Minas Gerais");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade D01
printf("Cidade E01: Belo Horizonte");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade D02
printf("Cidade D02: Betim");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade D03
printf("Cidade D03: Uberlândia");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade D04
printf("Cidade D04: Santa Luzia");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado E
printf("Estado E: Paraíba");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//CIdade E01
printf("Cidade E01: Cuité");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade E02
printf("Cidade E02: João Pessoa");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade E03
printf("Cidade E03: Araruna");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade E04
printf("Cidade E04: Coxixola");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado F
printf("Estado F: Bahia");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade F01
printf("Cidade F01: Salvador");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade F02
printf("Cidade F02: Jequié");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade F03
printf("Cidade F03: Caetité");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade F04
printf("Cidade F04: Xique-Xique");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado G
printf("Estado G: Maranhão");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G01
printf("Cidade G01: Codó");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G02
printf("Cidade G02: São Luís");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G03
printf("Cidade G03: Brejo");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G04
printf("Cidade G04: Bacabal");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado H
printf("Estado H: Acre");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H01
printf("Cidade H01: Feijó");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H02
printf("CIdade H02: Bujari");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H03
printf("Cidade H03: Xapuri");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H04
printf("Cidade H04: Jordão");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//País 2: Estados Unidos
printf("País2: Estados Unidos\n");
scanf("%s", &nome);
printf("Nome do País:2 %s\n", nome);

//Estado I
printf("Estado A: Florída");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A01 
printf("Cidade A01: Miami");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A02
printf("Cidade A02: Orlando");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A03
printf("Cidade A03: Tampa");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade A04
printf("Cidade A04: São petersburgo");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado B
printf("Estado B: Texas");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B01
printf("Cidade B01: Houston");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B02
printf("Cidade B02: Dallas");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B03
printf("Cidade B03: Austin");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade B04
printf("Cidade B04: Texas City");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado C
printf("Estado C01: Califórnia:");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C01
printf("Cidade C01: Los Angeles");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C02
printf("Cidade C02: San Francisco:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C03
printf("Cidade C03: San Diego:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade C04
printf("Cidade C04: Sacramento:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado D
printf("Estado D: Utah");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade D01
printf("Cidade D01: Salt lake City:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade D02
printf("Cidade D02: Park city:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade D03
printf("Cidade D03: Cedar City:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);


//Cidade D04
printf("Cidade D04: Ogden:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado E
printf("Estado E: Virginia");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade E01
printf("Cidade E01: Virginia Beach:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade E02
printf("Cidade E02: Richmond:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade E03
printf("Cidade E03: Norfolk:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade E04
printf("Cidade E04: Alexandria:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado F
printf("Estado F: Ohio:");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade F01
printf("Cidade F01: Columbus:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade F02
printf("Cidade F02: Cleveland:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade F03
printf("Cidade F03: Akron");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado F04 
printf("Cidade F04: Dayton:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado G
printf("Estado G: Massachusets:");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G01
printf("Cidade G01: Boston:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G02
printf("Cidade G02: Springfield:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G03
printf("Cidade G03: Salem:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade G04
printf("Cidade G04: Plymonth:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Estado H
printf("Estado H: Nebraska:");
printf("//digite o codigo do estado. ex:A ou B\n");
printf("digite o codigo do estado:\n");
scanf("%s", &codigo);
printf("digite a população do estado:");
scanf("%d", &populacao);
printf("digite a área do estado:");
scanf("%f", &area);
printf("digite quantos pontos turisticos o estado possui:");
scanf("%d", &pontos_turisticos);
printf("digite o PIB do estado: ");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pontos turisticos %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H01
printf("Cidade H01: Omaha:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H02
printf("Cidade H02: Lincoln:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H03
printf("Cidade H03: Nebraska City:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

//Cidade H04
printf("Cidade H04: Grand Island:");
printf("Digite o codigo da Cidade:");
scanf("%s", &codigo);
printf("Digite a população da Cidade:");
scanf("%f", &populacao);
printf("Digite a população da cidade:");
scanf("%d", &populacao);
printf("Digite a área da cidade:");
scanf("%f", &area);
printf("Quantos pontos turisticos a cidade possui?");
scanf("%d",&pontos_turisticos);
printf("Digite o PIB da cidade");
scanf("%f", &pib);
printf("codigo: %s\n", codigo);
printf("população: %d\n", populacao);
printf("Área: %f\n", area);
printf("Pontos Turisticos: %d\n", pontos_turisticos);
printf("PIB %f\n", pib);

return 0;







































































































































































































































































































































































































































































































































































































































































































}














































































































































