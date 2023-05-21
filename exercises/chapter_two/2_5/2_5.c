#include <stdio.h>

int any(char s1[], char s2[]){
	int index = -1;
	for(int i = 0; s1[i] != '\0'; i++){
		for (int j = 0; s2[j] != '\0'; j++){
			if ((s1[i] == s2[j] && index > i) || index == -1)
				index = i;	
		}
	}
	return index;
}

int main(){
	char test[] = "helllloooo world";
	char filter[] = "hd";
	printf("%d\n", any(test, filter));
	return 0;
}
