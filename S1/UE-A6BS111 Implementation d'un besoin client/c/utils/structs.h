#ifndef SAE_STRUCTURE_H
#define SAE_STRUCTURE_H

typedef struct Person Person;
struct Person{
    char nom[100];
    char prenom[100];
    char postalCode[100];
    char ville[100];
    char phoneNumber[40];
    char email[100];
    char metier[100];
};

#endif //SAE_STRUCTURE_H
