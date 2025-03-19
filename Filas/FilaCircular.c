#include "FilaCircular.h"

// Variáveis
int fcFila[FCTAMANHO];
int fcInicio = 0;
int fcFim = 0;
bool fcVazia = true;

bool fcContemSenha(int valor) {
    int i = fcInicio;
    while (i != fcFim) {
        if (fcFila[i] == valor) {
            return true;
        }
        i++;
        if (i == FCTAMANHO) { // Se o índice atingir o tamanho da fila
            i = 0; // Reseta para 0
        }
    }
    return false;
}

int gerarSenha() {
    int senha;
    do {
        senha = rand() % 5000 + 1; //Gerando números entre 1 a 5 mil
    } while (fcContemSenha(senha));
    return senha;
}
// Funções
bool fcEstaVazia() {
    return fcVazia;
}

bool fcEstaCheia() {
    return fcFim == fcInicio;
}

bool fcAdicionar(int valor) {
    if (fcEstaVazia()) {
        fcFila[fcFim] = valor;
        fcVazia = false;
        fcFim++;
        if (fcFim == FCTAMANHO) {
            fcFim = 0;
        }
    } else {
        if (fcEstaCheia()) {
            return false;
        }
        fcFila[fcFim] = valor;
        fcFim++;
        if (fcFim == FCTAMANHO) {
            fcFim = 0;
        }
    }
    return true;
}

bool fcRetirar(int *valor) {
    if (fcEstaVazia()) {
        return false;
    }
    *valor = fcFila[fcInicio];
    fcInicio++;
    if (fcInicio == FCTAMANHO) {
        fcInicio = 0;
    }
    if (fcInicio == fcFim) {
        fcVazia = true;
    }
    return true;
}