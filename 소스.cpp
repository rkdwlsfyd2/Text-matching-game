// 문자 맞추기 게임
#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	int tryr = 0;
	char ans = 'f';
	char chr;

	printf("======== 문자 맞추기 게임 ========\n\n");
	do {
		printf("문자를 입력하시오: ");
		scanf_s(" %c", &chr); // 띄워쓰기 필수!!
		tryr++;

		if (chr > ans)
			printf("아스키 코드 값이 너무 높습니다.\n");
		if (chr < ans)
			printf("아스키 코드 값이 너무 낮습니다.\n");
	} while (chr != ans); // do while은 맨 밑에 조건식이 있음 


	printf("축하합니다. 시도횟수 = %d번\n", tryr);
	return 0;
}