#include "set.h"
int main()
{
    vector<char> temp1 = { 'a', 's', 'd','f','g' };
    vector<char> temp2 = { 'a', 'c','v','f','t','y','e','r','x' };
    Set s1(temp1), s2(temp2), s3, s4;
    s1.is_elem('a');
    s1.insert('p');
    cout << "s1=" << s1 << endl;
    s2.erase('a');
    cout << "s2=" << s2 << endl;
    s3 = common(s1, s2);
    s4 = sum(s1, s2);
    cout << "s3=" << s3 << endl;
    cout << "s4=" << s4 << endl;
    Set s5(s1);
    cout << "s5=" << s5 << endl;
    s5 = s4;
    cout << "s5=" << s5 << endl;

    vector<Set> v = { s1, s2, s3, s4, s5 };
    Set s6;
    for (auto i = v.begin();i != v.end();++i)
    {
        s6 = sum(s6, *i);
    }
    cout << "s6" << s6;
    return 0;
}