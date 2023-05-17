#include<stdio.h>
#include<string.h>
#include<stdlib.h>


size_t getOriginalSize(char *encodedString) {
    size_t originalSizeLength = 0;
    int length = strlen(encodedString);

    for (size_t i = 0; i< length; i++) {
        switch (encodedString[i])
        {
            case '$':
                originalSizeLength+=5;
                break;
            
            default:
                originalSizeLength+=1;
                break;
        }
    }

    return originalSizeLength;
}

char *replaceStrings(char *encodedString) {
    int length = strlen(encodedString);
    char *decodedString =  (char*) malloc(sizeof encodedString * length);
    for (int i = 0; i<length; i++) {

    }

    return decodedString;
}


int main(void) {

    return 0;
}