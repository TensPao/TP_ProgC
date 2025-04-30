#include <stdio.h>

int main() {
    int d = 0x00880000; // Exemple de valeur (tu peux changer)

    // Vérification des 4ème et 20ème bits de gauche
    int bit4 = (d >> (32 - 4)) & 1;  // 4ème bit de gauche
    int bit20 = (d >> (32 - 20)) & 1; // 20ème bit de gauche

    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
