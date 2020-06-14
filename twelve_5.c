#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int main(void)
{
    int arr[LEN];
    int i;

    for(i = 0; i < LEN; i++)
    {
        arr[i] = rand() % 10 + 1;
    }

    sort(arr, LEN);
    print(arr, LEN);

    return 0;
} 

int sort(int arr[], int len)
{
    int i, j;
    int temp;

    for(i = 0; i < len -1; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

}

int print(int arr[], int len)
{
    int i;
    //static int n = 0;

    for(i =  0; i < len; i++)
    {
        printf("%d ", arr[i]);
        //n++;
    }
    printf("\n");
    //printf("%d \n", n);

    return 0;
}