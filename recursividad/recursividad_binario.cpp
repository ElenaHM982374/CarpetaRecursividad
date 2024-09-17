#include <stdio.h>

void decimalBinario(int n) {
    if (n == 0) {
        return;
    }
    decimalBinario(n /2); //
    printf ("%d", n % 2); 
}

int main(){
    int num = 0;

    printf("Numero a convertir:");
    scanf("%d", &num);

    printf("La representacion binaria de %d es: ",num);
    decimalBinario(num);
    printf("\n");

    return 0;
}
