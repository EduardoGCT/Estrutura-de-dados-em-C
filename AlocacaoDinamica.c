#include <stdio.h>
#include <stdlib.h>

int main(){

    int *a, b;

    b = 10;
    a = (int*)malloc(sizeof(int)); //pedind um espaço
    *a = 20;
    free(a);
    a = &b;
    
    //a = &b; //Erro! Perdemos a fererência do espaço alocado
    //free(a); //Erro! Tentando liberar a memória estática
}