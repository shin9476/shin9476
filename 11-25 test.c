//예제 7.9
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char ch;
	printf("키보드로 키 하나를 입력하세요=");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z') printf("영어 소문자 입니다.\n");
	else printf("영어 소문자가 아닙니다.\n");
	return 0;
}



//예제 7.7
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int num1, num2, max;
//	printf("두개의 다른 수를 입력하고 Enter를 누르세요=");
//	scanf("%d %d", &num1, &num2);
//	if (num1 > num2)max = num1;
//	else max = num2;
//	//max=(num1 > num2) ? num1 : num2 ;
//	printf("더 큰수는 %d 입니다\n", max);
//	return 0;
//}





//예제 7.6
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int score;
//	printf("당신의 점수를 입력하고 Enter를 누르세요=");
//	scanf("%d", &score);
//	if (score < 60) {
//		printf("60점 미만이므로 재수강 해야 합니다.\n");
//	}
//	else printf("60점 이상이므로 Pass 입니다\n");
//	return 0;
//}



//예제 7.5]
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int num1, num2;
//	printf("두 개의 다른 수를 입력하고 Enter를 누르세요=");
//	scanf("%d %d", &num1, &num2);
//	if (num1 > num2) printf(" 두 수 중 더 큰 수는 %d입니다\n", num1);
//	if (num1 < num2) printf(" 두 수 중 더 큰 수는 %d입니다\n", num2);
//	//else printf("두 수 중 더 큰 수는 %d 입니다.\n" , num2);
//	return 0;
//}

//예제7.4
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int num;
//	printf("주민등록번호 뒷 자리의 첫 번째 숫자를 입력하세요=");
//	scanf("%d", &num);
//	if (num == 1|| num ==3) printf("당신은 남성이군요!\n");
//	if (num == 2|| num ==4) printf("당신은 여성이군요!\n");
//	return 0;
//}



//예제 7.3  if문 예제
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)    
//{
//	int score;
//	printf("당신의 점수를 입력하고 Enter를 누르세요=");
//	scanf("%d", &score);
//	if (score >= 90 && score < 95) printf("1 : A\n");
//	if (90 <= score < 95) printf("2 : A\n");
//	return 0;
//}