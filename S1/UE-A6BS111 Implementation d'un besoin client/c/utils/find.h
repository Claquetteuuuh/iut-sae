
#ifndef SAE_FIND_H
#define SAE_FIND_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

void findInfo(char* categorie, int line, Person *annuaire);
void findAll(char* name, Person *annuaire, int size);
int findBy(char* categorie, char* string, Person *annuaire, int size);

#endif //SAE_FIND_H
