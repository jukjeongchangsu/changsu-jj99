#include<stdio.h>

struct marriage
{
	char name[20];
	int age;
	char sex;
	double height;
};

int main(void)
{
	struct marriage m1 = { "Andy", 22, 'm', 187.5 };
	struct marriage* mp = &m1;
	printf("�̸� : %s ", mp->name);
	printf("���� : %d ", mp->age);
	printf("���� : %c ", mp->sex);
	printf("Ű : %.1lf", mp->height);

	return 0;
}