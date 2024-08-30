#include <stdio.h>

int main() {

char nomeProduto[50];
int quantidade;
float precoUnitario;
float valorTotal;
float valorTotalDia = 0.0;
int continuar;

do {
    printf("Digite o nome do produto; ");
    scanf("%s", nomeProduto);

    printf("Digite a quantidade vendia: ");
    scanf("%d", &quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &precoUnitario);

    valorTotal = quantidade * precoUnitario;

    valorTotalDia = valorTotalDia + valorTotal;

    printf("Deseja registrar outra venda? 1-sim / 2-nao: \n");
    scanf("%d", &continuar);

} while (continuar == 1);
    printf("Valor total conquistado no dia: R$ %.2f\n", valorTotalDia);

    return 0;

}
