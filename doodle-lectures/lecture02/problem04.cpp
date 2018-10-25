/* 
  n = 4
  1
  1 3
  1 3 5
  1 3 5 7

  n = 4
  1
  1 2 3
  1 2 3 4 5
  1 2 3 4 5 6 7
*/

#include <stdio.h>

int main() {

    int n;
    printf("숫자입력 : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i -1; j += 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    int num;
    printf("숫자입력 : ");
    scanf("%d", &num);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}