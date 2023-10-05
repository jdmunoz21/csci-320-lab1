/*
 * Implement your solution in this file
 *
 */

#include <stdio.h>
#include <string.h>

char* readString(char* fileName){
    static char string[100];

    FILE *f = fopen(fileName, "r");
    fgets(string, 100, f);
    fclose(f);

    return string;
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

    for (int n = 0; n < strlen(str) - 1; n++){
        char substringToAdd[1]; 
        substringToAdd[0] = str[n];
        strcat(substring, substringToAdd);
        strcat(explodedString, substring);
    }

    printf("%s\n", explodedString);
    return 0;
}
