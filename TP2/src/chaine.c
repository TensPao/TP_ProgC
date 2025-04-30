#include <stdio.h>

int main() {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[100];     // Assez grand pour contenir la copie
    char concat[200];    // Assez grand pour contenir la concaténation

    // Calcul de la longueur de chaine1
    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de chaine1 : %d\n", longueur);

    // Copie de chaine1 dans copie
    int i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; // Fin de chaîne
    printf("Copie de chaine1 : %s\n", copie);

    // Concaténation de chaine1 et chaine2 dans concat
    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }
    
    int j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }
    concat[i] = '\0'; // Fin de chaîne
    printf("Concaténation : %s\n", concat);

    return 0;
}
