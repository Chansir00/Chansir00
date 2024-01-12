#ifndef SET
#define SET

#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>
using namespace std;

class Set
{
    vector<char> m_elemts;
public:
    Set() = default;
    Set(const vector<char>& elemts);        //构造函数
    Set(const Set& s);                 //拷贝构造
    bool is_elem(char c) const;                        //是否为集合元素
    void insert(char c);              //插入
    void erase(char c);                   //删除
    Set& operator = (const Set& s);            //赋值
    friend ostream& operator << (ostream& os, const Set& s);        //输出格式：{a,b,c}
    friend Set common(const Set& a, const Set& b);        //求两个集合的交集
    friend Set sum(const Set& a, const Set& b);        //求两个集合的并集
    friend Set sum(const vector<Set>& v);
    ~Set();
};

#endif

