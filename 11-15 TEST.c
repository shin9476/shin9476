#include<stdio.h>
int main(void)
{
	int a = 5, b = 0;
	printf("%d\n", (7 == 7) && (8 != 3));  //1 && 1
	printf("%d\n", (7 > 1) || (8 < 1));   // 1 || 0
	printf("%d\n", (2 == 1) && (3 == 3)); // 0 && 1
	printf("%d\n", !5);  // 0이 아닌 수는 모두 참
	printf("%d\n", (a && b));  // 5 && 0
	printf("%d\n", (a || b));  // 5 || 0
	printf("%d\n", (!a));  // ! 5
	return 0;
}