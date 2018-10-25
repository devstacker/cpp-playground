// 19강. 연습문제

/*
1. 시험점수 입력
90~100 A
80~89 B
70~79 C
60~69 D
50~59 E
*/

#include <stdio.h>

int main() {

    int score;
    repeat:
    printf("점수를 입력하세요! : ");
    scanf("%d", &score);

    if (score > 100 || score < 0) {
        printf("잘못 입력하셨습니다.\n");
        goto repeat;
    } 
    else if (score >= 90) printf("A\n");
    else if (score >= 80) printf("B\n");
    else if (score >= 70) printf("C\n");
    else if (score >= 60) printf("D\n");
    else if (score >= 50) printf("E\n");
    else printf("F\n");


}
