// 21강. 배열 활용

// 1. 입력받은 숫자들을 거꾸로 출력
// 2. 최대, 최소
// 3. 짝수의 개수

#include <stdio.h>

int main() {

	// 1
	int n;
	int arr[1000];

	printf("입력할 숫자의 개수: ");
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
	printf("최대값을 알려줄께. 입력할 수의 개수를 먼저 입력해: ");
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

	printf("입력할 숫자의 개수: ");
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
