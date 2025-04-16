#include <stdio.h>
#include <math.h>

int main() {
    double rayon;
    double aire, perimetre;

    // Valeur du rayon 
    rayon = 5.0; // Exemple : rayon de 5.0

    // Calculs
    aire = M_PI * rayon * rayon;
    perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Rayon du cercle : %.2f\n", rayon);
    printf("Aire du cercle : %.2f\n", aire);
    printf("Périmètre du cercle : %.2f\n", perimetre);

    return 0;
}
