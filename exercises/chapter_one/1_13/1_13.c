#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD_LEN 10

int main (){
	int c, count;
	int tracker[MAX_WORD_LEN + 1];
	for(int i = 0; i < MAX_WORD_LEN + 1; ++i){
		tracker[i] = 0;
	}
	count = 0;
	int state = OUT;	
	while(EOF != (c = getchar())){
		if (c == '\n' || c == '\t' || c == ' ') {
			if (state == IN){
				state = OUT;
				tracker[count] += 1;
				count = 0;		
			}
		} else {
			state = IN;
			count += 1;
		}
	}

	printf("Word frequencies:\n");
	for (int i = 1; i < MAX_WORD_LEN + 1; ++i){
		printf("<%2d> ", i);	
		for (int j = 0; j < tracker[i]; ++j) {
			printf("|");
		}
		printf("\n");
	}
	return 0;
}
