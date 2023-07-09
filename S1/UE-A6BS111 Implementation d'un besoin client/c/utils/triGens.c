#include <string.h>
#include "triGens.h"
#include "structs.h"

void triGens(Person *tableau, int taille, int col){
    struct Person garde;
    int i, j;

    for (i = 0; i < taille; i++)
        for (j = 0; j < taille; j++)
            switch (col) {
                case 1:
                    if (strcmp(tableau[i].nom, tableau[j].nom) < 0) {
                        garde = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = garde;
                    }
                    break;
                case 2:
                    if (strcmp(tableau[i].prenom, tableau[j].prenom) < 0) {
                        garde = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = garde;
                    }
                    break;
                case 3:
                    if (strcmp(tableau[i].postalCode, tableau[j].postalCode) < 0) {
                        garde = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = garde;
                    }
                    break;
                case 4:
                    if (strcmp(tableau[i].ville, tableau[j].ville) < 0) {
                        garde = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = garde;
                    }
                    break;
                case 5:
                    if (strcmp(tableau[i].phoneNumber, tableau[j].phoneNumber) < 0) {
                        garde = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = garde;
                    }
                    break;
                case 6:
                    if (strcmp(tableau[i].email, tableau[j].email) < 0) {
                        garde = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = garde;
                    }
                    break;
                case 7:
                    if (strcmp(tableau[i].metier, tableau[j].metier) < 0) {
                        garde = tableau[i];
                        tableau[i] = tableau[j];
                        tableau[j] = garde;
                    }
                    break;
                default:
                    printf("This args doesn't exist");
            }
}
