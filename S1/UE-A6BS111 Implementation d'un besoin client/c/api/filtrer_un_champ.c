#include "filtrer_un_champ.h"
#define CHEMIN_ANNUAIRE "resultat_filtrer_un_champ.txt"

void filtrer_un_champ(char* nom_annuaire, char* nom_champ, char* val_chaine){
    FILE *fichier = NULL;
    fichier = fopen(nom_annuaire, "r+");

    if(fichier != NULL){
        filterBy(fichier, nom_annuaire, nom_champ, val_chaine);
        fclose(fichier);
    }else{
        printf("Erreur lors de l'ouverture du fichier");
    }
}