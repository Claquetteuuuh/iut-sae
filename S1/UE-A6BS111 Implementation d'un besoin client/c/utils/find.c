#include "find.h"

void findInfo(char* categorie, int line, Person *annuaire){
    /*
        Affiche l'info voulu dans une ligne entré
     */
    if(strcmp(categorie, "nom") == 0){
        printf("%s\n", annuaire[line-1].nom);
    }
    if(strcmp(categorie, "prenom") == 0){
        printf("%s\n", annuaire[line-1].prenom);
    }
    if(strcmp(categorie, "postal") == 0){
        printf("%s\n", annuaire[line-1].postalCode);
    }
    if(strcmp(categorie, "ville") == 0){
        printf("%s\n", annuaire[line-1].ville);
    }
    if(strcmp(categorie, "telephone") == 0){
        printf("%s\n", annuaire[line-1].phoneNumber);
    }
    if(strcmp(categorie, "email") == 0){
        printf("%s\n", annuaire[line-1].email);
    }
    if(strcmp(categorie, "metier") == 0){
        printf("%s\n", annuaire[line-1].metier);
    }
}

int findBy(char* categorie, char* string, Person *annuaire, int size){
    /*
     * Cherche une donnée dans une liste de structure et retourne la ligne où cette donnée est présente
     * string est la donnée cherché
     * categorie est la colonne ou la donnée se trouve
     */

    for(int i=0; i<size;i++){
        if(strcmp(categorie, "nom") == 0){
            if(strcmp(string, annuaire[i].nom) == 0){
                printf("%s,%s,%s,%s,%s,%s,%s\n", annuaire[i].nom, annuaire[i].prenom, annuaire[i].postalCode, annuaire[i].ville, annuaire[i].phoneNumber, annuaire[i].email, annuaire[i].metier);
                return i+1;
            }
        }
        if(strcmp(categorie, "prenom") == 0){
            if(strcmp(string, annuaire[i].prenom) == 0){
                printf("%s,%s,%s,%s,%s,%s,%s\n", annuaire[i].nom, annuaire[i].prenom, annuaire[i].postalCode, annuaire[i].ville, annuaire[i].phoneNumber, annuaire[i].email, annuaire[i].metier);
                return i+1;
            }
        }
        if(strcmp(categorie, "postal") == 0){
            if(strcmp(string, annuaire[i].postalCode) == 0){
                printf("%s,%s,%s,%s,%s,%s,%s\n", annuaire[i].nom, annuaire[i].prenom, annuaire[i].postalCode, annuaire[i].ville, annuaire[i].phoneNumber, annuaire[i].email, annuaire[i].metier);
                return i+1;
            }
        }
        if(strcmp(categorie, "ville") == 0){
            if(strcmp(string, annuaire[i].ville) == 0){
                printf("%s,%s,%s,%s,%s,%s,%s\n", annuaire[i].nom, annuaire[i].prenom, annuaire[i].postalCode, annuaire[i].ville, annuaire[i].phoneNumber, annuaire[i].email, annuaire[i].metier);
                return i+1;
            }
        }
        if(strcmp(categorie, "telephone") == 0){
            if(strcmp(string, annuaire[i].phoneNumber) == 0){
                printf("%s,%s,%s,%s,%s,%s,%s\n", annuaire[i].nom, annuaire[i].prenom, annuaire[i].postalCode, annuaire[i].ville, annuaire[i].phoneNumber, annuaire[i].email, annuaire[i].metier);
                return i+1;
            }
        }
        if(strcmp(categorie, "email") == 0){
            if(strcmp(string, annuaire[i].email) == 0){
                printf("%s,%s,%s,%s,%s,%s,%s\n", annuaire[i].nom, annuaire[i].prenom, annuaire[i].postalCode, annuaire[i].ville, annuaire[i].phoneNumber, annuaire[i].email, annuaire[i].metier);
                return i+1;
            }
        }
        if(strcmp(categorie, "metier") == 0){
            if(strcmp(string, annuaire[i].metier) == 0){
                printf("%s,%s,%s,%s,%s,%s,%s\n", annuaire[i].nom, annuaire[i].prenom, annuaire[i].postalCode, annuaire[i].ville, annuaire[i].phoneNumber, annuaire[i].email, annuaire[i].metier);
                return i+1;
            }
        }

    }
    return -1;
}