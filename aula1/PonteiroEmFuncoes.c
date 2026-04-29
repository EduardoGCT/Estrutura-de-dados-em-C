#include <stdio.h>
#include <stdlib.h>

void saudacao(){
    printf("Olá, mundo!\n");
}

int main(){
    //Declarando um ponteiro 'ptr' para uma função
    //que não retorna nada (void) e não tem parâmetros ().
    void (*prt)() = saudacao;

    //chamando a função através do ponteiro
    prt();

    return 0;
}