#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[5][5] = {};
    int(*p)[5] = arr;
    int num = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            *(*(p + i) + j) = num;

            if (j > i)
                *(*(p + i) + j) = 0;

            printf("%-2d ", *(*(p + i) + j));

            num++;

            if (num % 5 == 1)
                printf("\n");
        }
    }
    return 0;
}