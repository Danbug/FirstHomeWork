#include <stdio.h>
#include <math.h>

double f(double x);
double g(double x);

int main(int argc, char const *argv[])
{
    double input = 0;
    printf("Enter x : ");
    scanf("%lf",&input);
    printf("g(%.3lf) = %lf\nf(%.3lf) = %lf \n",input, f(input), input, g(input));
    return 0;
}

double f(double x){
    return exp(-1 * fabs(x)) * sin(x);
}

double g(double x){
    return exp(-1 * fabs(x)) * cos(x);
}
