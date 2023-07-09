#include "filterBy.h"
#define CHEMIN_ANNUAIRE "resultat_filtrer_un_champ.txt"
#define CHEMIN_ANNUAIRE2 "resultat_filtrer_combiner_deux_champs.txt"

void filterBy(FILE* annuaire, char* nom, char* nom_champ, char* val_chaine) {
    remove(CHEMIN_ANNUAIRE);
    Person guys[countLine(nom)];
    fileToLs(annuaire, guys, sizeof(guys)/sizeof(guys[0]));
    if(strcmp(nom_champ, "nom") == 0){
        for (int i = 0; i < sizeof(guys)/sizeof(guys[0]); ++i) {
            if (strstr(guys[i].nom, val_chaine) != NULL) {
                addNewLine(CHEMIN_ANNUAIRE, &guys[i]);
            }
        }
    }
    if(strcmp(nom_champ, "prenom") == 0){
        for (int i = 0; i < sizeof(guys)/sizeof(guys[0]); ++i) {
            if (strstr(guys[i].prenom, val_chaine) != NULL) {
                addNewLine(CHEMIN_ANNUAIRE, &guys[i]);
            }
        }
    }
    if(strcmp(nom_champ, "code postal") == 0){
        for (int i = 0; i < sizeof(guys)/sizeof(guys[0]); ++i) {
            if (strstr(guys[i].postalCode, val_chaine) != NULL) {
                addNewLine(CHEMIN_ANNUAIRE, &guys[i]);
            }
        }
    }
    if(strcmp(nom_champ, "ville") == 0){
        for (int i = 0; i < sizeof(guys)/sizeof(guys[0]); ++i) {
            if (strstr(guys[i].ville, val_chaine) != NULL) {
                addNewLine(CHEMIN_ANNUAIRE, &guys[i]);
            }
        }
    }
    if(strcmp(nom_champ, "numero telephone") == 0){
        for (int i = 0; i < sizeof(guys)/sizeof(guys[0]); ++i) {
            if (strstr(guys[i].phoneNumber, val_chaine) != NULL) {
                addNewLine(CHEMIN_ANNUAIRE, &guys[i]);
            }
        }
    }

    if(strcmp(nom_champ, "adresse mel") == 0){
        for (int i = 0; i < sizeof(guys)/sizeof(guys[0]); ++i) {
            if (strstr(guys[i].email, val_chaine) != NULL) {
                addNewLine(CHEMIN_ANNUAIRE, &guys[i]);
            }
        }
    }
    if(strcmp(nom_champ, "profession") == 0){
        for (int i = 0; i < sizeof(guys)/sizeof(guys[0]); ++i) {
            if (strstr(guys[i].metier, val_chaine) != NULL) {
                addNewLine(CHEMIN_ANNUAIRE, &guys[i]);
            }
        }
    }

    printf("Fait !");
}


void filterByTwo(FILE* annuaire, char* nom, char* nom_champ1, char* val_chaine1, char* nom_champ2, char* val_chaine2) {
    remove(CHEMIN_ANNUAIRE2);
    Person guys[countLine(nom)];
    fileToLs(annuaire, guys, sizeof(guys)/sizeof(guys[0]));

    // nom
    if((strcmp(nom_champ1, "nom") == 0 && strcmp(nom_champ2, "prenom") == 0) || (strcmp(nom_champ1, "prenom") == 0 && strcmp(nom_champ2, "nom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].nom, val_chaine1) != NULL && strstr(guys[i].prenom, val_chaine2) != NULL) || (strstr(guys[i].nom, val_chaine2) != NULL && strstr(guys[i].prenom, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "nom") == 0 && strcmp(nom_champ2, "code postal") == 0) || (strcmp(nom_champ1, "code postal") == 0 && strcmp(nom_champ2, "nom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].nom, val_chaine1) != NULL && strstr(guys[i].postalCode, val_chaine2) != NULL) || (strstr(guys[i].nom, val_chaine2) != NULL && strstr(guys[i].postalCode, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "nom") == 0 && strcmp(nom_champ2, "ville") == 0) || (strcmp(nom_champ1, "ville") == 0 && strcmp(nom_champ2, "nom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].nom, val_chaine1) != NULL && strstr(guys[i].ville, val_chaine2) != NULL) || (strstr(guys[i].nom, val_chaine2) != NULL && strstr(guys[i].ville, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "nom") == 0 && strcmp(nom_champ2, "numero telephone") == 0) || (strcmp(nom_champ1, "numero telephone") == 0 && strcmp(nom_champ2, "nom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].nom, val_chaine1) != NULL && strstr(guys[i].phoneNumber, val_chaine2) != NULL) || (strstr(guys[i].nom, val_chaine2) != NULL && strstr(guys[i].phoneNumber, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "nom") == 0 && strcmp(nom_champ2, "adresse mel") == 0) || (strcmp(nom_champ1, "adresse mel") == 0 && strcmp(nom_champ2, "nom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].nom, val_chaine1) != NULL && strstr(guys[i].email, val_chaine2) != NULL) || (strstr(guys[i].nom, val_chaine2) != NULL && strstr(guys[i].email, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "nom") == 0 && strcmp(nom_champ2, "profession") == 0) || (strcmp(nom_champ1, "profession") == 0 && strcmp(nom_champ2, "nom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].nom, val_chaine1) != NULL && strstr(guys[i].metier, val_chaine2) != NULL) || (strstr(guys[i].nom, val_chaine2) != NULL && strstr(guys[i].metier, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }

    //prenom
    if((strcmp(nom_champ1, "prenom") == 0 && strcmp(nom_champ2, "code postal") == 0) || (strcmp(nom_champ1, "code postal") == 0 && strcmp(nom_champ2, "prenom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].prenom, val_chaine1) != NULL && strstr(guys[i].postalCode, val_chaine2) != NULL) || (strstr(guys[i].prenom, val_chaine2) != NULL && strstr(guys[i].postalCode, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "prenom") == 0 && strcmp(nom_champ2, "ville") == 0) || (strcmp(nom_champ1, "ville") == 0 && strcmp(nom_champ2, "prenom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].prenom, val_chaine1) != NULL && strstr(guys[i].ville, val_chaine2) != NULL) || (strstr(guys[i].prenom, val_chaine2) != NULL && strstr(guys[i].ville, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "prenom") == 0 && strcmp(nom_champ2, "numero telephone") == 0) || (strcmp(nom_champ1, "numero telephone") == 0 && strcmp(nom_champ2, "prenom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].prenom, val_chaine1) != NULL && strstr(guys[i].phoneNumber, val_chaine2) != NULL) || (strstr(guys[i].prenom, val_chaine2) != NULL && strstr(guys[i].phoneNumber, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "prenom") == 0 && strcmp(nom_champ2, "adresse mel") == 0) || (strcmp(nom_champ1, "adresse mel") == 0 && strcmp(nom_champ2, "prenom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].prenom, val_chaine1) != NULL && strstr(guys[i].email, val_chaine2) != NULL) || (strstr(guys[i].prenom, val_chaine2) != NULL && strstr(guys[i].email, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "prenom") == 0 && strcmp(nom_champ2, "profession") == 0) || (strcmp(nom_champ1, "profession") == 0 && strcmp(nom_champ2, "prenom") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].prenom, val_chaine1) != NULL && strstr(guys[i].metier, val_chaine2) != NULL) || (strstr(guys[i].prenom, val_chaine2) != NULL && strstr(guys[i].metier, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }

    // postal
    if((strcmp(nom_champ1, "code postal") == 0 && strcmp(nom_champ2, "ville") == 0) || (strcmp(nom_champ1, "ville") == 0 && strcmp(nom_champ2, "code postal") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].postalCode, val_chaine1) != NULL && strstr(guys[i].ville, val_chaine2) != NULL) || (strstr(guys[i].postalCode, val_chaine2) != NULL && strstr(guys[i].ville, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "code postal") == 0 && strcmp(nom_champ2, "numero telephone") == 0) || (strcmp(nom_champ1, "numero telephone") == 0 && strcmp(nom_champ2, "code postal") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].postalCode, val_chaine1) != NULL && strstr(guys[i].phoneNumber, val_chaine2) != NULL) || (strstr(guys[i].postalCode, val_chaine2) != NULL && strstr(guys[i].phoneNumber, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "code postal") == 0 && strcmp(nom_champ2, "adresse mel") == 0) || (strcmp(nom_champ1, "adresse mel") == 0 && strcmp(nom_champ2, "code postal") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].postalCode, val_chaine1) != NULL && strstr(guys[i].email, val_chaine2) != NULL) || (strstr(guys[i].postalCode, val_chaine2) != NULL && strstr(guys[i].email, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "code postal") == 0 && strcmp(nom_champ2, "profession") == 0) || (strcmp(nom_champ1, "profession") == 0 && strcmp(nom_champ2, "code postal") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].postalCode, val_chaine1) != NULL && strstr(guys[i].metier, val_chaine2) != NULL) || (strstr(guys[i].postalCode, val_chaine2) != NULL && strstr(guys[i].metier, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }

    // ville
    if((strcmp(nom_champ1, "ville") == 0 && strcmp(nom_champ2, "numero telephone") == 0) || (strcmp(nom_champ1, "numero telephone") == 0 && strcmp(nom_champ2, "ville") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].ville, val_chaine1) != NULL && strstr(guys[i].phoneNumber, val_chaine2) != NULL) || (strstr(guys[i].ville, val_chaine2) != NULL && strstr(guys[i].phoneNumber, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "ville") == 0 && strcmp(nom_champ2, "adresse mel") == 0) || (strcmp(nom_champ1, "adresse mel") == 0 && strcmp(nom_champ2, "ville") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].ville, val_chaine1) != NULL && strstr(guys[i].email, val_chaine2) != NULL) || (strstr(guys[i].ville, val_chaine2) != NULL && strstr(guys[i].email, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "ville") == 0 && strcmp(nom_champ2, "profession") == 0) || (strcmp(nom_champ1, "profession") == 0 && strcmp(nom_champ2, "ville") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].ville, val_chaine1) != NULL && strstr(guys[i].metier, val_chaine2) != NULL) || (strstr(guys[i].ville, val_chaine2) != NULL && strstr(guys[i].metier, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }

    // telephone
    if((strcmp(nom_champ1, "numero telephone") == 0 && strcmp(nom_champ2, "adresse mel") == 0) || (strcmp(nom_champ1, "adresse mel") == 0 && strcmp(nom_champ2, "numero telephone") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].phoneNumber, val_chaine1) != NULL && strstr(guys[i].email, val_chaine2) != NULL) || (strstr(guys[i].phoneNumber, val_chaine2) != NULL && strstr(guys[i].email, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }
    if((strcmp(nom_champ1, "numero telephone") == 0 && strcmp(nom_champ2, "profession") == 0) || (strcmp(nom_champ1, "profession") == 0 && strcmp(nom_champ2, "numero telephone") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].phoneNumber, val_chaine1) != NULL && strstr(guys[i].metier, val_chaine2) != NULL) || (strstr(guys[i].phoneNumber, val_chaine2) != NULL && strstr(guys[i].metier, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }

    // email
    if((strcmp(nom_champ1, "adresse mel") == 0 && strcmp(nom_champ2, "profession") == 0) || (strcmp(nom_champ1, "profession") == 0 && strcmp(nom_champ2, "adresse mel") == 0)) {
        for (int i = 0; i < sizeof(guys) / sizeof(guys[0]); ++i) {
            if ((strstr(guys[i].email, val_chaine1) != NULL && strstr(guys[i].metier, val_chaine2) != NULL) || (strstr(guys[i].email, val_chaine2) != NULL && strstr(guys[i].metier, val_chaine1) != NULL)) {
                addNewLine(CHEMIN_ANNUAIRE2, &guys[i]);
            }
        }
    }

    printf("Fait !\n");
}