#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요=");
	scanf("%d", &score);
	if (score == 0) printf("1 : 0점입니다.\n");
	if (!score) printf("2: 0점 입니다.\n");
	if (score != 0) printf("1:0점 아닙니다.\n");
	if (score) printf("2: 0점이 아닙니다.\n");
	return 0;
}
// 예제 7-1 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int score;
//	printf("당신의 점수를 입력하고 Enter를 누르세요 =");
//	scanf("%d", &score);
//	if (score < 60)
//		printf("60점미만으로 재수강 해야 합니다.\n");
//	return 0;
//}