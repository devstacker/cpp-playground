/*
2. ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾� ü���� ������ ����ϴ� ���α׷�.
*/

#include <stdio.h>

int main() {
	float weight, height;

	printf("===����� BMI ������ ������ִ� ���α׷�===\n");
	printf("ü��(kg)�� �Է��ϼ���: ");
	scanf_s("%f", &weight);
	printf("Ű(m)�� �Է��ϼ���: ");
	scanf_s("%f", &height);

	float bmi = weight / (height * height);
	printf("����� BMI������ %f\n�Դϴ�.", bmi);
}