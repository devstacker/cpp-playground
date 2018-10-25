// 12~15강. 제어문(if,switch,while)

#include <stdio.h>

int main() {

    // switch, goto

    int choice;

    makeChoice:

    printf("새 게임 : 1\n");
    printf("불러오기 : 2\n");
    printf("설정 : 3\n");
    printf("크레딧 : 4\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("새 게임\n");
        break;
    case 2:
        printf("불러오기\n");
        break;
    case 3:
        printf("설정\n");
        break;
    case 4:
        printf("크레딧\n");
        break;
    default:
        printf("잘못 입력하셨습니다.");
        goto makeChoice;
        break;

    /*
    // if

	if (choice == 1) printf("새 게임 입니다.");
	else if (choice == 2) printf("불러오기 입니다.");
	else if (choice == 3) printf("설정 입니다.");
	else if (choice == 4) printf("크레딧 입니다.");
	else printf("잘못 입력하셨습니다.");
	*/

    // while
	int i = 1;

	while (i < 10) {
		printf("%d ", i);
		i++;
	}


    // do-while
    int a = 1;
    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= 10);


    int n;
    do
    {
        printf("제발 0을 입력해주세요.\n");
        scanf("%d", &n);
    } while (n != 0);
    printf("드디어 0을 입력하셨군요!\n");


}
