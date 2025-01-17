
#include <cstdlib>
#include <iostream>
#include <vector>
#include<fstream>
#include<iomanip>
#include <string>  
using namespace std;

//例4.5 函数
int fun() {
	int a = 0;
	static int b = 0;
	return ++a + ++b;
}

int main(){
	
	//4.6.1 定义和初始化vector 对象
	{
		vector<int> v1;				//存放整数的空vector
		vector<int> v2 = { 0,1,2 }; //v2有三个元素，值分别为0、1和2
		vector<int> v3(10);			//v3可存放10个整数，值为默认值0
		vector<int> v4(10, 1);		//v4存放10个整数1
		vector<string> v5 = { "Hi","Lisha","Mandy","Rosita" };
		vector<vector<int>> v6(10, v2);
	}

	//4.6.2 vector类型常用操作
	{
		vector<int> vi;
		for (int i = 0; i < 100; ++i)
			vi.push_back(i);		//依次添加100个数：0-99
		vi.pop_back();
		vi.clear();					//或者移除所有元素：
	}

	//4.6.2 vector类型常用操作
	{
		vector<int> vi = { 0,1,2,3 };
		auto itb = vi.begin();		//itb指向vi的第一个元素
		auto ite = vi.end();		//ite指向vi的尾后元素
		cout << *itb << endl;		//输出第一个元素值0
		for (auto it = vi.begin(); it != vi.end(); ++it) {
			*it *= 2;				//每个元素乘2
			cout << *it << endl;
		}
		vector<string> vs = { "Hi","Lisha","Mandy","Rosita" };
		for (auto it = vs.begin(); it != vs.end(); ++it) {
			cout << (*it).size() << endl;	//选择string类成员函数size
		}
		//*it.size()；						//错误：迭代器it没有成员函数size，相当于*(it.size());
		for (auto it = vs.begin(); it != vs.end(); ++it) {
			cout << it->size() << endl;
		}
	}

	//例4.5 找出扫雷小游戏中非雷方格周围所有无雷区域
	{
		for (int i = 0; i < 3; ++i) cout << fun();
		srand(0);
		constexpr int sz = 8;
		char map[sz][sz];

		for (auto &row : map)
			for (auto &col : row)
				col = rand() % 100 < 50 ? '*' : '0';
		ofstream out("map.txt");
		int i = 0;
		for (auto &row : map) {
			out << i / sz << "&";
			for (auto &col : row) {
				if (col == '*') out << "\\bomb";
				else out << i;
				i++;
				if (i % sz == 0) out << "\\\\\\cline{2-9}";
				else out << "&";

			}
			out << endl;
		}
		out.close();

		int cell;
		cout << "请输入选择的方格编号[0-" << sz * sz - 1 << "]:";
		cin >> cell;
		if (map[cell / sz][cell%sz] == '*') {
			cout << "选择的是地雷" << endl;
		}
		else {
			vector<int> result, nobomb{cell };
			map[cell / sz][cell%sz] = '1';
			do {
				cell = nobomb.front();
				int neibor[] = { (cell / sz > 0) ? cell - sz : -1,(cell % sz > 0) ? cell - 1 : -1,
					(cell / sz < sz - 1) ? cell + sz : -1 ,(cell % sz < sz - 1) ? cell + 1 : -1 };
				for (auto &k : neibor) {
					if (k != -1 && map[k / sz][k%sz] == '0') {
						nobomb.push_back(k);
						map[k / sz][k%sz] = '1';
					}
				}
				result.push_back(nobomb.front());
				nobomb.erase(nobomb.begin());
			} while (!nobomb.empty());
			for (auto i : result)
				cout << i << " ";
		}
	}

}

