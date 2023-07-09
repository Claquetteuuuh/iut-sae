#include "modifier_mel_client.h"
#define CHEMIN_ANNUAIRE "resultat_modifier_mel.txt"

void modifier_mel_client(char* nom_annuaire, char* mel_p, char* nv_mel_p){
    remove(CHEMIN_ANNUAIRE);
    FILE *fichier = fopen(nom_annuaire, "r+");
    FILE *fichier2 = fopen(CHEMIN_ANNUAIRE, "a+");
    if(fichier != NULL && fichier2 != NULL){
        Person guys[countLine(nom_annuaire)];
        fileToLs(fichier, guys, sizeof(guys)/sizeof(guys[0]));
        editElementOfList(guys, sizeof(guys)/sizeof(guys[0]), mel_p, nv_mel_p, 6, "email");
        fillThisFile(CHEMIN_ANNUAIRE, guys, sizeof(guys)/sizeof(guys[0]));
    }else{
        printf("Erreur lors de l'ouverture du fichier");
    }
}