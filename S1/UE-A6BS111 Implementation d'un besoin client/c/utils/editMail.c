#include "editMail.h"

int editElementOfList(Person *structList, int taille, char *past, char *new, int whatCase, char* whatCase2){
    /*
        Modifie un element de la liste
        past est l'ancien element
        new est le nouvelle element
        whatCase:
            1: nom
            2: prenom
            3: code postal
            4: ville
            5: telephone
            6: email
            7: metier
    */

    switch (whatCase) {
        case 1:
            for (int i = 0; i < taille; ++i) {
                if(strcmp(past, structList[i].nom) == 0){
                    structList[i].nom[0] = '\0';
                    strcat(structList[i].nom, new);
                    return 1;
                }
            }
            break;

        case 2:
            for (int i = 0; i < taille; ++i) {
                if(strcmp(past, structList[i].prenom) == 0){
                    structList[i].prenom[0] = '\0';
                    strcat(structList[i].prenom, new);
                    return 1;
                }
            }
            break;

        case 3:
            for (int i = 0; i < taille; ++i) {
                if(strcmp(past, structList[i].postalCode) == 0){
                    structList[i].postalCode[0] = '\0';
                    strcat(structList[i].postalCode, new);
                    return 1;
                }
            }
            break;

        case 4:
            for (int i = 0; i < taille; ++i) {
                if(strcmp(past, structList[i].ville) == 0){
                    structList[i].ville[0] = '\0';
                    strcat(structList[i].ville, new);
                    return 1;
                }
            }
            break;

        case 5:
            for (int i = 0; i < taille; ++i) {
                if(strcmp(past, structList[i].phoneNumber) == 0){
                    structList[i].phoneNumber[0] = '\0';
                    strcat(structList[i].phoneNumber, new);
                    return 1;
                }
            }
            break;


        case 6:
            if(strcmp( whatCase2, "adresse mel") == 0){
                for (int i = 0; i < taille; ++i) {
                    if(strcmp(past, structList[i].email) == 0){
                        structList[i].email[0] = '\0';
                        strcat(structList[i].email, new);
                        return 1;
                    }
                }
            }
            if(strcmp( whatCase2, "nom") == 0){
                for (int i = 0; i < taille; ++i) {
                    if(strcmp(past, structList[i].email) == 0){
                        char nom[100] = "\n";
                        strcat(nom, new);
                        structList[i].nom[0] = '\0';
                        strcat(structList[i].nom, nom);
                        return 1;
                    }
                }
            }
            if(strcmp( whatCase2, "prenom") == 0){
                for (int i = 0; i < taille; ++i) {
                    if(strcmp(past, structList[i].email) == 0){
                        structList[i].prenom[0] = '\0';
                        strcat(structList[i].prenom, new);
                        return 1;
                    }
                }
            }
            if(strcmp( whatCase2, "code postal") == 0){
                for (int i = 0; i < taille; ++i) {
                    if(strcmp(past, structList[i].email) == 0){
                        structList[i].postalCode[0] = '\0';
                        strcat(structList[i].postalCode, new);
                        return 1;
                    }
                }
            }
            if(strcmp( whatCase2, "ville") == 0){
                for (int i = 0; i < taille; ++i) {
                    if(strcmp(past, structList[i].email) == 0){
                        structList[i].ville[0] = '\0';
                        strcat(structList[i].ville, new);
                        return 1;
                    }
                }
            }
            if(strcmp( whatCase2, "numero telephone") == 0){
                for (int i = 0; i < taille; ++i) {
                    if(strcmp(past, structList[i].email) == 0){
                        structList[i].phoneNumber[0] = '\0';
                        strcat(structList[i].phoneNumber, new);
                        return 1;
                    }
                }
            }
            if(strcmp( whatCase2, "profession") == 0){
                for (int i = 0; i < taille; ++i) {
                    if(strcmp(past, structList[i].email) == 0){
                        structList[i].metier[0] = '\0';
                        strcat(structList[i].metier, new);
                        return 1;
                    }
                }
            }
            break;

        case 7:
            for (int i = 0; i < taille; ++i) {
                if(strcmp(past, structList[i].metier) == 0){
                    structList[i].metier[0] = '\0';
                    strcat(structList[i].metier, new);
                    return 1;
                }
            }
            break;

        default:
            printf("This case doesn't exist");
    }

    return 0;
}
