#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv [])
{
    double m;
    double n;

    m = atof(argv[1]);
    n = atof(argv[2]);
    printf("%lf %lf\n", m, n);
    printf("%f\n", pow(m, n));

    return 0;
}