#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1;
	float num2;
	float num3;

	printf("enter two integers: ");
	scanf_s("%d%d", &num1, &num2);

	num3 = num1 / num2;

	printf( "%.2f",num3);

	system("pause");
	return 0;
}