#include <stdio.h>

// Définition de la structure Couleur
struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {
    // Déclaration et initialisation du tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, // Couleur 1
        {0x2c, 0xc8, 0x64, 0xff}, // Couleur 2
        {0x1a, 0x2b, 0xf0, 0xff}, // Couleur 3
        {0xfa, 0xe3, 0x45, 0xff}, // Couleur 4
        {0x9d, 0x34, 0xae, 0xff}, // Couleur 5
        {0x56, 0xcd, 0xe1, 0xff}, // Couleur 6
        {0x88, 0x77, 0x66, 0xff}, // Couleur 7
        {0x00, 0xff, 0x00, 0xff}, // Couleur 8
        {0xff, 0x00, 0x00, 0xff}, // Couleur 9
        {0x00, 0x00, 0xff, 0xff}  // Couleur 10
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleur
