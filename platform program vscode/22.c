//7. Reverse Integer
//https://leetcode.com/problems/reverse-integer/submissions/2188700898/
#include <limits.h>

int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        rev = rev * 10 + digit;
    }

    return rev;
}
