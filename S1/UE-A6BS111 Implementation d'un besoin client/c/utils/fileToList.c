#include <stdio.h>
#include <stdlib.h>

#include "fileToList.h"
#include "structs.h"


void fileToLs(FILE *annuaire, Person *ThoseGuy, int taille){
    for (int i = 0; i < taille; ++i) {
        lineToStruct(annuaire, i+1, &ThoseGuy[i]);
    }
}

void lineToStruct(FILE *fichier, int line, Person* guy){
    fseek(fichier, 0, SEEK_SET);
    char currentChar = 0;
    int Thisline = 0;
    int column = 0;
    int partOf = 0;
    guy->metier[0] = '\0';
    do{
        currentChar = fgetc(fichier);
        if(currentChar == '\n'){
            if(Thisline == line){
                guy->metier[partOf] = '\0';
                break;
            }
            Thisline += 1;
        }
        if(Thisline == line-1){
            if(currentChar == ','){
                if(column == 0){
                    guy->nom[partOf] = '\0';
                }
                if(column == 1){
                    guy->prenom[partOf] = '\0';
                }
                if(column == 2){
                    guy->postalCode[partOf] = '\0';
                }
                if(column == 3){
                    guy->ville[partOf] = '\0';
                }
                if(column == 4){
                    guy->phoneNumber[partOf] = '\0';
                }
                if(column == 5){
                    guy->email[partOf] = '\0';
                }
                column += 1;
                partOf = 0;

            }else{
                if(column == 0){
                    guy->nom[partOf] = currentChar;
                    partOf+=1;
                }
                if(column == 1){
                    guy->prenom[partOf] = currentChar;
                    partOf+=1;
                }
                if(column == 2){
                    guy->postalCode[partOf] = currentChar;
                    partOf+=1;
                }
                if(column == 3){
                    guy->ville[partOf] = currentChar;
                    partOf+=1;
                }
                if(column == 4){
                    guy->phoneNumber[partOf] = currentChar;
                    partOf+=1;
                }
                if(column == 5){
                    guy->email[partOf] = currentChar;
                    partOf+=1;
                }
                if(column == 6){
                    guy->metier[partOf] = currentChar;
                    partOf+=1;
                }
            }

        }

    }while(currentChar != EOF);
}