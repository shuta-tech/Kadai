#include <stdio.h>
#include <math.h>

double get_x1(double x2, double x3)
{
    return ((10.0 -x2 - x3) / 5);
}
double get_x2(double x1, double x3)
{
    return((12.0 - x1 - x3) / 4);
}
double get_x3(double x1, double x2)
{
    return((13.0 - x1 - x2) / 3);
}

int main(void)
{
    double x1, x2, x3;
    int i;

    x1 = 1.0;
    x2 = 1.0; 
    x3 = 1.0;

   // printf("[round %d] %f, %f, %f\n", x1, x2, x3);
    for(i = 0; i < 20; i++){
        x1 = get_x1(x2, x3);
        x2 = get_x2(x1, x3);
        x3 = get_x3(x1, x2);
        printf("[round %d] %f, %f, %f\n", i + 1, x1, x2, x3);
    } 

    return 0;
}