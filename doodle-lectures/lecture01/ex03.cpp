#include <stdio.h>


// 6강. sizeof 연산자와 형변환


int main() {

	// 1. sizeof(x) : x의 크기
	// x: 형(int, float, ..), 변수이름
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	int a; char b; float c; double d;
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));



	// 2. 형변환 : 자료형을 다른 자료형으로 바꾸는 작업
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3; // 정수 / 정수이므로 avg가 93이 되기때문

	printf("%f\n", avg); //93.666667이 나와야 정상이지만 93.000000이 출력됨

	// 두가지 변수중 큰 자료형을 따름 (+, -, *, / 동일)
	// 정수 / 정수 = 정수
	// 실수 / 정수 = 실수
	// 실수 / 실수 = 실수
	// 애초에 sum을 double로 바꿔서 선언해도 되지만 굳이 정수만 저장되는 변수에 double을 하는것보단 sum을 잠시동안 실수로 만들어주는 것(형변환)이 더 좋을것.
	double trans_avg = (double)sum / 3; // (실수 / 정수이므로 결과는 실수가 됨)
	printf("%f\n", trans_avg); //93.666667
	/*
	int a = 3.14;
	double b = 10;
	printf("%d %f\n", a, b); // a=3, b=10.000000
	// 실수를 정수형 변수에 담을 수 없다.
	// 정수를 실수형 변수에 담을 수 있다.
	*/
}