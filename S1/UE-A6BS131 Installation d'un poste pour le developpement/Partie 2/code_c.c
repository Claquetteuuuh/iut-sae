#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc < 3){
        return -1;
    }else{
        printf("%s", argv[1]);
        float calcul= atof(argv[1])/ atof(argv[2]);
        float quotient=calcul;
        printf("%f/%f =%f quotient=%f diviseur=%f", atof(argv[1]), atof(argv[2]),calcul,quotient, atof(argv[2]));
        if(atof(argv[2])==0){
            return 1;
        }
        if((atof(argv[1])<0 || atof(argv[2])<0) && atof(argv[2])!=0){
            return 2;
        }
        return 0;
    }
}