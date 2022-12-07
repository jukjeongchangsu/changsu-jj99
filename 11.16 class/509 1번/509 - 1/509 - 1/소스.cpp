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
	printf("이름 : %s ", mp->name);
	printf("나이 : %d ", mp->age);
	printf("성별 : %c ", mp->sex);
	printf("키 : %.1lf", mp->height);

	return 0;
}