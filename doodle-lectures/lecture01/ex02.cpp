# include <stdio.h>


// 4~5��. ������ �ڷ���


int main() {

	/*
	// 1. int: 32bit(4byte), ������
	int a; // ����
	a = 3; // ����
	printf("%d\n", a); //3
	a = 5; // ����
	printf("%d\n", a); //5
	int b = 2; // �ʱ�ȭ
	
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

	
	// 2. float: 32bit(4byte), �Ǽ��� (�ε��Ҽ��� floating point)
	// �Ǽ��� ��⿣ �� ����. ������ �ּ������� ���̱� ���� �ڷ��� double�� ���� ���ٰ� ��.
	
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

	// 3. double: 64bit(8byte), �Ǽ���
	// float�� ���� ��������� 2��� double..
	// ǥ�������� ������ ������ ����(��Ȯ�� ����)


} 