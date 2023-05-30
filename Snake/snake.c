#include <stdio.h>
#include <stdlib.h>

#define ARENA_WIDTH 50
#define ARENA_HEIGHT 50

void prompt(){
	int c, b;
	printf("Enter a name: \n");
	while(EOF != (c = getchar())){
		putchar(c);	
	}
}

void drawArena(){
	for (int i = 0; i < ARENA_HEIGHT; i++){
		printf("|");
		for (int j = 1; j < ARENA_WIDTH; j++){
			if (i == 0) {
				printf("-");	
			} else if(i == ARENA_HEIGHT - 1) {
				printf("_");	
			} else {
				printf(" ");
			}
		}
		printf("|\n");
	}	
}

//Driver function
int main (){
	drawArena();
	return 0;
}
