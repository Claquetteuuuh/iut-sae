#include "trier_clients_par_nom.h"
#define CHEMIN_ANNUAIRE "resultat_trier_par_nom.txt"

void trier_clients_par_nom(char* nom_annuaire){
    FILE *fichier = fopen(nom_annuaire, "r+");
    if(fichier != NULL){
        Person guys[countLine(nom_annuaire)];
        fileToLs(fichier, guys, sizeof(guys)/sizeof(guys[0]));
        triGens(guys, sizeof(guys)/sizeof(guys[0]), 1);
        fillThisFile(CHEMIN_ANNUAIRE, guys, sizeof(guys)/sizeof(guys[0]));
        fclose(fichier);
    }else{
        printf("Erreur when open %s", nom_annuaire);
    }
}