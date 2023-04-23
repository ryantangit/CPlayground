//Write a program to count blanks, tabs and newlines
#include <stdio.h>

int main() {	
	int c, count;
	count = 0;

	while((c = getchar()) != EOF){
		if(c == '\n' || c == ' ' || c == '\t'){
			++c;
		}
	}
	return 0;
}


