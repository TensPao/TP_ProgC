#include <stdio.h>

int main() {
    int a = 2;  // Valeur de base
    int b = 3;  // Exposant
    int resultat = 1; // Initialisation du résultat à 1

    // Boucle pour multiplier a par lui-même b fois
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("%d à la puissance %d est égal à %d\n", a, b, resultat);

    return 0;
}
