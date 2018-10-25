/*
1. 두 숫자(정수)를 입력받아서 그 숫자들의 합을 출력하는 프로그램.
*/

#include <stdio.h>

int main() {
	int num1, num2;
	printf("===두 숫자를 입력받아 합을 출력===\n");
	printf("첫번째 숫자를 입력해주세요 : ");
	scanf_s("%d", &num1);
	printf("두번째 숫자를 입력해주세요 : ");
	scanf_s("%d", &num2);

	printf("두 수의 합은: %d입니다.", num1 + num2);
}