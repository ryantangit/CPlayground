#define ARENA_WIDTH 50
#define ARENA_HEIGHT 50

struct gameboard {
	unsigned short score;
	char** board;
};

struct gameboard* initiate_board();
void print_gameboard(struct gameboard *board);

