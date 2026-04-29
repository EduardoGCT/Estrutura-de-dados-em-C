#include <stdio.h>

//esta função recebe uma cópia do valor
void dobrar(int x){
    x = x * 2;
    printf("Dentro da função, o valor da copia e: %d\n", x);
}

int main (){
    int numero = 5;
    printf("Antes de chamar a função, o valor original é: %d\n", numero);

    //passando numero por valor
    dobrar(numero);

    printf("Depois de chamar a função, o valor original é: %d\n", numero);

    return 0;
}