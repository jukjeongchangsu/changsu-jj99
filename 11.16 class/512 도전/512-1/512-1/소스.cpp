#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int num;
    char name[20];
    int kor, eng, mat;
    int tot;
    double avg;
    char grade;
} Student;

void input_data(Student);
void calc_data(Student);
void sort_data(Student);
void print_data(Student);

int main(void)
{
    Student ary[5];
    input_data(ary);
    calc_data(ary);

    printf("# 정렬 전 데이터...\n");
    print_data(ary);
    sort_data(ary);
    printf("\n# 정렬 후 데이터...\n");
    print_data(ary);

    return 0;
}

void input_data(Student)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("> 학번 : ");
        scanf_s("%d", &num);
        printf("> 이름 : ");
        scanf_s("%s", &name);
        printf("> 국어, 영어, 수학 점수 : ");
        scanf_s("%d %d %d", &kor, &eng, &mat);
    }
}

void calc_data(Student)
{
    int i;
    for (i = 0; i < 5; i++)
    {
       tot = kor + eng + mat;
       avg = tot / 3.0;
        if (avg >= 90.0) grade = 'A';
        else if (avg >= 80.0) grade = 'B';
        else if (avg >= 70.0) grade = 'C';
        else grade = 'F';
    }
}

void sort_data(Student)
{
    Student temp;
    int i, j;
    int max;
    for (i = 0; i < 4; i++)
    {
        max = i;
        for (j = i + 1; j < 5; j++)
        {
            if ([max].tot < [j].tot)
            {
                max = j;
            }
        }
        if (max != i)
        {
            temp = [max];
            pary[max] = pary[i];
            pary[i] = temp;
        }
    }
}
void print_data(Student)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n",
          num, name, kor,eng,
           mat, tot, avg, grade);
    }
}