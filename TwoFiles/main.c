#include <stdio.h>
#include <math.h>

#include "myfuncs.h"

int main(int argc, char const *argv[])
{
    double input = 0;
    printf("Enter x : ");
    scanf("%lf",&input);
    printf("f(%.3lf) = %lf\ng(%.3lf) = %lf \n",input, f(input), input, g(input));
    return 0;
}
