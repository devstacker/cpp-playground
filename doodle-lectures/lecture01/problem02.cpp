/*
2. 체중(kg, 실수)과 키(m, 실수)를 입력받아 체질량 지수를 출력하는 프로그램.
*/

#include <stdio.h>

int main() {
	float weight, height;

	printf("===당신의 BMI 지수를 계산해주는 프로그램===\n");
	printf("체중(kg)을 입력하세요: ");
	scanf_s("%f", &weight);
	printf("키(m)를 입력하세요: ");
	scanf_s("%f", &height);

	float bmi = weight / (height * height);
	printf("당신의 BMI지수는 %f\n입니다.", bmi);
}