#include "modifier_autre_que_mail.h"
#define CHEMIN_ANNUAIRE "resultat_modifier_autre_que_mel.txt"


void modifier_autres_que_mel_client(char *nom_annuaire, char* mel_p,char* nom_champ,char* nv_valeur){
    remove(CHEMIN_ANNUAIRE);
    FILE *fichier = fopen(nom_annuaire, "r+");
    FILE *fichier2 = fopen(CHEMIN_ANNUAIRE, "a+");
    if(fichier != NULL && fichier2 != NULL){
        Person guys[countLine(nom_annuaire)];
        fileToLs(fichier, guys, sizeof(guys)/sizeof(guys[0]));
        editElementOfList(guys, sizeof(guys)/sizeof(guys[0]), mel_p, nv_valeur, 6, nom_champ);
        fillThisFile(CHEMIN_ANNUAIRE, guys, sizeof(guys)/sizeof(guys[0]));
    }else{
        printf("Erreur lors de l'ouverture du fichier");
    }
}
