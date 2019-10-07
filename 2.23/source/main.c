#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	int num2;
	int num3;

	printf("Enter three integers: ");
	scanf_s("%d%d%d",&num1,&num2,&num3);

	if (num1 > num2 && num1 > num3) {
		printf("the largest is %d\n",num1);
	}
	if (num2 > num1 && num2 > num3) {
		printf("the largest is %d\n", num2);
	}
	if (num3 > num1 && num3 > num2) {
		printf("the largest is %d\n",num3);
	}
	if (num1 < num2 && num1 < num3) {
		printf("the smallest is %d\n", num1);
	}
	if (num2 < num1 && num2 < num3) {
		printf("the smallest is %d\n", num2);
	}
	if (num3 < num1 && num3 < num2) {
		printf("the smallest is %d\n", num3);
	}

	system("pause");
	return 0;
}