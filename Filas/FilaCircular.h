#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


// Constantes
enum {
    FCTAMANHO = 5
};

// Variáveis
extern int fcFila[FCTAMANHO];
extern int fcInicio;
extern int fcFim;
extern bool fcVazia;


// Protótipos
bool fcEstaVazia();
bool fcEstaCheia();
bool fcAdicionar(int valor);
bool fcRetirar(int *valor);
bool fcContemSenha();
int gerarSenha();
#endif //FILACIRCULAR_H
