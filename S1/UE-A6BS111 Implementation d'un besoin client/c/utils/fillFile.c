#include "fillFile.h"

#include <stdio.h>
#include <stdlib.h>

void fillThisFile(char* filename, Person *personArray, int taille){
    /*
        Rempli un fichier avec les informations contenu dans le tableau de structure
    */

    remove(filename);
    FILE *fichier = NULL;
    fichier = fopen(filename, "a+");

    if(fichier != NULL){
        for(int i = 0;i<taille;i++) {
                fprintf(fichier, "%s,%s,%s,%s,%s,%s,%s", personArray[i].nom, personArray[i].prenom, personArray[i].postalCode, personArray[i].ville, personArray[i].phoneNumber, personArray[i].email, personArray[i].metier);

        }
        fprintf(fichier, "\n");

        fclose(fichier);
    }else{
        printf("Cannot create new file %s", filename);
    }

}