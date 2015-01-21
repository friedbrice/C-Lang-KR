#include <stdio.h>

/* copy input to output; 2st version */

main() {
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
	
	/*	
	ex16();
	ex17();
	*/

	return 0;
}

ex16() {
	int d;
	
	d = getchar() != EOF;
	printf("\n%d\n", d);
}

ex17() {
	printf("\n%d\n", EOF);
}

