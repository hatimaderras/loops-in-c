#include <stdio.h>

int main() {
    int num, somme = 0, max = 0;

    printf("Entrez des entiers positifs inferieurs a 100 (termine par 0): ");

    do {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 100) {
            printf("Entier superieur a 100 ignore.\n");
            continue;
        }

        somme += num;
        if (num > max) {
            max = num;
        }

        printf("Somme des entiers: %d\n", somme);
        printf("Max des entiers: %d\n", max);

    } while (num != 0);

    printf("Saisie terminee.\n");
    return 0;
}
