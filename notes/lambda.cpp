#include <iostream>
using namespace std;

auto basiclambda = [](int a , int b) { return b * a ;};

int main()
{
   int x;
   x =basiclambda(2,5);
   cout<< x << endl;
   return 0;
}