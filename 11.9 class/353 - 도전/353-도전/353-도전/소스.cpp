#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20], str2[20], str3[30];
    char temp[20];

    printf("세 개의 단어 입력 : ");
    scanf_s("%s %s %s", str1, str2, str3);
    if (strcmp (str1, str2) > 0)
    {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp (str1, str3) > 0)
    {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str2, str3) > 0)
    {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    printf("%s, %s, %s\n", str1, str2, str3);
    return 0;
}

