#include <stdio.h>

main() {
	int c, n;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t')
			c = '\n';
		if (c == '\n') {
			putchar(c);
			n = getchar();
			while (n == '\n' || n == ' ' || n == '\t') {
				n = getchar();
			}
			c = n;
		}
	putchar(c);
	}

	return 0;
}

