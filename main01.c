#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char vetor_1 [50] = "Tamires Maiolini";
    char vetor_2 [50];
    int i=0;

    for(i=0; i<51; i++){
        vetor_2[i] = vetor_1[i];
    }

    printf("%s", vetor_2);

    return 0;
}