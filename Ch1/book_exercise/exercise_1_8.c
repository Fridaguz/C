/* write a program to count blanks, tabs, and newlines */
#include <stdio.h>
main ()
{
	int c, b, t, nl;
	
	b = t = nl = 0;
	
	while ((c = getchar()) != EOF){
		    ++b;
		
		if(c=='\n')
			++nl;
		
		if(c==' '||c=='\n'||c=='\t')
			++t;
		}
	}
	printf("%d%d%d\n", b, nl, t);
	
}
