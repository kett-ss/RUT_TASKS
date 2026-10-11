#include <stdio.h>
#include <math.h>

double summ(double const x, double const y);
/*
* @brief функция summ находит сумму.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/

double subt(double const x, double const y);
/*
* @brief функция subt находит вычетание.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/

double mult(double const x, double const y);
/*
* @brief функция mult находит произведение.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/

double divs(double const x, double const y);
/*
* @brief функция divs находит частное.
* @param x - значение параметра x
* @param y - значение параметра y
* @return рассчитанное значение
*/

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/

int main()
{   
    double x;
    double y;

    printf("введите два числа\n");
    scanf("%lf %lf", &x, &y);
	printf("сумма = %lf\n", summ(x, y));
	printf("разность = %lf\n", subt(x, y));
	printf("произведение = %lf\n", mult(x, y));
	printf("частное = %lf\n", divs(x, y));
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
    return x / y;
}
