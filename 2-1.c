#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DBL_EPSILON (1e-9)

/**
* @brief функция summ находит сумму.
* @param x - значение параметра x
* @param y - значение параметра y
* @param SUMM - номер операции суммы
* @param choice - номер операции пользователя
* @return рассчитанное значение
*/
double summ(double const x, double const y, int SUMM, int choice);

/**
* @brief функция subt находит вычетание.
* @param x - значение параметра x
* @param y - значение параметра y
* @param SUBT - номер операции вычитания
* @param choice - номер операции пользователя
* @return рассчитанное значение
*/
double subt(double const x, double const y, int SUBT, int choice);

/**
* @brief функция mult находит произведение.
* @param x - значение параметра x
* @param y - значение параметра y
* @param MULT - номер операции умножения
* @param choice - номер операции пользователя
* @return рассчитанное значение
*/
double mult(double const x, double const y, int MULT, int choice);

/**
* @brief функция divs находит частное.
* @param x - значение параметра x
* @param y - значение параметра y
* @param DIVS - номер операции деления
* @param choice - номер операции пользователя
* @return рассчитанное значение
*/
double divs(double const x, double const y, int DIVS, int choice);

/**
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/

int main()
{   
    double x = 0;
    double y = 0;
    int choice = 0;
    int SUMM = 1;
    int SUBT = 2;
    int MULT = 3;
    int DIVS = 4;
    
    printf("введите два числа\n");
    scanf("%lf %lf", &x, &y);
    printf("введите цифру\n");
    scanf("%d", &choice);
    
	printf("%lf\n", summ(x, y, SUMM, choice));
	printf("%lf\n", subt(x, y, SUBT, choice));
	printf("%lf\n", mult(x, y, MULT, choice));
	printf("%lf\n", divs(x, y, DIVS, choice));
	return 0;
}

double summ(const double x, const double y, int SUMM, int choice)
{
    if (choice == SUMM)
        return x + y;
    return 0;
}

double subt(const double x, const double y, int SUBT, int choice)
{
    if (choice == SUBT)
        return x - y;
    return 0;
    
}

double mult(const double x, const double y, int MULT, int choice)
{
    if (choice == MULT)
        return x * y;
    return 0;
}

double divs(const double x, const double y, int DIVS, int choice)
{
    if (!(fabs(y)<DBL_EPSILON))
    {
        if (DIVS == choice) 
            return x / y;
        return 0;
    }
    else
    {
        printf("ошибка");
        exit(EXIT_FAILURE);
    }
}

