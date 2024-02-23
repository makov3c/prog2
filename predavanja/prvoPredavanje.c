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
    return n;
}

int main() {
    printf("[%d %d]\n", f(5), f(11));
    return 0;
}

// c ni OOP zato nimamo classov, objektov
// prevedena koda se razlikuje od procesorja do procesorja! med seboj ne deluje!
// pri javi npr. je to ista stvar (torej .class datoteka je enaka)
