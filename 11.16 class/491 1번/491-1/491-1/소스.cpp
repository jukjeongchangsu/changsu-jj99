#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
struct book
{
	char title[30];
	char author[20];
	int page;
	int price;
};

int main(void)
{
	struct book s1;

	strcpy_s(s1.title, "DEEP TIME");
	strcpy_s(s1.author, "ũ�ν�Ƽ�� Ŭ��");
	s1.page = 252;
	s1.price = 15300;
	printf("���� : %s\n", s1.title);
	printf("�۰� : %s\n", s1.author);
	printf("�� �� : %d\n", s1.page);
	printf("���� : %d\n", s1.price);

	struct book s2;
	strcpy_s(s2.title, "�̿���� ���");
	strcpy_s(s2.author, "��ù� ��ġ��");
	s2.page = 336;
	s2.price = 13000;
	printf("\n���� : %s\n", s2.title);
	printf("�۰� : %s\n", s2.author);
	printf("�� �� : %d\n", s2.page);
	printf("���� : %d\n", s2.price);
	
	struct book s3;
	strcpy_s(s3.title, "����� ���� �޽�");
	strcpy_s(s3.author, "�� ��ġ");
	s3.page = 384;
	s3.price = 15000;
	printf("\n���� : %s\n", s3.title);
	printf("�۰� : %s\n", s3.author);
	printf("�� �� : %d\n", s3.page);
	printf("���� : %d\n", s3.price);

	return 0;
}