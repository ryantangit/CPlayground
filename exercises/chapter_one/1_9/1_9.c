#include <stdio.h>

int main(){
	printf("Enter a stream of text, the programming will condense multiple blanks into one blank\n");	
	int c;
	int ignore = 0;
	while ((c = getchar()) != EOF) {
		if (!ignore) {
			if (c == ' ')
				ignore = 1;	
			putchar(c);
		} else {
			if (c != ' ') {
				ignore = 0;
				putchar(c);
			}
		}
	}
	return 0;
}
