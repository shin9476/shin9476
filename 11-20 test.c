#include<stdio.h>
int main(void)
{
	int l = 0x12345678;
	printf("%x\n", (l >> 16) & 0xFFFF); // >>와 &의 의미는?
	return 0;
}




// chapt6 실습1
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int kor, eng , math,max;
//	printf(" kor,eng,math 점수를 입력하세요 :");
//	scanf("%d %d %d" , &kor ,&eng ,&math);
//	//max = (kor > eng) ? kor : eng;
//	max = (kor > eng) ? kor : eng;
//	printf("최대 점수는 : %d\n", (max > math) ? max : math);
//
//	printf("국영수 총점 : %d\n", (kor+ eng + math));
//	printf("국영수 평균 : %d\n", ((kor + eng + math) / 3));
//	return 0;
//}



//예제 6.16
//#include<stdio.h>
//int main(void)
//{
//	int a = 10, b = 20;
//	printf("변수 a의 값=%d, 주소=%p\n", a, &a);
//	printf("변수 b의 값=%d, 주소=%p\n", b, &b);
//	return 0;
//}



// sizeof 연산자
//#include<stdio.h>
//int main(void)
//{
//	int x;
//	int y[10];
//	printf("%d\n", sizeof("I love you!"));//12
//	printf("%d\n", sizeof("대한")); //5(cp949) or 7(utf-8)
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof(x)); //4, sizeof x라고 써도 됨
//	printf("%d\n", sizeof(y)); //40 , sizeof y라고 써도 됨
//	return 0;
//}






//#include<stdio.h>
//int main(void)
//{
//	int x = 10, y = 4;
//	double z;
//	printf("1:%d\n", 10 / 4); //2
//	printf("2:%f\n", 10 / 4); // 0.000000, 컴파일러에 따라 2.5000000,경고
//	printf("3:%f %f %f\n", 10 / 4.0, 10.0 / 4, 10.0 / 4.0);// 모두 2.5000000
//	printf("4:%d\n", x / y); //2
//	printf("5:%f\n", x / y); // 0.000000, 컴파일러에 따라 2.500000, 경고
//	//warning c4477:'printf':서식 문자열 '%f'에 'double'형식의 인수가
//	//필요하지만 variadic 인수 1의 형식이 int 입니다.
//	//warning: format specifies type 'double' but the argument has type 'int'
//	z = x / y; //double형인 z에 2를 저장하면 소수점만 더 붙음
//	printf("6:%f\n", z);// 2.000000
//	z = (double)x / y; //10.0/4
//	printf("7:%f\n", z); //2.500000
//	z = x / (double)y; // 10/4.0
//	printf("8:%f\n", z); //2.500000
//	z = (double)x / (double)y;//10.0/4.0
//	printf("9:%f %lf\n", z, z);//2.500000 2.500000
//	z = (double)(x / y);
//	printf("10:%f\n", z);
//	return 0;
//}