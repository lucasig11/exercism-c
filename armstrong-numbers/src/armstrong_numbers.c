#include "armstrong_numbers.h"

int intlen(int n) {
    if (n == 0) return 1;
    int count = 0;

    for (int i = n; i >= 1; i /= 10) 
        count++;
    
    return count;
}

// long _pow(long n, long p) 
// {
//     long result = 1;
//     for (int i = 0; i < p; i ++)
//         result *= n;
//     return result;
// }

bool is_armstrong_number(int candidate) {
    int digit_count = intlen(candidate);
    int sum = 0;

    for (int i = candidate; i >= 1; i /= 10) {
        int last_digit = i % 10;
        sum += powl(last_digit, digit_count);
    }

    return sum == candidate;
}