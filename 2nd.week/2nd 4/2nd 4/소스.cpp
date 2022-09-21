#include <stdio.h>

int main(void)
{

    double weight, height, bmi;

    printf("Enter Weight (kg) and Height (cm) : ");

    scanf_s("%lf%lf", &weight, &height);

    height = height / 100.0;
    bmi = weight / (height * height);

    ((bmi >= 20.0) && (bmi < 25.0))
        ? printf("It's the standard.\n")
        : printf("I need to take care of my weight.\n");

    return 0;

}