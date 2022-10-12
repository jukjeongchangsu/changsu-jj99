#include<stdio.h>

int main(void)
{
	int i, j;
	
	printf("단수를 입력하시오 : ");
	for (i = 2; i <= 9; i++)
	{
		scanf_s("%d", &i);
		for (j = 1; j <= 9; j++)
		{
			printf(" %d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}