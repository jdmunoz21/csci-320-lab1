/*
 * Implement your solution in this file
 *
 */

#include <stdio.h>
#include <string.h>

char* readString(char* fileName){
    char string;
}

char* mysteryExplode(const char* str){
    int lenOfString = 0;

    for (int i = 0; i < strlen(str) + 1; i++){
        lenOfString += i;
    }

    char substring[strlen(str)];
    char explodedString[lenOfString];
    substring[0] = '\0';
    explodedString[0] = '\0';

    for (int n = 0; n < strlen(str); n++){
        char substringToAdd = str[n];
        substring[n] = str[n];
        strcat(explodedString, substring);
    }

    printf("%s\n", explodedString);
    return 0;
}
