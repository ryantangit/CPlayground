#include "gameboard.h"
#include "stdio.h"
#include "malloc.h"

struct gameboard* initiate_board(){
	struct gameboard* board = (struct gameboard*)malloc(sizeof(struct gameboard));
	board->board = (char**)malloc(sizeof(char*) * ARENA_HEIGHT);
	for (int i = 0; i < ARENA_HEIGHT; i++){
		board->board[i] = (char*)malloc(sizeof(char) * ARENA_WIDTH);
		for (int j = 0; j < ARENA_WIDTH; j++){
			board->board[i][j] = '!';
		}
	}
	return board;
}

void print_gameboard(struct gameboard *board){
	for (int i = 0; i < ARENA_HEIGHT; i++){
		printf("|");
		for (int j = 1; j < ARENA_WIDTH; j++){
			if (i == 0) {
				printf("-");	
			} else if(i == ARENA_HEIGHT - 1) {
				printf("_");	
			} else {
				printf("%c", board->board[i][j]);
			}
		}
		printf("|\n");
	}	
}


