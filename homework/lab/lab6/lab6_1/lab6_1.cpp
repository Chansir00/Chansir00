#include <iostream>
#include <string>

using namespace std;

class Controller
{
private:
    double m_P;
    double m_I;
    double m_D;
    string m_type = "";

public:
    Controller(double P, double I, double D) :m_P(P), m_I(I), m_D(D) {}
    string type();
};

string Controller::type()
{
    if (m_P)
    {
        m_type += 'P';
        if (m_I)
            m_type += 'I';
        if (m_D)
            m_type += 'D';
    }
    else
        m_type = "error";
    return m_type;
}


int main()
{
    double P, I, D;
    cout << "请分别输入PID" << endl;
    cin >> P >> I >> D;
    Controller c(P, I, D);
    cout << c.type() << endl;
    cout << sizeof(c);
    return 0;
}