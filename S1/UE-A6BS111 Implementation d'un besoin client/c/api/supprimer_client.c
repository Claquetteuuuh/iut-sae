#include "supprimer_client.h"

void supprimer_client(char* nom_annuaire, char* mel_p){
    FILE* fichier = NULL;
    fichier = fopen(nom_annuaire, "r+");
    if(fichier != NULL){
        Person guys[countLine(nom_annuaire)];
        fileToLs(fichier, guys, sizeof(guys)/sizeof(guys[0]));
        int line = findBy("email", mel_p, guys, sizeof(guys)/sizeof(guys[0]));
        if(line != -1){
            removeLine(fichier, nom_annuaire, line);
        }else{
            printf("%s n'existe pas", mel_p);
        }
    }else{
        printf("Erreur when open %s", nom_annuaire);
    }
}
