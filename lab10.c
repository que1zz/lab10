#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define ROW 9
#define COL 9


int check(double x, double y) {

    

    if (x * x + y * y <= 36 && !(x * x + y * y < 16) && y >= 2) {
        return 0;
    }
    else
        return 1;
}



int task2()
{
    setlocale(LC_ALL, "RUS");
    double x, y;


    while (1)
    {
        char a;
    printf("Введите координаты x и y: ");
    scanf("%lf %lf", &x, &y);

        if (check(x, y))
        {
            printf("Точка принадлежит области\n");
        }


        else {
            printf("Точка не принадлежит области\n");
         
        }

        printf("Продолжить? (Да - y, нет - n)");
        scanf("%c", &a);

        if ((a = getchar()) == 'n') break;


    }
    return 0;
}

void task1_1() 
{
    
    int row, col;
    printf("\n");
    for (row = 1; row <= ROW; ++row)
    {
        for (col = 1; col <= row; col++)
        printf("%5d", col * row);
        printf("\n");
    }
    system("pause");
}


void task1_2()
{

    int row, col;
    int cnt = 90;
    
    printf("\n");
    for (row = 1; row <= 5; ++row)
    {
        for (col = 1; col <=(6-row); col++)
            printf("%5d",((cnt+1)-row)+col-1);
        printf("\n");
    }
    system("pause");
}



double fa(double x) 
{
    double y;
    if (x <= 3)
    {
        y = pow(x, 2) - 3 * x + 9; //кп: при x=1 , y=7 
        return y;
    }
    else {
        y = 1 / (pow(x, 3) + 3); //кп: при х=4 , у = 0,014925
        return y;
}
    
}

double fb(double x) 
{
    double y;
    y = x * exp(sin(x*x) );      //кп: при x=1 - y=2.31977
    return y;                    //кп: при х=4 - y=2.999336 
}

proizv(double a, double b)

{

    return a * b;

}

razn_kv(double a, double b)

{

    return a * a - b*b;

}

dv_sum(double a, double b)

{

    return (a + b)*2;

}


task3() 
{
    setlocale(LC_ALL, "RUS");
    double x;
    printf("Введите х:");
    scanf("%lf", &x);
    printf("fa(x)=%lf , fb(x)=%lf \n", fa(x), fb(x));
    
    printf("Произведение - %lf\n", fa(x)* fb(x) );
    printf("Разность квадратов - %lf\n", fa(x) * fa(x) - fb(x) * fb(x));
    printf("Удвоенная сумма - %lf\n",( fa(x)+fb(x) ) * 2 );
}







int main() 
{
    //task1_1();
    //task1_2();
    //task2();
    task3();
}
