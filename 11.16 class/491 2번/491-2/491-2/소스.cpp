#include<stdio.h>

struct cracker
{
	int price;
	int clories;
};

int main(void)
{
	struct cracker s1;
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� ;");
	scanf_s("%d%d", &s1.price, &s1.clories);
	printf("�ٻ���� ���� : %d��\n", s1.price);
	printf("�ٻ���� ���� : %dkcal\n", s1.clories);
	return 0;
}