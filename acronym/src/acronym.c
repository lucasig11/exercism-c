#include "acronym.h"

char* abbreviate(const char* word)
{   
    if (word == NULL) return NULL;
    if (strlen(word) <= 0) return NULL;

    char *acronym = malloc(64);

    for (size_t i = 0; word[i] != '\0'; i++)
    {
        if (i == 0 || !isalpha(word[i - 1]))
        {
            const char l = toupper(word[i]);
            if (isalpha(l))
                strncat(acronym, &l, 1);
        }
    }

    return acronym;
}