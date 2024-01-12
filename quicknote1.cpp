// 圆类
// const double PI = 3.14;

// class Circle
// {
// public: //访问权限  公共的权限
//     //属性
//     int m_r; //半径

//     //行为
//     //获取到圆的周长
//     double calculateZC()
//     {
//         // 2 * pi  * r
//         //获取圆的周长
//         return 2 * PI * m_r;
//     }
// };

// int main()
// {

//     //通过圆类，创建圆的对象
//     // c1就是一个具体的圆
//     Circle c1;
//     cin >> c1.m_r; //给圆对象的半径 进行赋值操作

//     // 2 * pi * 10 = = 62.8
//     cout << "圆的周长为： " << c1.calculateZC() << endl;

//     system("pause");

//     return 0;
// }

// #include <string>
// using namespace std;

// int main () {
//     string max='0';
//     string str;
//     getline(cin,str);
//     for(int j=0 ; j<str.length(); j++){
//         if (str[j] > max)
//         max = str[j];
//     }

//     return 0;
// }

// char * trim(char * str);

// int main()
// {
//     char s[1024];     // 定义存储字符串的一维字符数组
//     // 输入一行字符，可以包含空格
//     // 输入的字符串存入s中，最多读取个字符，后面自动加上'\0'
//     cin.getline(s,1024);
//     cout << trim(s) << endl;     // 输出去掉首尾空格后的字符串
//     return 0;
// }

// // 函数trim：去掉字符串首尾空格
// // 参数：str-字符指针，指向输入的字符串
// // 返回值：字符指针，指向去掉首尾空格后的字符串（首地址）
// // 提示：可以直接在字符串str中操作
// char * trim(char * str)
// {
//     while(*str==' ')
//     {
//         str++;
//     }
//     char *end = str;
//     while(*end != '\0')
//     {
//         end++;
//     }
//     while (end>str and *(end-1)==' ' ) {
//         end--;

//     }
//     *end = '\0';
//     return str;

//     // 请在此添加代码，实现函数trim
//     /********** Begin *********/

//     /********** End **********/
// }

// 包含字符串函数库

// 函数frequency：计算子串在长串中出现的次数
// 参数：substr-指向子串，str-指向长串
// 返回值：出现的次数
#include <iostream>
#include <iomanip>
using namespace std;

// 指针遍历数组
// int main()
// {
// 	char arr[10] = {"heello"};
// 	char *p = arr;

// 	for (int i = 0; i < 10; i++) // 利用循环遍历列表
// 	{
// 		cout << "arr[" << i << "]值为：" << *p << endl;
// 		p++; //每一次循环结束p++，此时指向下一个元素的地址
// 	}
// 	return 0;
// 	int Salary95 = 2;
// }

// rationalNumber rnAdd(rationalNumber x, rationalNumber y)
// {
// 	rationalNumber z;
//     if (x.fenmu != y.fenmu) {
//         int x1 = x.fenmu,y1 = y.fenmu;
//         x.fenmu *= y1;
//         x.fenzi *= y1;
//         y.fenmu *= x1;
//         y.fenzi *= x1;
//         z.fenzi = x.fenzi+y.fenzi;
//         z.fenmu = x.fenmu + y.fenmu;
//     }
//     else
//     {
//         z.fenmu = x.fenmu;
//         z.fenzi = x.fenzi +y.fenzi;
//     }
//     rationalNumber m = z;
//     int a = 1,b;
// 辗转相除法求最简分子
//     while(a!= 0)
//     {
//         a = m.fenzi%m.fenmu;
//         m.fenzi = m.fenmu;
//         m.fenmu = a;
//     }

#include <string.h>
#include <iostream>
#include <string>
#include <vector>



// 计算方程两根
// int main()
// {
//     int a, b, c, x1, x2;
//     cin >> a >> b >> c;
//     int d = b * b - 4 * a * c;
//     if (a != 0)
//     {
//         if (d > 0)
//         {
//             x1 = (-b + sqrt(d)) / 2 * a;
//             x2 = (-b - sqrt(d)) / 2 * a;
//             cout << x1 << ' ' << x2;
//         }
//         else if (d == 0)
//         {
//             x1 = x2 = -b / 2 * a;
//             cout << x1 << ' ' << x2;
//         }
//         else
//             cout << "方程无根";
//     }
//     else
//         cout << "a不能为0" << endl;

//     return 0;
// }



// 循环遍历vector
// int main()
// {
//     vector<string> v = {"heellloo", "how", "are", "you"};
//     int n;
//     cin >> n;
//     for (auto i = 0; i < n; i++)
//     {
//         string str;
//         cin >> str;
//         v.push_back(str);
//     }
//     for (auto i = v.begin(); i != v.end(); i++)
//     {
//         if (*i == "how")
//         {
//             v.erase(i);
//         }
//         cout << *i << endl;
//     }

//     return 0;
// }


// string类型应用
#include<iostream>
#include<string>
using namespace std;

// int main()
// {
//     string str;
//     bool jud;
//     cin>>str;
//     auto b  = str.find("b");
//     auto a = str.rfind("a");
//     if (a>100000)   //如何解决a为随机值
//         cout<<"True";
//     else if(a<b)
//         cout<<"Ture";
//     else
//         cout<<"False";

//     return 0;
// }
#include<stdio.h>
#include<iostream>
using namespace std;


class a
{
    double m_a = 6;
    string m_b = "helo";
public:
    ~a() {}
};
class A {
public:
    A() { cout << "A"; }
    A(const A& a) { cout << "B"; }
    ~A() { cout << "C"; }
    void fun(A a) { cout << "D"; }
};


#include <iostream>
#include <cmath>
#include<string>
#include<vector>


const int num_points = 100; // 离散点的数量
const double pi = 3.14159;

int main() {
    string str = "ewae";
    vector<int> a = { 1, 2, 3, 4 };
    cout << str.size() << a.size();

    return 0;
}



