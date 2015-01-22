#include <stdio.h>
#define MAXLINE 1000	/* maximum input line length */

int get_line(char line[], int maxline);
/* saves next line to line and returns its length */
void copy_line(char to[], char from[]);
/* saves second to first */

main() {
/* print the longest input line */
	int len;				/* current line length */
	int max;				/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];	/* longest line saved here */
	
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy_line(longest, line);
		}
	
	if (max > 0)	/* ie, there was at least one line */
		printf("%s", longest);
	return 0;
}

int get_line(char s[], int lim) {
/* getline: saves next line to first argument and returns said line's length */
	int c, i;
	
	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void copy_line(char to[], char from[]) {
/* copy: copies second argument to first argument */
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

