
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "v1.h"

int steviloZnakov(char* niz, char znak) {
    
    int n = 0;
    for (int i = 0; niz[i] != '\0'; i++) {
        if (niz[i] == znak) n++;
    }
    return n;
}

char* kopirajDoZnaka(char* niz, char znak) {
    int n = 0;
    for (int i = 0; niz[i] != '\0'; i++) {
        if (niz[i] == znak) {
            n = i;
            break;
        }
    }

    // alocate mem
    char* beseda = malloc(n+1); // ker moramo pustiti prostor še za znak '\0'

    for (int i = 0; i < n; i++) {
        beseda[i] = niz[i];
    }
    beseda[n] = '\0';

    return beseda;
}

char** razcleni(char* niz, char locilo, int* stOdsekov) {
    *stOdsekov = 1;
    for (int i = 0; niz[i] != '\0'; i++) {
        if (niz[i] == locilo) {
            (*stOdsekov)++;
        }
    }

    // alocate mem
    char** kazKopije = calloc(*stOdsekov, sizeof(char*));
    
    int n = 0;
    kazKopije[0] = niz;
    for (int i = 0; niz[i] != '\0'; i++) {
        if (niz[i] == locilo) {
            niz[i] = '\0';
            n++;
            kazKopije[n] = &niz[i+1];
        }
    }

    return kazKopije;
}

#ifndef test

int main() {

        char niz[] = "Hello,World,How,Are,You";
        char locilo = ',';
        int stOdsekov;
        char** rezultat = razcleni(niz, locilo, &stOdsekov);

        printf("Stevilo odsekov: %d\n", stOdsekov);
        for (int i = 0; i < stOdsekov; i++) {
            printf("Odsek %d: %s\n", i+1, rezultat[i]);
        }



    return 0;
}

#endif
