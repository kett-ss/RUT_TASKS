#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define <float.h>

/**
* @brief функция temperatureChange находит изменение температуры.
* @param m - значение массы.
* @param q - значение энергии.
* @param c - удельная теплоёмкость.
* @return рассчитанное значение
*/
double temperatureChange(double const m, double const q, double const C);

/**
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/

int main() {
    double m = 0, q = 0;
    double const C = 500;
    
    printf("введите m и q\n");
    scanf("%lf %lf", &m, &q);
    printf("%lf", temperatureChange(m, q, C));
    return 0;
}

double temperatureChange(double const m, double const q, double const C)
{
    if (!(fabs(m)<DBL_EPSILON))
    {
        return q / (C * m / 1000);
    }
    else
    {
        printf("ошибка");
        exit(EXIT_FAILURE);
    }
}
