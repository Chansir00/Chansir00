#include <cmath>
#include <iostream>

using namespace std;

bool judge(double num2, double num1, double num3);

int main() {
  double num1, num2, num3, s, area;
  cout << "num1,num2,num3 = ";
  cin >> num1 >> num2 >> num3;

  bool flag = judge(num1, num2, num3);
  if (flag) {
    s = (num1 + num2 + num3) / 2.0;
    area = sqrt(s * (s - num1) * (s - num2) * (s - num3));
    cout << "area = " << area << endl;
  }
  else
    cout << "输入数据有误，请重新输入" << endl;
  return 0;
}

bool judge(double num2, double num1, double num3) {
  bool flag;
  if (num1 + num2 < num3 || num1 + num3 < num2 || num2 + num3 < num1) {
    flag = false;
  }
  else
    flag = true;

  return flag;
}
