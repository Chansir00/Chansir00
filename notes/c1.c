#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// 实例1
// class Student {
// public:
// 	void setName(string name) {
// 		m_name = name;
// 	}
// 	void setID(int id) {
// 		m_id = id;
// 	}

// 	void showStudent() {
// 		cout << "name:" << m_name << " ID:" << m_id << endl;
// 	}
// public:
// 	string m_name;
// 	int m_id;
// };

// int main() {

// 	Student stu;
// 	stu.setName("德玛西亚");
// 	stu.setID(250);
// 	stu.showStudent();

// 	system("pause");

// 	return 0;
// }



// 实例2
// class Person {
// public:

// 	//姓名设置可读可写
// 	void setName(string name) {
// 		m_Name = name;
// 	}
// 	string getName()
// 	{
// 		return m_Name;
// 	}


// 	//获取年龄 
// 	int getAge() {
// 		return m_Age;
// 	}
// 	//设置年龄
// 	void setAge(int age) {
// 		if (age < 0 || age > 150) {
// 			cout << "你个老妖精!" << endl;
// 			return;
// 		}
// 		m_Age = age;
// 	}

// 	//情人设置为只写
// 	void setLover(string lover) {
// 		m_Lover = lover;
// 	}

// private:
// 	string m_Name; //可读可写  姓名
	
// 	int m_Age; //只读  年龄

// 	string m_Lover; //只写  情人
// };


// int main() {

// 	Person p;
// 	//姓名设置
// 	p.setName("张三");
// 	cout << "姓名： " << p.getName() << endl;

// 	//年龄设置
// 	p.setAge(50);
// 	cout << "年龄： " << p.getAge() << endl;

// 	//情人设置
// 	p.setLover("苍井");
// 	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取

// 	system("pause");

// 	return 0;
// }


// 实例三
class cube {
public:

	int m_h;
	void geth(int h){
		m_h = h;
	}

	int surf(int m_h)
	{
        return m_h * m_h * 6;
    }
	int vol(int m_h)
	{
        return pow(m_h, 3);
    }
};

int main(){
	cube a1;
	int h = 2;
	a1.geth(h);
    cout << a1.surf(h) << endl;
    cout<<a1.vol(h);
    return 0;
}