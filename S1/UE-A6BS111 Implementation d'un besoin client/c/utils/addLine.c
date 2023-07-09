#include "addLine.h"

void addNewLine(char* filename, Person* guy){
    FILE *fichier = NULL;
    fichier = fopen(filename, "a+");
    if (fichier != NULL){
        fprintf(fichier, "%s,%s,%s,%s,%s,%s,%s", guy->nom, guy->prenom, guy->postalCode, guy->ville, guy->phoneNumber, guy->email, guy->metier);
    }else{
        printf("Error when open %s", filename);
    }
}