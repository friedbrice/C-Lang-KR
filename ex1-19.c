#include <stdio.h>
#define MAXLINE 1000	/* maximum input line length */

int get_line(char s[], int lim);
/* stores next line to $s and returns its length */
void reverse_line(char to[], char from[]);
/* stores reverse of $from to $to */

main() {
	/* print the longest input line */
	int len;				/* current line length */
	char newLine[MAXLINE];		/* current input line */
	char revLine[MAXLINE];	/* reverse of current line */
	
	while ((len = get_line(newLine, MAXLINE)) > 0) {
		/* if len == 0, there's no input and we're done */
		reverse_line(revLine, newLine);
		printf("%s", revLine);
	}
	return 0;
}

int get_line(char s[], int lim) {
/* getline: stores next line to s and returns said line's length */
	int c, i;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void reverse_line(char to[], char from[]) {
/* reverse_line: reverses second argument and stores to first argument */
	int i, j = 0;
	
	for (i = 0; i <= MAXLINE; i++) {
		if (from[MAXLINE - i] != '\0') {
			to[j] = from[MAXLINE - i];
			j++;
		}
	to[j] = '\0';
	}
}
