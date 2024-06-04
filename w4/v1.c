#include <stdio.h>
#include <stdlib.h>

int main() {

    // Permutacija
    int n;
    scanf("%d", &n);
    int* tabela = calloc(n, sizeof(int));

    int k;
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        tabela[k] = 1;
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (tabela[i] != 1) {
            printf("NE");
            c = 1;
            break;
        }
    }
    if (c == 0) printf("DA");

    return 0;
}