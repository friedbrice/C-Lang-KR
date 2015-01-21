#include <stdio.h>

main() {
	int c;
	long n;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++n;
		if (c == '\t')
			++n;
		if (c == '\n')
			++n;
	}
	
	printf("%ld\n", n);
	
	return 0;
}

