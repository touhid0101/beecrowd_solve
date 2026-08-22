// 1049 - Animal - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // taking 3 strings as input
    char word1[15], word2[15], word3[15];
    scanf("%s %s %s", word1, word2, word3);

    if (strcmp(word1, "vertebrado") == 0 // clang-format off
        && strcmp(word2, "ave") == 0
        && strcmp(word3, "carnivoro") == 0) {

        printf("aguia\n");

    } else if(strcmp(word1, "vertebrado") == 0
        && strcmp(word2, "ave") == 0
        && strcmp(word3, "onivoro") == 0) {

        printf("pomba\n");

    } else if(strcmp(word1, "vertebrado") == 0
        && strcmp(word2, "mamifero") == 0
        && strcmp(word3, "onivoro") == 0) {

        printf("homem\n");

    } else if(strcmp(word1, "vertebrado") == 0
        && strcmp(word2, "mamifero") == 0
        && strcmp(word3, "herbivoro") == 0) {

        printf("vaca\n");

    } else if(strcmp(word1, "invertebrado") == 0   
        && strcmp(word2, "inseto") == 0
        && strcmp(word3, "hematofago") == 0) {

        printf("pulga\n");

    } else if(strcmp(word1, "invertebrado") == 0
        && strcmp(word2, "inseto") == 0
        && strcmp(word3, "herbivoro") == 0) {

        printf("lagarta\n");

    } else if(strcmp(word1, "invertebrado") == 0
        && strcmp(word2, "anelideo") == 0
        && strcmp(word3, "hematofago") == 0) {

        printf("sanguessuga\n");

    } else if(strcmp(word1, "invertebrado") == 0
        && strcmp(word2, "anelideo") == 0
        && strcmp(word3, "onivoro") == 0) {
            
        printf("minhoca\n");
    }

    return 0;
}
