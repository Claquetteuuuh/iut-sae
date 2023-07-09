#include "countLines.h"

int countLine(char *filename){

    FILE *fichier = NULL;
    fichier = fopen(filename, "r+");

    int count = 0;
    if(fichier != NULL){
        int currentChar = 0;
        do {
            currentChar = fgetc(fichier);
            if(currentChar == '\n'){
                count += 1;
            }
        }while(currentChar != EOF);
        fclose(fichier);

    }else{
        printf("Cannot open file %s", filename);
    }

    return count;
}
