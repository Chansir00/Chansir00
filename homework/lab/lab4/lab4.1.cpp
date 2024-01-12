#include <iostream> 
#include<stdio.h>



using namespace std;

int main()
{
    int num;
    cin >> num;
    int i, j = 0;
    int a[100];
    i = num;
    while (i)
    {
        a[j] = i % 2;
        i = i / 2;
        j++;
    }
    for (i = j - 1;i >= 0;i--)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}



