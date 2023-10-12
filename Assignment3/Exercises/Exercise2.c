#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* str = (char*)malloc(15*sizeof(char));
	strcpy(str, "hakuna matata!");
	
	printf("%s\n", str);
	
	free(str);

	return 0;
}

