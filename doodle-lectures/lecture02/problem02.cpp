/*
2. 입력한 자연수의 약수를 출력하세요.
*/

#include <stdio.h>

int main() {
    int n;
    printf("자연수를 입력하세요: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d, ", i);
        }
    }
}
