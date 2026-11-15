#include <stdio.h>
#include <stdlib.h>

/**
* @brief функция GetAnswer находит решение
* @param x - значение параметра x
* @param y - значение параметра y
* @param new_x - находит новый x
* @param new_y - находит новый y
*/
void GetAnswer(double const x, double const y, double *new_x, double *new_y);

/**
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/

main()
{
    double x = 0;
    double y = 0;
    double new_x = 0;
    double new_y = 0;
    
    printf("enter x, y\n");
    scanf("%lf %lf", &x, &y);
    GetAnswer(x, y, &new_x, &new_y);
    printf("%lf\n%lf", new_x, new_y);
    return 0;
}

void GetAnswer(double const x, double const y, double *new_x, double *new_y)
{
    if (x != y)
    {
        if (x > y)
        {
            *new_y = (x+y)/2;
            *new_x = x*y*2;
        }
        else
        {
            *new_x = (x+y)/2;
            *new_y = x*y*2;
        }
    }
    else
    {
        printf("error");
        exit(1);
    }
}
