#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1;

	printf("Enter an integer: ");
	scanf_s("%d",&num1);

	if (num1 % 2 == 0) {
		printf("even");
	}

	if (num1 % 2 == 1) {
		printf("odd");
	}

	system("pause");
	return 0;
}