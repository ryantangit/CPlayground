//Write a program to count blanks, tabs and newlines
//Hard to trigger EOF unless ctrl-D
#include <stdio.h>

int main() {	
	int c, count;
	count = 0;

	while((c = getchar()) != EOF){
		if(c == '\n' || c == ' ' || c == '\t'){
			++count;
		}
	}
	printf("The total count for blanks, tabs and newlines is: %d\n", count); 	
}


