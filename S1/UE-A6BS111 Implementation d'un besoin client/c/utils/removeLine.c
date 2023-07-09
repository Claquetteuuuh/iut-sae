#include "removeLine.h"
#define CHEMIN_SUPP "resultat_supprimer.txt"
#define CHEMIN_TMP "temp.txt"

int removeLine(FILE* file, char* filename, int lineToRemove){
    /*
      Supprime la ligne lineToRemove dans filename
        Puis crée un fichier resultat_supprimer.txt
        retourne 1 si tout s'est bien passé sinon 0
     */
    remove(CHEMIN_TMP);
    remove(CHEMIN_SUPP);
    fseek(file, 0, SEEK_SET);
    FILE *tempFile = fopen(CHEMIN_TMP, "w");
    if(tempFile != NULL){
        char currentChar = 0;
        int line = 1;
        do {
            currentChar = fgetc(file);
            if(currentChar == '\n'){
                line += 1;
            }
            if(line != lineToRemove){
                putc(currentChar, tempFile);
            }

        } while (currentChar != EOF);
        fclose(tempFile);
        fclose(file);
        rename(CHEMIN_TMP, CHEMIN_SUPP);
        return 1;
    }else{
        printf("Erreur when creating tempfile");
        return 0;
    }
    return 0;



}