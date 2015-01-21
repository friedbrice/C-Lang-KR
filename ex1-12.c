#include <stdio.h>

main() {
	replaceWhitespace();
	trimWhitespace();
	return 0;
}

replaceWhitespace() {
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}

	return 0;
}

trimWhitespace() {
	int c, n;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			putchar(c);
			while ((n = getchar()) == '\n') {
				;
			}
			c = n;
		}
	putchar(c);
	}
	
	return 0;
}

