// 23강. 문자열

#include <stdio.h>
#include <string.h>

int main() {
	// C++에서는 string이라는 새로운 자료형을 씀
	char arr[] = "Hello, world!";
	printf("%s\n", arr);

	// 13글자인데 왜 크기가 14일까?
	// 이유는 문자열의 끝을 알리는 '\0' 널문자가 마지막에 추가되서 들어가기 때문이라고 함
	printf("배열의 크기 : %d\n", sizeof(arr) / sizeof(char)); //14

	char s[100] = "C++ Hello";
	scanf_s("%s\n", s); // 문자열을 입력으로 받을땐 &붙이지 않음

	int len;
	len = strlen(s);
	printf("문자열의 길이는 %d\n", len);
	
	char str1[] = "MOON";
	char str2[100];

	strcpy_s(str2, str1); // copy
	printf("str2의 값 : %s\n", str2); // MOON

	strcat_s(str2, "LIGHT"); // 문자열 연결
	printf("%s\n", str2);

	
	int cmp = strcmp(str2, str1); // str1이 사전순으로 앞쪽에 있으면 -1, 뒤면 1, 같으면 0
	printf("%d\n", cmp);

}