#include<stdio.h>
int main(void)
{
	int l = 0x12345678;
	printf("%x\n", (l >> 16) & 0xFFFF); // >>�� &�� �ǹ̴�?
	return 0;
}




// chapt6 �ǽ�1
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)
//{
//	int kor, eng , math,max;
//	printf(" kor,eng,math ������ �Է��ϼ��� :");
//	scanf("%d %d %d" , &kor ,&eng ,&math);
//	//max = (kor > eng) ? kor : eng;
//	max = (kor > eng) ? kor : eng;
//	printf("�ִ� ������ : %d\n", (max > math) ? max : math);
//
//	printf("������ ���� : %d\n", (kor+ eng + math));
//	printf("������ ��� : %d\n", ((kor + eng + math) / 3));
//	return 0;
//}



//���� 6.16
//#include<stdio.h>
//int main(void)
//{
//	int a = 10, b = 20;
//	printf("���� a�� ��=%d, �ּ�=%p\n", a, &a);
//	printf("���� b�� ��=%d, �ּ�=%p\n", b, &b);
//	return 0;
//}



// sizeof ������
//#include<stdio.h>
//int main(void)
//{
//	int x;
//	int y[10];
//	printf("%d\n", sizeof("I love you!"));//12
//	printf("%d\n", sizeof("����")); //5(cp949) or 7(utf-8)
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof(x)); //4, sizeof x��� �ᵵ ��
//	printf("%d\n", sizeof(y)); //40 , sizeof y��� �ᵵ ��
//	return 0;
//}






//#include<stdio.h>
//int main(void)
//{
//	int x = 10, y = 4;
//	double z;
//	printf("1:%d\n", 10 / 4); //2
//	printf("2:%f\n", 10 / 4); // 0.000000, �����Ϸ��� ���� 2.5000000,���
//	printf("3:%f %f %f\n", 10 / 4.0, 10.0 / 4, 10.0 / 4.0);// ��� 2.5000000
//	printf("4:%d\n", x / y); //2
//	printf("5:%f\n", x / y); // 0.000000, �����Ϸ��� ���� 2.500000, ���
//	//warning c4477:'printf':���� ���ڿ� '%f'�� 'double'������ �μ���
//	//�ʿ������� variadic �μ� 1�� ������ int �Դϴ�.
//	//warning: format specifies type 'double' but the argument has type 'int'
//	z = x / y; //double���� z�� 2�� �����ϸ� �Ҽ����� �� ����
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