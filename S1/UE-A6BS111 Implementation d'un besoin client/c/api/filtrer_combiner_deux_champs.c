#include "filtrer_combiner_deux_champs.h"
void filtrer_combiner_deux_champs(char* nom_annuaire, char* nom_champ1, char* val_chaine1,char* nom_champ2, char* val_chaine2){
    FILE *fichier = NULL;
    fichier = fopen(nom_annuaire, "r+");
    if(fichier != NULL){
        filterByTwo(fichier, nom_annuaire, nom_champ1, val_chaine1, nom_champ2, val_chaine2);
    }else{
        printf("Erreur lors de l'ouverture du fichier %s", nom_annuaire);
    }
}