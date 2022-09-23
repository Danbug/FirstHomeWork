#include <math.h>
#include "myfuncs.h"

double f(double x){
    return exp(-1 * fabs(x)) * sin(x);
}