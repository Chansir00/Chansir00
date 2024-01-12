
#include <cstdlib>
#include <iostream>
#include<ctime>
#include<cmath>
#include<vector>
using namespace std;

int main() {

	//4.3.1
	// {
	// 	int arr[10];
	// 	unsigned cnt = 10;
	// 	//int arr[cnt];			//����cnt���ǳ�������ʽ
	// 	constexpr int sz = 10;	//��������ʽ����2.4.2�ڣ���18ҳ��
	// 	int arri[sz];			//��ȷ�����10���������ݵ�����
	// 	//float arrf[10.];		//�������鳤�ȱ���������
	// 	{
	// 		int arr[5] = { 1, 2, 3, 4, 5 };
	// 	}
	// 	{
	// 		int arr[5] = { 1, 2, 3 };		//�ȼ���arr[5] = {1, 2, 3, 0, 0}
	// 	}
	// 	{
	// 		int arr[] = { 1, 2, 3, 4, 5 };	//����arr�ĳ���Ϊ5
	// 	}
	// 	{
	// 		char name[] = "Lisha";			//�Զ������ַ�����������\0��
	// 	}
	// 	{
	// 		char name[] = { 'L', 'i', 's', 'h', 'a', '\0' };
	// 		//name = "Lisha";				//�������鲻������ֵ����
	// 	}
	// 	{
	// 		int arr[5];				//����һ������5��int����Ԫ�ص�����
	// 		int *arrp[5];			//����һ������5��int*����Ԫ�ص����飬ÿ��Ԫ�ض���ָ��
	// 		int(*parr)[5] = &arr;	//����һ��ָ����5��int����Ԫ�ص������ָ��
	// 		int(&rarr)[5] = arr;	//����arr��һ������

	// 		//parrp ��rarrp �ֱ�Ϊָ��ָ������arrp��ָ�������
	// 		int *(*parrp)[5] = &arrp;
	// 		int *(&rarrp)[5] = arrp;
	// 	}
	// }

	//4.3.2
	{
		int arr[5] = { 1, 2, 3, 4, 5 };
		arr[0] = 10;			//д�������޸ĵ�һ��Ԫ�ص�ֵ
		cout << arr[0] << endl; //����������ȡ��һ��Ԫ�أ�������Ϊ��10
		{
			int arr[5] = { 1,2,3,4,5 }; //���岢��ʼ��һ������5��������������
			for (auto i : arr) {		//iΪarr �е�ǰԪ�صĸ���
				cout << i << endl;		//��ӡ�����ǰ��ȡ������
			}
			for (auto &i : arr) {		//i Ϊarr�е�ǰԪ�ص�����
				i = 0;					//д������ÿһ��Ԫ������Ϊ0
			}
		}
	}

	//��4.1 ����30��ѧ����ѧ��Ŀƽ���ɼ��ͱ�׼��
	{
		int a2d[][2] = { 1,1,4 ,4,4 };
		srand(0);
		constexpr int sz = 30;
		int score[sz];
		int mean = 0;
		for (auto &i : score) {
			i = 50 + rand() % 50;
			mean += i;
		}
		mean /= sz;
		double dev = 0;
		for (int i = 0; i < sz; ++i) {
			dev += pow(score[i] - mean, 2);
		}
		dev = sqrt(dev / sz);
		cout << "ƽ���ɼ���" << mean << " ��׼�" << dev << endl;
	}

	//��4.2 �˻ʺ�����
	{
		constexpr int sz = 8;
		int que[sz] = { 0 };	//ÿһ�лʺ󶼴ӵ�0�п�ʼ�ڷ�
		int i = 0;				//�ӵ�0�п�ʼ�ڷ�
		while (i >= 0) {
			int k = 0;
			while (k<i) {		//���ǰ�����лʺ��Ƿ�͵�i�лʺ��ͻ
				if (que[k] != que[i] && (abs(que[i] - que[k]) != abs(i - k)))
					++k;		//��k�к͵�i�лʺ�û�г�ͻ
				else
					break;		//��k�к͵�i�лʺ������ͻ���˳���ת����15��
			}
			if (k < i) {		//��⵽��ͻ
				++que[i];		//������ͻ���ƶ���i�лʺ󵽵�ǰλ�õ���һ��
				while (que[i] == sz) {	//��ǰ�����г��Զ�ʧ�ܣ���Ҫ����
					que[i] = 0;			//���õ�ǰ�лʺ�λ��
					--i;				//���ݵ���һ��
					if (i < 0)
						break;			//������ݵ���0��֮ǰ���������У�ת����24��
					++que[i];			//ǰһ�лʺ����һ��
				}
				//continue;				//���¼���Ƿ���ǰ���Ѱ��Żʺ��ͻ��ת����7��
			}
			else {						//û�м�⵽��ͻ��������һ�лʺ�
				++i;					//�ƶ�����һ��
				if (i < sz)
					continue;			//������һ�лʺ��Ѱ����ڵ�0�У�ת����7��
				cout << "�ҵ�һ��������";//�����ҵ�һ�����������
				for (k = 0; k<sz; ++k)
					cout << que[k];
				cout << endl;
				break;					//�������У�ת����37��
			}
		}
	}


	//��4.3 ����ɨ��С��Ϸ��ͼ
	{
		srand(time(0));//
		constexpr int sz = 8;
		char map[sz][sz];
		for (auto &row : map) {
			for (auto &col : row) {
				int num = rand() % 100;
				if (num <= 50)			//����һ������
					col = '*';
				else
					col = '0';
			}
		}
		for (int i = 0; i < sz; ++i) {
			for (int j = 0; j < sz; ++j) {
				if (map[i][j] != '*') continue;
				if (i + 1 < sz && map[i + 1][j] != '*') map[i + 1][j] += 1;
				if (i - 1 >= 0 && map[i - 1][j] != '*') map[i - 1][j] += 1;
				if (j + 1 < sz && map[i][j + 1] != '*') map[i][j + 1] += 1;
				if (j - 1 >= 0 && map[i][j - 1] != '*') map[i][j - 1] += 1;
			}
		}

		for (int i = 0; i < sz; ++i) {
			for (int j = 0; j < sz; ++j) {
				cout << map[i][j] << " ";
			}
			cout << endl;
		}

		for (auto p = &map[0][0]; p < map[0] + sz * sz; ++p) {
			if ((p - &map[0][0]) % sz == 0) cout << endl;
			cout << *p << " ";
		}

	}


}