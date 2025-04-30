#include <stdio.h>

int main() {
    int n = 7; // Nombre de termes que tu veux générer (tu peux changer la valeur)
    int u0 = 0;
    int u1 = 1;
    int suivant;

    printf("%d, %d", u0, u1); // Affiche les deux premiers termes

    for (int i = 2; i < n; i++) {
        suivant = u0 + u1;
        printf(", %d", suivant);
        u0 = u1;
        u1 = suivant;
    }

    printf("\n");

    return 0;
}
