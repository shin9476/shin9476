//���� 7.9
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char ch;
	printf("Ű����� Ű �ϳ��� �Է��ϼ���=");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z') printf("���� �ҹ��� �Դϴ�.\n");
	else printf("���� �ҹ��ڰ� �ƴմϴ�.\n");
	return 0;
}



//���� 7.7
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int num1, num2, max;
//	printf("�ΰ��� �ٸ� ���� �Է��ϰ� Enter�� ��������=");
//	scanf("%d %d", &num1, &num2);
//	if (num1 > num2)max = num1;
//	else max = num2;
//	//max=(num1 > num2) ? num1 : num2 ;
//	printf("�� ū���� %d �Դϴ�\n", max);
//	return 0;
//}





//���� 7.6
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int score;
//	printf("����� ������ �Է��ϰ� Enter�� ��������=");
//	scanf("%d", &score);
//	if (score < 60) {
//		printf("60�� �̸��̹Ƿ� ����� �ؾ� �մϴ�.\n");
//	}
//	else printf("60�� �̻��̹Ƿ� Pass �Դϴ�\n");
//	return 0;
//}



//���� 7.5]
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int num1, num2;
//	printf("�� ���� �ٸ� ���� �Է��ϰ� Enter�� ��������=");
//	scanf("%d %d", &num1, &num2);
//	if (num1 > num2) printf(" �� �� �� �� ū ���� %d�Դϴ�\n", num1);
//	if (num1 < num2) printf(" �� �� �� �� ū ���� %d�Դϴ�\n", num2);
//	//else printf("�� �� �� �� ū ���� %d �Դϴ�.\n" , num2);
//	return 0;
//}

//����7.4
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int num;
//	printf("�ֹε�Ϲ�ȣ �� �ڸ��� ù ��° ���ڸ� �Է��ϼ���=");
//	scanf("%d", &num);
//	if (num == 1|| num ==3) printf("����� �����̱���!\n");
//	if (num == 2|| num ==4) printf("����� �����̱���!\n");
//	return 0;
//}



//���� 7.3  if�� ����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)    
//{
//	int score;
//	printf("����� ������ �Է��ϰ� Enter�� ��������=");
//	scanf("%d", &score);
//	if (score >= 90 && score < 95) printf("1 : A\n");
//	if (90 <= score < 95) printf("2 : A\n");
//	return 0;
//}