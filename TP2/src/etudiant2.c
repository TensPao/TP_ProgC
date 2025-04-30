#include <stdio.h>
#include <string.h>

// Définition de la structure étudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main() {
    // Déclaration du tableau de 5 étudiants
    struct Etudiant etudiants[5];

    // Initialisation des données avec strcpy et affectations
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Lucie");
    strcpy(etudiants[2].adresse, "15, Rue des Roses, Marseille");
    etudiants[2].note_prog = 15.5;
    etudiants[2].note_sys = 13.7;

    strcpy(etudiants[3].nom, "Lemoine");
    strcpy(etudiants[3].prenom, "Antoine");
    strcpy(etudiants[3].adresse, "10, Avenue de la République, Paris");
    etudiants[3].note_prog = 13.2;
    etudiants[3].note_sys = 11.8;

    strcpy(etudiants[4].nom, "Bernard");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "5, Chemin des Peupliers, Bordeaux");
    etudiants[4].note_prog = 17.0;
    etudiants[4].note_sys = 16.5;

    // Affichage des informations
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation en C : %.2f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %
