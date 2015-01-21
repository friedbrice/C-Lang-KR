#include <stdio.h>
#define LENGTH	100	/* array length */

main() {
	/* counts words by length, and prints a histogram */
	
	int i, c, l = 0, n[LENGTH];

	/* instantiate all entries of n as 0 */
	for (i = 0; i < LENGTH; i++)
		n[i] = 0;

	/* count words by length, write to n[] */
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			n[l]++;
			l = 0;
		}
		else
			l++;
	}
	
	/* print entries of n[], mostly for debugging
	for (i = 0; i < LENGTH; i++)
		if (n[i] == 0)
			;
		else
			printf("%d\t%d\n", i, n[i]);*/

	printf("\n");
	draw_histogram(n);
	return 0;
}

draw_histogram(int *a[]) {
	/* takes an int array (and it's size), and prints a histogram */
	int i, l = sizeof(*a) / sizeof(*a[0]);
	
	printf("%d", l);
	
	for (i = 1; i < l; i++) {
		if (*a[i] != 0) {
			printf("%d\t", i);
			while (*a[i] > 0) {
				printf("X");
				a[i]--;
			}
		printf("\n");
		}
	}
	
	return 0;
}
