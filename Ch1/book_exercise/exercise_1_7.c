/* write a program to print the value of EOF*/
#include <stdio.h>
int main() {
	
	int c;
	while((c = getchar()) != EOF) {
    	putchar(c);
	}
	return 1;
}
