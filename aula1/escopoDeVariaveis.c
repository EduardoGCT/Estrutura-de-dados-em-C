#include <stdio.h>

int global = 10;

void mostrarGlobal(){
    printf("Na função mostrarGlobal: %d\n", global);
}

int main (){
    //Variável com escopo Local
    int local = 5;

    printf("Na função main(local): %d\n", local);
    printf("Na função main (global): %d\n", global);

    mostrarGlobal();

    return 0;
}