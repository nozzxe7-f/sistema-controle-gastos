#include <stdio.h>

int main() {
    float orcamento, despesa, totalGasto = 0, saldo, porcentagem;
    int opcao = -1;

    printf("=== SISTEMA DE CONTROLE DE GASTOS ===\n");
    printf("Informe seu orcamento inicial: R$ ");
    scanf("%f", &orcamento);

    while (orcamento <= 0) {
        printf("O orcamento deve ser maior que zero. Digite novamente: R$ ");
        scanf("%f", &orcamento);
    }

    while (opcao != 0) {
        printf("\n========== MENU ==========\n");
        printf("1 - Registrar despesa\n");
        printf("2 - Consultar resumo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Informe o valor da despesa: R$ ");
            scanf("%f", &despesa);

            if (despesa > 0) {
                totalGasto = totalGasto + despesa;
                printf("Despesa registrada!\n");
            } else {
                printf("Digite um valor maior que zero.\n");
            }
        } else if (opcao == 2) {
            saldo = orcamento - totalGasto;
            porcentagem = (totalGasto / orcamento) * 100;

            printf("\n====== RESUMO ======\n");
            printf("Orcamento: R$ %.2f\n", orcamento);
            printf("Total gasto: R$ %.2f\n", totalGasto);
            printf("Saldo restante: R$ %.2f\n", saldo);
            printf("Orcamento utilizado: %.2f%%\n", porcentagem);
        } else if (opcao == 0) {
            printf("Programa encerrado.\n");
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
