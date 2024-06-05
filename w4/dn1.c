#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int* t1 = calloc(n, sizeof(int));
    int* t2 = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &t1[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &t2[i]);
    }

    int* pt1 = t1;
    int* pt2 = t2;

    int k = 0;

    while (pt1 < t1+n) {
        if (*pt1 != *pt2) { // se ne ujemata
            // printf("%d != %d\n", *pt1,*pt2);
            k++;
            pt2 = t1; // števec damo ponovno na začetek
            pt1 = t1 + k;
        }
        else { // na tem mestu sta enaki
            pt1++;
            pt2++;
        }
    }

    printf("%d", k);

    return 0;
}