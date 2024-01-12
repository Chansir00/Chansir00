#include<iostream>
#include<cstring>
#include<string>
#include<stdio.h>
using namespace std;



void secret(char* data)    //改成conset char*不能运行，因为常量指针不允许改变值
{
    while (*data)
    {
        if (*data >= 'a' && *data < 'z')
            *data = *data + 1;
        else if (*data == 'z')   //去掉else 会使y异常，重复进行了两次加密
            *data = 'a';
        data++;
    }

}

void desecret(char data[])
{
    for (auto i = 0; i < strlen(data); i++)
    {
        if (data[i] >= 'a' && data[i] < 'z')
            data[i] = data[i] - 1;
        else if (data[i] == 'a')
            data[i] = 'z';
    }
}


void secretcode(char* str, int code)
{
    while (*str)
    {
        *str = (*str + code) % 128;
        str++;
    }
}
void desecretcode(char* str, int code)
{
    while (*str)
    {
        *str = (*str - code) < 0 ? 128 + (*str - code) : (*str - code);
        str++;
    }

}
int main()
{
    char st[] = "This is a secret code!";
    cout << st << endl;
    secret(st);
    cout << st << endl;
    desecret(st);
    cout << st << endl;
    return 0;
}


int main()
{
    string str;
    int code;
    cout << "请输入加密字符串:" << endl;
    getline(cin, str);
    cout << "请输入密钥：" << endl;
    cin >> code;
    secretcode(&str[0], code);
    cout << str << endl;
    desecretcode(&str[0], code);
    cout << str << endl;
    return 0;
}