#include<stdio.h>
//C:\Program Files (x86)\Windows Kits\10\Include\10.0.22621.0\ucrt\stdio.h
#define SIZE 3
typedef struct {
	char name[10];
	double w;
}WEIGHT;
void swap(WEIGHT*, WEIGHT*); // 함수선언
int main(void)
{
	WEIGHT man[SIZE] = { {"한개발", 57.5},
					     {"엄청군", 125.6},
					     {"갈비양", 35.7} };
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (man[i].w >man[j].w) {
				swap(&man[i], &man[j]);
			}
		}
	}
	printf(" 이름\t체중\n");
	for(i = 0; i < 3; i++) {
		printf(" %s %5.1f\n", man[i].name, man[i].w);
	}
	return 0;
}
void swap(WEIGHT* mani, WEIGHT* manj)
{
	WEIGHT temp;
	temp = *mani;
	*mani = *manj;
	*manj = temp;
}