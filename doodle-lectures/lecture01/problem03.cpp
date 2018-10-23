/*
3. 알파벳을 입력받아 그 다음 알파벳을 출력하는 프로그램.
*/

#include <stdio.h>

int main() {
	char alpha;

	printf("===알파벳을 입력하면 그 다음 알파벳을 출력하는 프로그램===\n");
	printf("알파벳 입력: ");
	scanf_s("%c", &alpha);
	printf("그 다음 알파벳은 %c입니다.", alpha + 1);
}