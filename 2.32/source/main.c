#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1;
	float num2;

	printf("Enter your weight(kg): ");
	scanf_s("%f", &num1);
	printf("Enter your height(m): ");
	scanf_s("%f", &num2);
	printf("BMI : %.2f", num1 / num2 / num2);

	system("pause");
	return 0;
}