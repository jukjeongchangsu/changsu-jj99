#include <stdio.h>

int main(void)
{
	char ch;

	printf("Character input : ");
	scanf_s("%c", &ch);
	printf("The ASCII code value of the character %c is %d.", ch, ch);
	return 0;
}
