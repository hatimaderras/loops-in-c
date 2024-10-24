#include <stdio.h>

int main() {
    int n, i, prem;


    printf("Entrez un nombre :\n");
    scanf("%d", &n);


    prem = 1;


    for(i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            prem = 0;
            break;
        }
    }


    if (prem == 1 && n > 1) {
        printf("%d est un nombre premier\n", n);
    } else {
        printf("%d n'est pas un nombre premier\n", n);
    }

    return 0;
}

