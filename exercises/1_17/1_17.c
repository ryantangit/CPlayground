#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* print input lines with greater than 80 chars */
int main(){
	int len = 0;
	char line[MAXLINE];

	while((len = getlines(line, MAXLINE)) > 0) {
		if (len > 80) {	
			printf("%s \n", line);
		}	
	}
	return 0;
}

int getlines(char s[], int lim){
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	printf("%d \n", i);
	return i;
}



