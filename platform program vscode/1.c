// Read from STDIN, Write to STDOUT
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/io-exercise/?update=google&purpose=login&source=login
#include <stdio.h>

int main(){
	int num;
	char s[50];
	scanf("%d", &num);           	                  // Reading input from STDIN
	scanf("%s", s);
	printf("%d\n", num*2);     // Writing output to STDOUT
	printf("%s", s);
	return 0;
}
