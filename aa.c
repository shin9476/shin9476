#include<stdio.h>
//C:\Program Files (x86)\Windows Kits\10\Include\10.0.22621.0\ucrt\stdio.h
#define SIZE 3
typedef struct {
	char name[10];
	double w;
}WEIGHT;
void swap(WEIGHT*, WEIGHT*); // �Լ�����
int main(void)
{
	WEIGHT man[SIZE] = { {"�Ѱ���", 57.5},
					     {"��û��", 125.6},
					     {"�����", 35.7} };
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (man[i].w >man[j].w) {
				swap(&man[i], &man[j]);
			}
		}
	}
	printf(" �̸�\tü��\n");
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