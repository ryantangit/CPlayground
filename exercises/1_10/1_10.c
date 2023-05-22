#include <stdio.h>

int main(){
	printf("This program is suppose to sub out backslash, backspace, and tabs with \\ notations \n");	
	int c = 0;
	while (EOF != (c = getchar())) {
	
		if (c == '\t'){
			putchar('\\');
			putchar('t');
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}

	}

	return 0;
}
