#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int* tabela = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &tabela[i]);
    }

    int* start = tabela;
    int* end = tabela;
    int sum = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        sum += tabela[i];
        if (sum > max) {
            max = sum;
            end = tabela + i;
        }
        if (sum < 0) {
            sum = 0;
            start = tabela + i + 1;
        }
    }

    for (int* i = start; i <= end; i++) {
        printf("%d ", *i);
    }

    printf("\nsum: %d\n", max);




    return 0;
}