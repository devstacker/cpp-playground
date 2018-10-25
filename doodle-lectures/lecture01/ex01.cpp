#include <stdio.h>


// 1~3강. Hello world


int main() {

	// printf (stdio.h 헤더파일에 정의 되어 있음)
	printf("Hello, World!\n");

	// 다양한 데이터 출력하기
	printf("%f\n", 3.14);
	printf("%.2f\n", 3.141592);

	printf("%g\n", 3.141592);
	printf("%.3g\n", 872342945872983471.2983749287423);

	printf("%c %c %c\n", 'a', 'b', 'c');

	printf("%s\n", "안녕하세요");

}