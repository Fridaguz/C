/* verify the expression getchar () != 0 EOF is 0 or 1*/
#include <stdio.h>
main()
{
	
	int c;
	while(c = (getchar() != EOF))
	putchar(c);
	
}
