/* Programming Exercise 9-5 */
#include <stdio.h>
void larger_of(double *p1, double *p2);
int main(void) 
{
 double x, y;
 
 printf("Enter two numbers (q to quit): ");
 while (scanf("%lf %lf", &x, &y) == 2)
 {
 larger_of(&x, &y);
 printf("The modified values are %f and %f.\n", x, y);
 printf("Next two values (q to quit): ");
 }
 printf("Bye!\n");
 
 return 0;
}
void larger_of(double *p1, double *p2)
{
 if (*p1 > *p2)
 *p2 = *p1;
 else
 *p1 = *p2;
}
