// 10~11��. ������ �����ϱ�

#include <stdio.h>

int main() {

	// ���������(+, -, *, /, %, =)
	// ���Կ�����(+=, -=, *=, /=, %=
	// ����������(++, --)
	// ��ġ�� ��ġ

	int a = 10;
	int b;

	//printf("=== ��ġ ���� ���� ===\n");
	//b = ++a; // a�� ���� ������Ű�� �״��� a�� b�� ����
		// a++;
		// b = a;
	//printf("a: %d\n", a); // 11
	//printf("b: %d\n", b); // 11

	printf("=== ��ġ ���� ���� ===\n");
	b = a++; // a�� b�� ���� ���� �״��� a�� ������Ŵ
		// �����ϴ� ����
		// b = a;
		// a++;    
	printf("a: %d\n", a); // 11
	printf("b: %d\n", b); // 10



	// �񱳿�����
	int x, y;
	scanf_s("%d%d", &x, &y);


	bool p = x > y;
	bool q = x < y;
	bool r = x == y; // ==: ����

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

	// ��������(&& (and) || (or ) !(not))

	bool p2 = (x > 11) && (a <= 50);
	bool q2 = y == 3 || y == 7;
	bool r2 = !q;
	printf("%d\n", p2);
	printf("%d\n", q2);
	printf("%d\n", r2);

}