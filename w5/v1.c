
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "v1.h"

int vsota(int* zac, int* kon) {
    
    int sum = 0;
    while (zac > kon) {
        sum += *zac;
        zac++;
    }

    return sum;
}

void indeksInKazalec(int* t, int* indeks, int** kazalec) {
    if (*indeks == -1) {
        *indeks = *kazalec - t;
    }
    else {
        *kazalec = *indeks + t;
    }
}

void frekvenceCrk(char* niz, int** frekvence) {
    
   int* freq = calloc(26, sizeof(int));

   for (int i = 0; niz[i] != '\0'; i++) {
    char c = tolower(niz[i]);
    printf("%c.", c);
    freq[c - 'a']++;
   }

   *frekvence = freq;

}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)
    char niz[] = "HelLo, World!";
    int* frekvence;
    frekvenceCrk(niz, &frekvence);


    return 0;
}

#endif
