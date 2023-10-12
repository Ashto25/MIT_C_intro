#include <stdio.h>

void amaze1() {
	for (int i=1; i<10; i += 2) {
		printf("%d, ", i);
	}
	printf("\n");
}


void amaze2() {
	for (int i=0; i<5; i++) {
		printf("%d, ", 1+i*2);
	}
	printf("\n");
}

void amaze3() {
	int i = 0;
	while (i < 10) {
		if (i%2 != 0) printf("%d, ", i);
		i++;
	}
	printf("\n");
}

void amaze4() {
	int i = 1;
	do {
		printf("%d, ", i);
		i += 2;
	} while (i < 10);
	printf("\n");
}

void amaze5() {
	int i = 1;
	goto inc;
inc:
	printf("%d, ", i);
	i += 2;
	goto check;
check:
	if (i < 10) goto inc;
	goto end;
end:
	printf("\n");
}

void amaze6() {
	int i = 0;
check:
	switch(i){
	case 1:
		goto print;
	case 3:
		goto print;
	case 5:
		goto print;
	case 7:
		goto print;
	case 9: 
		goto print;
	default:
		if (i>10) goto end;
		i++;
		goto check;
	}
print:
	printf("%d, ", i);
	i++;
	goto check;
end:
	printf("\n");
}

void amaze7() {
	for (int i=0; i < 10; i++) {
		if (i%2 ==1) printf("%d, ", i);
	}
	printf("\n");
}
	

int main(){
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();
	amaze7();
	return 0;
}
