#include <stdio.h>
#include <stdlib.h>

/**
* @brief функция GetNewX находит новый x
* @param x - значение параметра x
* @param y - значение параметра y
*/
double GetNewX(double const x, double const y);

/**
* @brief функция GetNewY находит новый y
* @param x - значение параметра x
* @param y - значение параметра y
*/
double GetNewY(double const x, double const y);

/**
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/

main()
{
    double x = 0;
    double y = 0;
    
    printf("enter x, y\n");
    scanf("%lf %lf", &x, &y);
    printf("%lf\n", GetNewX(x, y));
    printf("%lf", GetNewY(x, y));
    return 0;
}

double GetNewX(double const x, double const y)
{
    if (x != y)
    {
        if (x > y)
            {
                return x*y*2;
            }
        else
            {
                return (x+y)/2;
            }
    }
    else
    {
        printf("error");
        exit(1);
    }
        
}

double GetNewY(double const x, double const y)
{
    if (x != y)
    {
        if (x > y)
            {
                return (x+y)/2;
            }
        else
            {
                return x*y*2;
            }
    }
    else
        {
        printf("error");
        exit(1);
        }
}
