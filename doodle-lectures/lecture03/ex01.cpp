// 20��. �迭

#include <stdio.h>

int main() {
	int a[5];
	for (int i = 0; i <= 4; i++) {
		a[i] = i * 5;
	}
	for (int i = 0; i <= 4; i++) {
		printf("%d\n", a[i]);
	}

	// array
	int arr[] = { 3, 1, 4, 1, 5 };
	//sizeof(arr) int�� 4byte�̹Ƿ� 20byte
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}