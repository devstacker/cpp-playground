// 23��. ���ڿ�

#include <stdio.h>
#include <string.h>

int main() {
	// C++������ string�̶�� ���ο� �ڷ����� ��
	char arr[] = "Hello, world!";
	printf("%s\n", arr);

	// 13�����ε� �� ũ�Ⱑ 14�ϱ�?
	// ������ ���ڿ��� ���� �˸��� '\0' �ι��ڰ� �������� �߰��Ǽ� ���� �����̶�� ��
	printf("�迭�� ũ�� : %d\n", sizeof(arr) / sizeof(char)); //14

	char s[100] = "C++ Hello";
	scanf_s("%s\n", s); // ���ڿ��� �Է����� ������ &������ ����

	int len;
	len = strlen(s);
	printf("���ڿ��� ���̴� %d\n", len);
	
	char str1[] = "MOON";
	char str2[100];

	strcpy_s(str2, str1); // copy
	printf("str2�� �� : %s\n", str2); // MOON

	strcat_s(str2, "LIGHT"); // ���ڿ� ����
	printf("%s\n", str2);

	
	int cmp = strcmp(str2, str1); // str1�� ���������� ���ʿ� ������ -1, �ڸ� 1, ������ 0
	printf("%d\n", cmp);

}