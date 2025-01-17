#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	//4.2.1 
	{
		int i = 100;
		int *ptr = &i;			//获取i的地址，并用其初始化指针对象ptr
		cout << *ptr << endl;	//读操作，读取对象i的内容，输出100
		*ptr = 10;				//写操作，修改对象i的内容，i的值变为10
		{
			int i = 0;
			int *ptr = &i;		//*紧随int，故ptr为指针；&在表达式中，故为取址符
			int &ref = *ptr;	//&紧随int，故ref为引用；*在表达式中，故为解引用
		}

		{
			int i = 10;
			//double *ptr = &i;	//错误：ptr 和i的类型不匹配
		}
		{
			int i, *ptr1, *ptr2; //i为int类型，ptr1和ptr2为指针对象
		}
		{
			int *ptr1 = nullptr; //ptr1为空指针，没有指向任何对象
			int *ptr2;			//ptr2为野指针，非常危
		}
		{
			int *p = 0;			//p为空指针
		}
	}

	//4.2.2
	{
		int i = 10, j = 100;
		int *ptr1 = &i, *ptr2 = &j; //ptr1指向i，ptr2指向j
		ptr1 = ptr2;				//改变ptr1的指向，使其指向j，与ptr1 = &j;等价
		ptr1 = nullptr;				//改变ptr1的指向，ptr1变成空指针
	}

	//4.2.3
	{
		const int ci = 10, cj = 1;
		const int *ptrc = &ci;		//ptrc指向常量ci
		//*ptrc = 0;				//错误：不能修改ptrc指向的常量ci
		ptrc = &cj;					//指向另外一个常量
		int i = 0;
		ptrc = &i;					//还可以指向一个非const 对象
		//int *ptr = &ci;			//错误：ptr 不能指向常量
		{
			int j = 0, i = 0;
			int *const cptr = &i;	//定义时初始化，cptr只能指向对象i
			//cptr = &j;			//错误：不能改变cptr的指向
			*cptr = 10;				//正确：可以通过*cptr修改其指向的对象i的值
		}
		const int *const cptrc = &ci; //cptrc是一个指向常量ci 的常量指针
	}

	//4.2.4
	{
		int i = 0;
		const int ci = 10;
		auto p = &i;				//p被推导为int *类型
		auto pc = &ci;				//pc被推导为const int * 类型，ci的const属性被保留
		auto &ref = i, *ptr = &i;	//auto被推导为int
		//auto &ref2 = i, ptr2 = &i; //错误：auto的推导类型不一致
		{
			int i = 0, *ptr = &i;
			decltype (ptr) ptr2;		//ptr2为int *
			decltype (*ptr) refi = i;	//正确：ref i为int &，必须初始化
			decltype (*ptr + 0) j;		//正确：j为int类型
		}
	}

	//4.2.5
	{
		double x = 0;
		int i = 0;
		void *p = &x;	//正确：可以存放double类型对象的地址
		p = &i;			//正确：也可以存放int 类型对象的地址
		{
			double x = 0, *ptrd = &x;
			void *ptr = &x;
			ptrd = static_cast<double *>(ptr); //需要强制类型转换
		}
	}

	//4.2.6
	{
		int i = 1, *ptr = &i;
		int **pptr = &ptr;	//用指针对象ptr的地址初始化pptr
		cout << i << '\t' << *ptr << '\t' << **pptr << endl;
		int ***ppptr = &pptr;
		cout << ***ppptr << endl; //输出1
		cout << "sizeof(ptr):" << sizeof(ptr) << "sizeof(pptr):" << sizeof(pptr) << "sizeof(char*):" << sizeof(char*) << endl;
	}
	//4.2.7
	{
		int i = 0, j = 1, &r = i, *p = &i;
		r = 4;		//修改与r相绑定的对象i的值
		p = &j;		//修改指针p的值，使其指向j
		{
			int i = 0;
			int *const p = &i;	//不允许指针p指向其他对象
			int &ri = i;		//引用ri只能与i绑定
		}
	}

}