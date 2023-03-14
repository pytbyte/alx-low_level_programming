#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */

char* argstostr(int ac, char** av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    int total_len = 0;
    for (int i = 0; i < ac; i++) {
        total_len += strlen(av[i]) + 1; // +1 for the \n character
    }

    char* new_str = (char*) malloc(sizeof(char) * total_len);
    if (new_str == NULL) {
        return NULL;
    }

    int pos = 0;
    for (int i = 0; i < ac; i++) {
        strcpy(new_str + pos, av[i]);
        pos += strlen(av[i]);
        new_str[pos] = '\n';
        pos++;
    }

    return new_str;
}
