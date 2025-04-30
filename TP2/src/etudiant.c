#include <stdio.h>

int main() {
    // Déclaration des tableaux pour 5 étudiants
    char noms[5][50] = {"Dupont", "Martin", "Durand", "Lemoine", "Bernard"};
    char prenoms[5][50] = {"Alice", "Jean", "Sophie", "Luc", "Emma"};
    char adresses[5][100] = {
        "10 rue des Lilas",
        "25 avenue Victor Hugo",
        "8 boulevard Haussmann",
        "15 rue de la République",
        "30 chemin des Roses"
    };
    float notes_prog[5] = {14.5, 12.0, 16.0, 9.5, 18.0};
    float notes_sys[5] = {13.0, 14.5, 15.5, 10.0, 17.5};

    // Affichage des informations des étudiants
    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.2f\n", notes_prog[i]);
        printf("Note Système d'exploitation : %.2f\n", notes_sys[i]);
        printf("-------------------------------\n");
    }

    return 0;
}
