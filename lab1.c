/*
 * Implement your solution in this file
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* readString(char* fileName){
    char string[100];

    FILE *f = fopen(fileName, "r");
    fgets(string, 100, f);
    string[strcspn(string, "\n")] = '\0';
    fclose(f);

    return strdup(string);
}

char* mysteryExplode(const char* str){
    int lenOfString = 0;

    for (int i = 1; i < strlen(str) + 1; i++){
        lenOfString += i;
    }

    char substring[strlen(str)];
    char * explodedString = malloc(lenOfString);
    substring[0] = '\0';
    explodedString[0] = '\0';

    for (int n = 0; n < strlen(str); n++){
        char substringToAdd[1]; 
        substringToAdd[0] = str[n];
        strcat(substring, substringToAdd);
        strncat(explodedString, substring, strlen(substring));
    }

    return strdup(explodedString);
}
