#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1, num2, num3, num4, num5,total;

	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &num1);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &num2);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &num3);
	printf("�@�Ѫ������O:");
	scanf_s("%f", &num4);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &num5);

	total = num1 / num3 * num2 + num4 + num5;
	printf("%.0f",total);

	system("pause");
	return 0;
}