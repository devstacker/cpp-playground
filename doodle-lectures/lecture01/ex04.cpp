#include <stdio.h>


// 7강. 입력받기


int main() {
	float a, b;
	
	scanf_s("%f%f", &a, &b); // &: 포인터

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

}