#include "hamming.h"

int compute(const char *lhs, const char *rhs)
{
    int lhs_len;
    int rhs_len;
    int count;
    
    lhs_len = strlen(lhs);
    rhs_len = strlen(rhs);
    count = 0;

    if (lhs_len != rhs_len) return -1;
    
    for (size_t i = 0; lhs[i] != '\0'; i++) 
        if (lhs[i] != rhs[i])
            count++;

    return count;
}