#include <stdio.h>

int power(int, int);

/* test power function */
main () {
	int i;
	
	printf("i\t2^i\t(-3)^i\n");
	printf("----------------------\n");
	for (i = 0; i < 10; ++i)
		printf("%d\t%d\t%d\n", i, power(2,i), power(-3,i));
	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) {
	int i, p;
	
	p = 1;
	for (i = 1; i <= n; i++)
		p = p * base;
	return p;
}

