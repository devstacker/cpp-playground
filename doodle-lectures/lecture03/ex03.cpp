// 22��. 2���� �迭

#include <stdio.h>

int main() {
	int arr[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 }
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	// �Ľ�Į�� �ﰢ��
	/*
	   1
	  1 1
	 1 2 1
	1 3 3 1
	...
	j == 0 || j == i -> 1
	i�� j�� = [i-1 j-1] + [i-1 j]
	*/





}