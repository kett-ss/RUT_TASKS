#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

/**
* @brief функция summ находит сумму.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/
double summ(double const x, double const y);

/**
* @brief функция subt находит вычетание.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/
double subt(double const x, double const y);

/**
* @brief функция mult находит произведение.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/
double mult(double const x, double const y);

/**
* @brief функция divs находит частное.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/
double divs(double const x, double const y);

/**
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/


enum operations {
    SUMM = 1,
    SUBT,
    MULT,
    DIVS

};

int main() {   
    double x = 0;
    double y = 0;
    int choice = 0;
    
    printf("enter x, y\n");
    scanf("%lf %lf", &x, &y);
    printf("choose operation\n");
    scanf("%d", &choice);
    
	switch (choice)
    {
        case SUMM:
            printf("%lf", summ(x, y));
            break;

        case SUBT:
            printf("%lf", subt(x, y));
            break;

        case MULT:
            printf("%lf", mult(x, y));
            break;

        case DIVS:
            printf("%lf", divs(x, y));
            break;

        default:
            printf("error");
            break;
    }
	return 0;
}

double summ(const double x, const double y)
{
    return x + y;
}

double subt(const double x, const double y)
{
    return x - y;
}

double mult(const double x, const double y)
{
    return x * y;
}

double divs(const double x, const double y)
{
    if (!(fabs(y)<DBL_EPSILON))
    {
        return x / y;
    }
    else
    {
        printf("ошибка");
        exit(EXIT_FAILURE);
    }
}
