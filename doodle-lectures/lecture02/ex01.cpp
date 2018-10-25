// 10~11강. 변수로 연산하기

#include <stdio.h>

int main() {

    // 산술연산자(+, -, *, /, %, =)
    // 대입연산자(+=, -=, *=, /=, %=
    // 증감연산자(++, --)
    // 전치와 후치

    int a = 10;
    int b;

    //printf("=== 전치 증가 연산 ===\n");
    //b = ++a; // a를 먼저 증가시키고 그다음 a를 b에 대입
    // a++;
    // b = a;
    //printf("a: %d\n", a); // 11
    //printf("b: %d\n", b); // 11

    printf("=== 후치 증가 연산 ===\n");
    b = a++;              // a를 b에 먼저 저장 그다음 a를 증가시킴
                          // 권장하는 형태
                          // b = a;
                          // a++;
    printf("a: %d\n", a); // 11
    printf("b: %d\n", b); // 10

    // 비교연산자
    int x, y;
    scanf("%d%d", &x, &y);

    bool p = x > y;
    bool q = x < y;
    bool r = x == y; // ==: 같다

    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r);

    // 논리연산자(&& (and) || (or ) !(not))

    bool p2 = (x > 11) && (a <= 50);
    bool q2 = y == 3 || y == 7;
    bool r2 = !q;
    printf("%d\n", p2);
    printf("%d\n", q2);
    printf("%d\n", r2);

}