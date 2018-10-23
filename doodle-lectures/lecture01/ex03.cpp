#include <stdio.h>


// 6��. sizeof �����ڿ� ����ȯ


int main() {

	// 1. sizeof(x) : x�� ũ��
	// x: ��(int, float, ..), �����̸�
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	int a; char b; float c; double d;
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));



	// 2. ����ȯ : �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3; // ���� / �����̹Ƿ� avg�� 93�� �Ǳ⶧��

	printf("%f\n", avg); //93.666667�� ���;� ���������� 93.000000�� ��µ�

	// �ΰ��� ������ ū �ڷ����� ���� (+, -, *, / ����)
	// ���� / ���� = ����
	// �Ǽ� / ���� = �Ǽ�
	// �Ǽ� / �Ǽ� = �Ǽ�
	// ���ʿ� sum�� double�� �ٲ㼭 �����ص� ������ ���� ������ ����Ǵ� ������ double�� �ϴ°ͺ��� sum�� ��õ��� �Ǽ��� ������ִ� ��(����ȯ)�� �� ������.
	double trans_avg = (double)sum / 3; // (�Ǽ� / �����̹Ƿ� ����� �Ǽ��� ��)
	printf("%f\n", trans_avg); //93.666667
	/*
	int a = 3.14;
	double b = 10;
	printf("%d %f\n", a, b); // a=3, b=10.000000
	// �Ǽ��� ������ ������ ���� �� ����.
	// ������ �Ǽ��� ������ ���� �� �ִ�.
	*/
}