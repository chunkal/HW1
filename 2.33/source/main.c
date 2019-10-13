#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1, num2, num3, num4, num5,total;

	printf("一整天的總里程數:");
	scanf_s("%f", &num1);
	printf("汽油一公升多少錢:");
	scanf_s("%f", &num2);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f", &num3);
	printf("一天的停車費:");
	scanf_s("%f", &num4);
	printf("一天的通行費(過路費):");
	scanf_s("%f", &num5);

	total = num1 / num3 * num2 + num4 + num5;
	printf("%.0f",total);

	system("pause");
	return 0;
}