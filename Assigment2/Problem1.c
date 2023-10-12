#include <stdio.h>

int main(int argc, char ** argv) {
	int i = 1;
	
verify:
	if (i < argc) {
		goto run;
	}
	goto end;
run:
	printf("%s\n", argv[i]);
	i++;
	goto verify;
end:
	return 0;
}
