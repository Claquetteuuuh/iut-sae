#ifndef SAE_PARSEREGEX_H
#define SAE_PARSEREGEX_H
#include "structs.h"
#include <stdio.h>

void fileToLs(FILE *annuaire, Person *ThoseGuy, int taille);
void lineToStruct(FILE *fichier, int line, Person* guy);

#endif //SAE_PARSEREGEX_H
