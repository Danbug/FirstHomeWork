#include <math.h>
#include "myfuncs.h"

double g(double x){
    return exp(-1 * fabs(x)) * cos(x);
}