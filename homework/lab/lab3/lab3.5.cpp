#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "请输入一串字符：" << endl;
    cin >> str;
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else
            continue;    
    }
    cout << str;
    return 0;
}

