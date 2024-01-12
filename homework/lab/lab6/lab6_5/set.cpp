#include "set.h"

Set::Set(const vector<char>& elemts) : m_elemts(elemts)
{
    ;
}

bool Set::is_elem(char c) const
{
    if (find(m_elemts.begin(), m_elemts.end(), c) != m_elemts.end()) //如未找到返回最后一个元素
        return true;
    else
        return false;
}

Set::Set(const Set& s) : m_elemts(s.m_elemts)
{
    ;
}

void Set::insert(char c)
{
    m_elemts.push_back(c);
}

void Set::erase(char c)
{
    m_elemts.erase(find(m_elemts.begin(), m_elemts.end(), c));   //如果没有这个元素
}

Set& Set::operator=(const Set& s)
{
    if (this != &s)
        m_elemts = s.m_elemts;
    return *this;
}

ostream& operator<<(ostream& os, const Set& s)
{
    os << "{";
    for (auto i : s.m_elemts)
        if (i != *(s.m_elemts.end()))
            os << i << ',';
        else
            os << i;
    os << '}';
    return os;
}

Set common(const Set& a, const Set& b)
{
    Set c;
    for (auto i : a.m_elemts)
    {
        if (b.is_elem(i))
            c.insert(i);
    }
    return c;
}

Set sum(const Set& a, const Set& b)
{
    Set c = a;
    // for (auto i : a.m_elemts)
    // {
    //     c.insert(i);
    // }
    for (auto i : b.m_elemts)
    {
        if (!a.is_elem(i))
            c.insert(i);
    }
    return c;
}
// Set sum(const vector<Set>& v)
// {
//     Set c = {};
//     for (auto i = v.begin(); i != v.end(); i++)
//     {
//         c = sum(c, *i);
//     }
//     return c;
// }
Set::~Set() {}


