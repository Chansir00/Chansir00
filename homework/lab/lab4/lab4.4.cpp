#include <iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
void firstjudge();
void strjudge();

const int SIZE = 100;


int main()
{
    cout << "Please input a string...\n";
    firstjudge();
    // strjudge();
    return 0;
}



void firstjudge()
{
    char carray[SIZE];
    int  len, is_palindrome = 1;
    cin.getline(carray, SIZE);
    len = strlen(carray);
    int f = len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (!isalpha(carray[i]) && i < f)
            i++;
        if (!isalpha(carray[f]) && i < f)
            f--;
        if (towlower(carray[i]) != towlower(carray[f]))
        {
            is_palindrome = 0;
            break;
        }
        f--;
    }
    if (is_palindrome)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";
}


void strjudge()
{
    string str;
    getline(cin, str);
    int flag = 1;
    int lenth = str.length();
    char* q = &str[0];
    char* p = &str[lenth - 1];
    for (int i = 0; i < lenth / 2; i++)
    {
        if (!isalpha(*p)) {
            p--;
        }
        if (!isalpha(*q)) {
            q++;
        }
        if (tolower(*p) != tolower(*q)) {
            flag = 0;
        }
        q++;
        p--;
    }
    if (flag)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";
}