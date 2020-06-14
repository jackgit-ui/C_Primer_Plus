#include <stdio.h>

void fv(void);

int out;

int main(void)
{
    int out = 10;

    printf("out int main:%d\n", out++);
    printf("out int main:%d\n", out);
    fv();

    return;
}

void fv(void)
{
    printf("out int fv: %d\n", out);
}