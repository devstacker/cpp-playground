#include <stdio.h>

// 8��. char���� ASCII�ڵ�

int main() {
	// char(1byte) ������
	// character: ���� (�ݰ����� ABCabc123_+/;%) - ��������(�ѱ�/����/�Ϻ��� ��) ����
	// ASCII (American Standard Code for Information Interchange) ����-����

	char a = 67;
	printf("%d\n", a); //67
	printf("%c\n", a); //C
	printf("%c\n", 'a'); //a
	printf("%d\n", 'C'); //67

	//char b;
	//printf("���� �Է�: ");
	//scanf_s("%c\n", &b);
	//printf("%c�� ASCII ��: %d\n", b, b);

	int c;
	printf("���� �Է�: ");
	scanf_s("%d\n", &c);
	printf("%d�� ASCII ����: %c\n", c, c);
}