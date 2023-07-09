#include "ajouter_client.h"
#define CHEMIN_ANNUAIRE "resultat_ajouter.txt"

void ajouter_client(char* nom_annuaire, char* nom_p, char* prenom_p, char* code_postal_p, char* ville_p, char* telephone_p, char* mel_p, char* profession_p){
    FILE *file = fopen(nom_annuaire, "r+");
    if(file != NULL){
        Person guys[countLine(nom_annuaire)];
        fileToLs(file, guys, sizeof(guys)/sizeof(guys[0]));
        int line = findBy("email", mel_p, guys, sizeof(guys)/sizeof(guys[0]));
        if(line == -1){
            fillThisFile(CHEMIN_ANNUAIRE, guys, sizeof(guys)/sizeof(guys[0]));
            Person guy;
            strcpy(guy.nom, nom_p);
            strcpy(guy.prenom, prenom_p);
            strcpy(guy.postalCode, code_postal_p);
            strcpy(guy.ville, ville_p);
            strcpy(guy.phoneNumber, telephone_p);
            strcpy(guy.email, mel_p);
            strcpy(guy.metier, profession_p);

            addNewLine(CHEMIN_ANNUAIRE, &guy);
            printf("Personne ajouté avec succès !\n");

        }else{
            printf("L'email existe déjà dans l'annuaire \n");
        }
    }else{
        printf("Erreur dans le lancement du fichier \n");
    }
}
