/* 
3. 일의 자릿수가 3,6,9인 경우 *
1, 2, *, 4, 5, *, 7, 8, *, ...
*/

#include <stdio.h>

int main() {
    int n;
    printf("숫자입력 : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int k = i % 10; // i의 일의 자리수를 k에 저장
        if (k == 3 || k == 6 || k ==9) {
            printf("* ");
            continue;
        }
        else printf("%d ", i);
    }
    printf("\n");
}