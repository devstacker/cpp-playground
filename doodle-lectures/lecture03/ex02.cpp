// 21��. �迭 Ȱ��

// 1. �Է¹��� ���ڵ��� �Ųٷ� ���
// 2. �ִ�, �ּ�
// 3. ¦���� ����

#include <stdio.h>

int main() {

	// 1
	int n;
	int arr[1000];

	printf("�Է��� ������ ����: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

	// 2
	int num;
	int arr[100];
	printf("�ִ밪�� �˷��ٲ�. �Է��� ���� ������ ���� �Է���: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf_s("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < num; i++) {
		if (max < arr[i]) max = arr[i];
	}
	printf("%d\n", max);

	// 3
	int a;
	int arr[100];

	printf("�Է��� ������ ����: ");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf_s("%d", &arr[i]);
	}

	int cnt = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
}
