#include "isogram.h"

enum {
    alphabet_length = 26
};

bool is_isogram(const char phrase[])
{
    if (phrase == NULL) return false;

    bool word_has_char[alphabet_length] = {false};

    for (; *phrase; phrase++)
    {   
        unsigned char c = *phrase;

        if (isalpha(c) == 0) continue;

        const size_t char_to_index = toupper(c) - 'A';

        if (word_has_char[char_to_index]) return false;

        word_has_char[char_to_index] = true;
    }

    return true;
}