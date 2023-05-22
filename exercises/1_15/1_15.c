#include <stdio.h>

#define LOWER 0
#define UPPER 220 // dunno how big it was, too lazy to check
#define STEP 20			  

double F_to_C(double fahr){
	return (5.0 / 9.0) * (fahr - 32.0);
}

int main () {
	printf("The following is fahrenheit converted to Celsius \n");
	for(double fahr = 0.0; fahr <= UPPER; fahr += STEP){
		printf("%3.0f, %6.1f \n",fahr, F_to_C(fahr));
	}
	return 0;
}


