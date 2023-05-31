#include <stdio.h>
#include "gameboard.h"

//Driver function
int main (){
	struct gameboard* board = initiate_board();
	print_gameboard(board);
	return 0;
}
