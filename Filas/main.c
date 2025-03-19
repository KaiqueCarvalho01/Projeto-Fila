#include <stdio.h>
#include "FilaCircular.h"

//Kaique Santos de Carvalho
//Rogerio de Lima Rodrigues

// Constantes
enum {
    OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_RETIRAR,
    OP_SAIR
};

// Protótipos
int menu();
void fcImprimir();

int main() {
    int opcao = 0;
    int numero = 0;

    // Inicializando a semente do gerador de números aleatórios para que não seja gerado os mesmo números a cada inicializacao
    srand(time(NULL));

    while (opcao != 3) {
        opcao = menu();
        switch (opcao) {
            case 1: // Retirar senha
                numero = gerarSenha();
                if (!fcEstaCheia()) {;
                    printf("Sua senha e: %d\n", numero);
                }

            if (!fcAdicionar(numero)) {
                printf("Fila cheia!\n");
            }
            break;

            case 2: // Atender fila
                if (fcRetirar(&numero)) {
                    printf("Atendendo a senha: %d\n", numero);
                } else {
                    printf("Fila vazia!\n");
                }
            break;

            case 3: // Sair
                printf("Saindo...\n");
            break;

            default:
                printf("Opção Invalida \n");
        }

        fcImprimir();
    }

    return 0;
}

int menu() {
    int op = 0;
    printf("\nMenu\n");
    printf("1 - Retirar senha\n");
    printf("2 - Atender fila\n");
    printf("3 - Sair\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &op);
    return op;
}

void fcImprimir() {
    if (fcEstaVazia()) {
        printf("Fila vazia!\n");
    } else {
        int i = fcInicio;
        printf("+---+-----+\n");
        do {
            printf("| %1d | %3d |\n", i, fcFila[i]);
            printf("+---+-----+\n");
            i++;
            if (i == FCTAMANHO) {
                i = 0;
            }
        } while (i != fcFim);
    }
}