#include <stdio.h>

int main() {
	int n = 100;

	for (int i=0; i <n; i++) {
		printf("%d, ",((i*i)+i)/2);
	}
	return 0;
}
