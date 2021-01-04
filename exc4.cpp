#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int n, soma = 0;

    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &n);

        if (n != 0) {
            if (n<0) {
                soma += n;
            }
        }

    } while (n != 0);

    printf("\nSoma dos numeros negativos = %.2lf\n", (double) soma);
}

