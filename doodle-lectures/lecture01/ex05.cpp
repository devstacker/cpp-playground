#include <stdio.h>

// 8강. char형과 ASCII코드

int main() {
	// char(1byte) 정수형
	// character: 문자 (반각문자 ABCabc123_+/;%) - 전각문자(한글/한자/일본어 등) 제외
	// ASCII (American Standard Code for Information Interchange) 문자-숫자

	char a = 67;
	printf("%d\n", a); //67
	printf("%c\n", a); //C
	printf("%c\n", 'a'); //a
	printf("%d\n", 'C'); //67

	//char b;
	//printf("문자 입력: ");
	//scanf_s("%c\n", &b);
	//printf("%c의 ASCII 값: %d\n", b, b);

	int c;
	printf("숫자 입력: ");
	scanf_s("%d\n", &c);
	printf("%d의 ASCII 문자: %c\n", c, c);
}