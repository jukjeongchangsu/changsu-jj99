#include<stdio.h>

struct cracker
{
	int price;
	int clories;
};

int main(void)
{
	struct cracker s1;
	printf("바사삭의 가격과 열량을 입력하세요 ;");
	scanf_s("%d%d", &s1.price, &s1.clories);
	printf("바사삭의 가격 : %d원\n", s1.price);
	printf("바사삭의 열량 : %dkcal\n", s1.clories);
	return 0;
}