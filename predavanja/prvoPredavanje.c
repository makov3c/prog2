// LITERATURA
// B. W. Kernighan, D. M. Ritchie: The C Programming Language (2nd. edition), Prentice Hall, 1988.
// DOMAČE NALOGE
// niso obvezne
// IZPITI
// 3 izpitni roki
// kolokviji se mogoče(?) štejejo za opravljanje izpita. Dovolj dobro moraš pisati 1. da greš lahko na 2. 
// (pišejo se na računalnik)
// literatura ni dovoljena, c dokumentacij./a je na računalniku
// splošni ljudski odpor in družbena samozaščita

#include <stdio.h>

int f(int n) {
    printf("[%d] \n",n);
    // printf("x");
    return n;
}

int main() {
    int first = f(5);
    int second = f(11);
    printf("[%d %d]\n", first, second);
    // v c-ju ni določeno, kateri argument se prvi izračuna - ni nujno od leve proti desni
    // torej vrstni red ni
    return 0;
}

// c ni OOP zato nimamo classov, objektov
// prevedena koda se razlikuje od procesorja do procesorja! med seboj ne deluje!
// pri javi npr. je to ista stvar (torej .class datoteka je enaka)
