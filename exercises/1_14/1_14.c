#include <stdio.h>

#define TOTAL 256

int main (){
	int c;
	int counters[TOTAL];

	for(int i = 0; i < TOTAL; i++){
		counters[i] = 0;	
	}

	while (EOF != (c = getchar())){ 
		if (c < TOTAL){
			counters[c] += 1;
		}	
	}

	for (int i = 0; i < TOTAL; i++){
		printf("[%3d] ", i);
		for (int j = 0; j < counters[i]; j++)
			printf("|");
		printf("\n");
	}
	return 0;
}
