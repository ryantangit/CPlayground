#include <string.h>
#include <stdio.h>

int strrindex(char s[], char t[]){
	int index = -1;
	int i, j, k;
	for(i = 0; s[i] != '\0'; i++){ 
		for(j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++);
		if (k > 0 && t[k] == '\0' && j > index){
			index = i;
		}
	}
	return index;
}

int main() {

	char test[] = "hello my boy hello my boy";
	char filter[] = "hello";
	printf("%d\n", strrindex(test, filter));
	return 0;
}
