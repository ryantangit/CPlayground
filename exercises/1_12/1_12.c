#include <stdio.h>
/* 
 * Puts each word on a different line
 * */
#define IN 1
#define OUT 0

int main(){
	
	int c;
	int state = OUT;
	printf("Program puts each word on a separate line: \n");
	while(EOF != (c = getchar())){
		if (c == ' ' || c == '\t' || c == '\n'){
		    if (state == IN){
				putchar('\n');
				state = OUT;
			}		
		} else {
			state = IN;
			putchar(c);
		}
	}
	return 0;
}
