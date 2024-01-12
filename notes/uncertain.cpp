#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
const double PI = 3.14;


double calculate_U(vector<double>T, double average_T, double l, int n = 5)   //计算u的函数
{
    l /= 100; //l化成m
    double kesai = 0.001, sum = 0;
    double U = 0.683 * kesai;  //kesai = 1mm
    double UL = 4 * pow(PI, 2) / pow(average_T, 2) * U;   //求出UL
    for (auto i : T)  //T中的每一项共5项
    {
        i /= 25;  //每个数据先除以25
        sum += pow(i - average_T, 2);  //求出累加和
    }
    double S = sqrt(sum / (n - 1)) / sqrt(n);  //直接求S
    double UT0 = sqrt(pow(S, 2) + pow(U, 2));
    double UT = 4 * pow(PI, 2) * l / pow(average_T, 3) * UT0;
    return sqrt(pow(UT, 2) + pow(UL, 2));  //返回U总
}



int main() {
    int n = 5;   //每组5个变量
    vector<double> T1 = { 44.32,44.30,44.40,44.35,44.38 };
    vector<double> T2 = { 39.91, 39.95, 39.90, 40.02, 39.98 };
    vector<double> T3 = { 36.62, 36.78 ,36.75, 36.82, 36.86 };
    vector<double> T4 = { 35.04, 35.02, 34.95, 35.13, 35.06 };
    vector<double> T5 = { 29.00,29.21,29.14,29.18,29.06 };  //5组数据，单位为s
    vector<double> average_T = { 1.774,1.596,1.470,1.402,1.164 }; //单位为s

    vector<double> l = { 78.75,63.75,53.75,48.75,33.75 };   //单位为cm

    double U1 = calculate_U(T1, average_T[0], l[0], n);
    double U2 = calculate_U(T2, average_T[1], l[1], n);
    double U3 = calculate_U(T3, average_T[2], l[2], n);
    double U4 = calculate_U(T4, average_T[3], l[3], n);
    double U5 = calculate_U(T5, average_T[4], l[4], n);

    cout << "U1 = " << U1 << endl;
    cout << "U2 = " << U2 << endl;
    cout << "U3 = " << U3 << endl;
    cout << "U4 = " << U4 << endl;
    cout << "U5 = " << U5 << endl;

    double result = (U1 + U2 + U3 + U4 + U5) / 5;  //算出平均数
    cout << "result=" << result << endl;

    return 0;
}


