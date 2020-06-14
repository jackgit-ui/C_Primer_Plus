#include <stdio.h>
#include <math.h>

long jiecheng(long n)
{
    long max = 1;
    
    if(n == 0 || n == 1)
        max = 1;
    
    while(n)
    {
        max = max * n;
        --n;
    }
    
    return max;
}



double funcos( double e, double x)
{
    int flag = 1;
    long n = 0;
    double cos = 0;
    double zuihouyixiang;
    
    
    
    do
    {
        zuihouyixiang = flag * pow(x, n) / jiecheng(n);
        cos += zuihouyixiang;
        flag = -flag;
        n += 2;
        
    }while(abs(zuihouyixiang) >= e);
    
    
    return cos;
    
}

int main(void)
{
    double e, x; 
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2) = %.6f\n", x, funcos(e, x));

    return 0;
}