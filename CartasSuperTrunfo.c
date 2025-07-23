#include <stdio.h>

int main() {

    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int ptr; /*pontos turisticos*/
    
    printf("Bem Vindo ao Super Trunfo - Card City\n Insira as informações solicitadas.\n\n");

    printf("Digite a Letra do Estado, de ( A a H ). Ex: D: ");
    scanf("%s", &estado);

    printf("Digite o codigo da Cidade. Ex: D001: ");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade. Ex: Brasilia: ");
    scanf("%s", &cidade);

    printf("Digite o total de moradores na cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área (tamanho) da cidade. Ex: 10000 (km²): ");
    scanf("%f", &area);

    printf("Digite digite qual o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Quantos pontos turísticos a cidade possui?: ");
    scanf("%d", &ptr);

    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.0f km² \n", area);
    printf("PIB: %.0f \n", pib);
    printf("Total pontos turísticos: %d \n", ptr);

    printf("Carta Cadastrada com Sucesso\n");


    return 0;
}
