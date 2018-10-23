# include <stdio.h>


// 4~5강. 변수와 자료형


int main() {

	/*
	// 1. int: 32bit(4byte), 정수형
	int a; // 선언
	a = 3; // 대입
	printf("%d\n", a); //3
	a = 5; // 대입
	printf("%d\n", a); //5
	int b = 2; // 초기화
	
	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;
	
	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d % %d = %d\n", a, b, namuji);
	*/

	
	// 2. float: 32bit(4byte), 실수형 (부동소수점 floating point)
	// 실수를 담기엔 좀 작음. 오차를 최소한으로 줄이기 위해 자료형 double을 많이 쓴다고 함.
	
	float a = 9.8;
	float b = 3.14;

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

	// 3. double: 64bit(8byte), 실수형
	// float에 비해 저장공간이 2배라서 double..
	// 표현가능한 숫자의 개수는 제곱(정확도 높음)


} 