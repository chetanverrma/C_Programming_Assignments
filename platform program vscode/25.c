//Factorial
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }

    printf("%d\n", fact);
    return 0;
}
