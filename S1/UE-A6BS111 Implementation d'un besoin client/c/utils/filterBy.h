#ifndef SAEFINITO_FILTERBY_H
#define SAEFINITO_FILTERBY_H
#include <stdio.h>
#include "../utils/fileToList.h"
#include "../utils/fillFile.h"
#include "../utils/addLine.h"
#include "../utils/structs.h"
#include "../utils/countLines.h"
#include <string.h>

void filterBy(FILE* annuaire, char* nom, char* nom_champ, char* val_chaine);
void filterByTwo(FILE* annuaire, char* nom, char* nom_champ1, char* val_chaine1, char* nom_champ2, char* val_chaine2);

#endif //SAEFINITO_FILTERBY_H
