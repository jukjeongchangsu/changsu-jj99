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
	strcpy_s(s1.author, "크로스티앙 클로");
	s1.page = 252;
	s1.price = 15300;
	printf("제목 : %s\n", s1.title);
	printf("작가 : %s\n", s1.author);
	printf("쪽 수 : %d\n", s1.page);
	printf("가격 : %d\n", s1.price);

	struct book s2;
	strcpy_s(s2.title, "미움받을 용기");
	strcpy_s(s2.author, "기시미 이치로");
	s2.page = 336;
	s2.price = 13000;
	printf("\n제목 : %s\n", s2.title);
	printf("작가 : %s\n", s2.author);
	printf("쪽 수 : %d\n", s2.page);
	printf("가격 : %d\n", s2.price);
	
	struct book s3;
	strcpy_s(s3.title, "이토록 멋진 휴식");
	strcpy_s(s3.author, "존 피치");
	s3.page = 384;
	s3.price = 15000;
	printf("\n제목 : %s\n", s3.title);
	printf("작가 : %s\n", s3.author);
	printf("쪽 수 : %d\n", s3.page);
	printf("가격 : %d\n", s3.price);

	return 0;
}