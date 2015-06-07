#include <stdio.h>
#define MAXLINE 1000	/* maximum input line length */

int get_line(char line[], int maxline);
void trim_line(char line[]);
void reverse_line(char line[], int maxline);

main() {
	int length;				/* current line length */
	char line[MAXLINE];		/* current input line */
	
	while ((length = get_line(line, MAXLINE)) > 0) {
		trim_line(line);
		printf("%s", line);
	}

	return 0;
}

int get_line(char line[], int maxline) {
	int c, i;
	
	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

void trim_line(char line[]) {
	int i = 0;
	
	if (line[1] == '\0')
		return;
	
	reverse_line(line, MAXLINE);
	
	while (line[i] == ' ' || line[i] == '\t' || line[i] == '\n' || line[i] == '\0') {
		line[i] = '\0';
		i++;
	}
	
	i--;
	line[i] = '\n';
	i--;
	line[i] = '\0';
	
	reverse_line(line, MAXLINE);
	return;
}

void reverse_line(char line[], int maxline) {
	int i;
	char temp_line[maxline];
	
	for (i = 0; i < maxline; i++) {
		temp_line[i] = line[maxline - 1 - i];
	}
	
	line = temp_line;
	return;
}
