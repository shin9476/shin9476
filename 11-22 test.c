#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int score;
	printf("����� ������ �Է��ϰ� Enter�� ��������=");
	scanf("%d", &score);
	if (score == 0) printf("1 : 0���Դϴ�.\n");
	if (!score) printf("2: 0�� �Դϴ�.\n");
	if (score != 0) printf("1:0�� �ƴմϴ�.\n");
	if (score) printf("2: 0���� �ƴմϴ�.\n");
	return 0;
}
// ���� 7-1 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int score;
//	printf("����� ������ �Է��ϰ� Enter�� �������� =");
//	scanf("%d", &score);
//	if (score < 60)
//		printf("60���̸����� ����� �ؾ� �մϴ�.\n");
//	return 0;
//}