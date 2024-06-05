#include <stdio.h>
#include <stdlib.h>

int main() {

    int k;
    int n;
    scanf("%d %d", &n, &k);
    
    int* zaporedje = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &zaporedje[i]);
    }


    int* start = zaporedje;
    int* end = zaporedje + n -1;

    while (start < end) {
        if (*start + *end == k) {
            printf("%d + %d = %d\n", *start, *end, k);

            if (*(start +1) + *end == k) {
                start++;
                
            }
            else {
                end--;
            }

        }
        if (*start + *end < k) {
            printf("%d + %d < %d\n", *start, *end, k);
            start++;
        } 
        if (*start + *end > k) {
            printf("%d + %d > %d\n", *start, *end, k);
            end--;
        }
    }

    return 0;
}

// duplicates