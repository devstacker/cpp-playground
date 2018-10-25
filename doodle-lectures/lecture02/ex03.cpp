// 16~18강. 제어문(for)

#include <stdio.h>

int main() {

    // ex1) 입력한 숫자보다 작은 제곱수들 출력 (1, 2, 4, ...)
    int n;
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i *= 2) {
        printf("%d\n", i);
    }

    // ex2) 1~n까지 숫자의 합 출력
    int num;
    printf("몇까지 더할까요? 숫자를 입력해주세요.");
    scanf("%d", &num);

    int sum;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    printf("%d까지의 합은 %d입니다.\n", num, sum);


    // break : 반복문 한개를 빠져나옴
    // continue : 건너뛰고 다음 루프 진행
   
    // ex3) 1번째 : 8, 2번째 : 12, ...
    for(int i = 1; ; i++) {
        int k;
        printf("입력값 확인하기(0일경우 종료)\n");
        scanf("%d", &k);

        if (k == 0) {
            break; //중괄호 밖을 빠져나가서 for문 종료됨
        }
        printf("%d번째 값: %d\n", i, k);
    }

    // ex4) 3의배수를 제외한 합계 구하기
    int x;
    int sum2 = 0;
    printf("3의 배수를 제외한 값을 더합니다. 몇까지 더할까요?");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++) {
        // if (i % 3 != 0) {
        //     sum2 += i;
        // }
        if (i % 3 == 0) {
            continue;
        }
        sum2 += i;
    }
    printf("%d까지 더한 값은 %d입니다.\n", x, sum2);


    // ex5) 입력한 수만큼 순차적으로 별찍기
    int f;
    printf("층수를 입력하세요: ");
    scanf("%d", &f);
    
    for (int i = 1; i <= f; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }




}