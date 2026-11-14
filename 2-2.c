#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

/**
* @brief функция GetAnswer находит решение систеы уравнений
* @param x - значение параметра x
* @param A - заданная константа
*/
double GetAnswer(double const x, double const A);

/**
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/

int main()
{
    double x = 0;
    double y = 0;
    double const A = 1.65;
    
    printf("enter x\n");
    scanf("%lf", &x);
    printf("%lf", GetAnswer(x, A));
    return 0;
}

double GetAnswer(double x, double const A)
{
    if (!(fabs(x)<DBL_EPSILON) && x < 1.34)
    {
        return M_PI*pow(x, 2) - 7/pow(x, 2);
    }
    if ((x+7*sqrt(x+A)) > 0 && x >= 1.4)
    {
        return log1p(x+7*sqrt(x+A));
    }
    else
    {
        printf("error");
        exit(EXIT_FAILURE);
    }
}
