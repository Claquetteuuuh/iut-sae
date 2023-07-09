#include "filtrer_donnee_manquante.h"
#define CHEMIN_ANNUAIRE_SORTIE2 "resultat_filtrer_donnees_manquantes.txt"

void filtrer_client_donnee_manquante(char* nom_annuaire) {
    FILE *fichier, *fichier2 = NULL;
    int numbline;
    fichier = fopen(nom_annuaire, "r+");
    numbline = countLine(nom_annuaire);
    fichier2 = fopen(CHEMIN_ANNUAIRE_SORTIE2, "a+");

    if (fichier != NULL && fichier2 != NULL) {
        Person tab[countLine(nom_annuaire)];
        fileToLs(fichier, tab, sizeof(tab) / sizeof(tab[0]));
        for (int i = 0; i < numbline; i++) {
            if ((strcmp(tab[i].nom, "") == 0) || (strcmp(tab[i].prenom, "") == 0) ||
                (strcmp(tab[i].postalCode, "") == 0) || (strcmp(tab[i].ville, "") == 0) ||
                (strcmp(tab[i].phoneNumber, "") == 0) || (strcmp(tab[i].email, "") == 0) ||
                (strcmp(tab[i].metier, "") == 0)) {
                fprintf(fichier2, "%s,%s,%s,%s,%s,%s,%s", tab[i].nom, tab[i].prenom, tab[i].postalCode, tab[i].ville,
                        tab[i].phoneNumber, tab[i].email, tab[i].metier);
            }
        }
        fclose(fichier);
        fclose(fichier2);

    } else {
        printf("Error: Can't open file %s", nom_annuaire);
    }
}