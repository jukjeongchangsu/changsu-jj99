#include<stdio.h>
int main(void)
{
	int nA, nB, res{};
	char Oper;
	
	printf("input your arimethic operation :\n");
	scanf_s("%d%c%d", &nA, &Oper, 1, &nB);

	switch (Oper)
	{
	case '+': res = nA + nB;
		break;
	case '-': res = nA - nB;
		break;
	case '*': res = nA * nB;
		break;
	case '/': res = nA / nB;
		break;
	}
	printf("%d%c%d=%d", nA, Oper, nB, res);
	return 0;
}