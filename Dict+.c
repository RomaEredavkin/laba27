#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 10000
#define MAX_LEN_WORD 50

char words[MAX_WORDS][MAX_LEN_WORD + 1];
int numWords = 0;

void CreateDictionary() {
    numWords = 0;
}

void DestroyDictionary() {
    numWords = 0;
}

void AddWord(char* word) {
    if (numWords < MAX_WORDS) {
        strcpy(words[numWords], word);
        numWords++;
    }
}

int FindWord(char* word) {
    for (int i = 0; i < numWords; i++) {
        if (strcmp(words[i], word) == 0) {
            return 1;
        }
    }
    return 0;
}

