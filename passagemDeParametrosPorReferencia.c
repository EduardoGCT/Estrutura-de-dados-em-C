#include <stdio.h>

void dobrar(int* x){
    //acessamos o valor no endereço e o modificamos
    *x = (*x) * 2;
}

int main(){
    int numero = 5;
    printf("Antes da função, o valor é: %d\n", numero);

    //passamos o endereço de 'numero' com o operador &
    dobrar(&numero);

    printf("Depois da função, o valor é: %d\n", numero);

    return 0;
}