#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("number   square   cube\n");
	for (int i=0; i <= 3; i++) {
		printf("%d       %d       %d\n",i,i*i,i*i*i);
	}
	for (int i = 4; i <= 4; i++) {
		printf("%d       %d      %d\n", i, i * i, i * i * i);
	}
	for (int i = 5; i <= 9; i++) {
		printf("%d       %d      %d\n", i, i * i, i * i * i);
	}
	for (int i = 10; i <= 10; i++) {
		printf("%d      %d     %d\n", i, i * i, i * i * i);
	}

	system("pasue");
	return 0;
}