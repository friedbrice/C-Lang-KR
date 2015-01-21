#include <stdio.h>

main() {
	int c, n;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((n = getchar()) == ' ') {
				;
			}
			c = n;
		}
	putchar(c);
	}
	
	return 0;
}

