
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	//4.1
	{
		int counter = 0;
		int& refCnt = counter;	//refCnt����counter���������
		//int &refCnt2;			//���󣺶�������ʱ�����һ�������
		refCnt = 2;				//�޸���counter ���ڵ��ڴ�ռ������
		int i = refCnt;			//ͨ�����ö�ȡcounter ��������ݣ�����ʼ������i
		int& r1 = i, j = 0, & r2 = r1; // r1��r2����i�����ã���j��int����

		//ֻ������ͬ���͵Ķ���
		double d = 0;
		//int &r3 = d;				//����r3ֻ������int���Ͷ���

		//���õĶ�������Ƿ�const��ֵ����2.5.1�ڣ���21ҳ����
		//int i = 0; const int ci = 0;
		//int &r4 = 100, &r5 = i + 1, &r6 = ci; //����ֻ�����÷�const��ֵ
	}

	//4.1.1
	{
		const int ci = 0;
		const int& r1 = ci;		//r1����const ����ci
		//r1 = 1;				//�����൱���޸�const����ci ��ֵ
		int i = 0;
		//const int &r1 = i;	//��ȷ��ʹ����ֵ�����ʼ��
		const int& r2 = 1;		//��ȷ��ʹ������ֵ������ʼ��
		const int& r3 = i + 1;	//��ȷ��ʹ�ñ���ʽi+1�Ľ����ʼ��
		const int& r4 = 3.14;	//��ȷ��ʹ��double�������ݳ�ʼ��
	}

	//4.1.2
	{
		int i = 0, & ri = i;
		auto r = ri;			//r��int���Ͷ�����int �������ã�auto���Ƶ�Ϊint
		//auto &r = i;			//r ��int��������
		const int ci = 0;
		auto& cr = ci;			//cr ��const int�������ã�auto���Ƶ�Ϊconst int
	}

	//4.1.3
	{
		int i = 0, & r1 = i;
		decltype (r1) r2 = i;	//r2Ϊint����
		//decltype (r1 + 0) r2; //r2Ϊint����
		const int ci = 0;
		auto& cr = ci;			//cr ��const int�������ã�auto���Ƶ�Ϊconst int
		//decltype ((i)) r2;	//����r2Ϊint���ã������ʼ��
	}

	//4.1.4
	{
		int i = 0;
		int&& rr1 = i + 1;		//��ȷ��rr1Ϊ��ֵ���ã��󶨵�һ����ʱ����
		//int &&rr2 = i;		//����rr2Ϊ��ֵ���ã����ܰ󶨵���ֵ����
		//int &&rr3 = rr1;		//����rr1Ϊ��ֵ��rr3���ܰ󶨵���ֵ����
		int&& rr3 = std::move(rr1); //��rr1ת������ֵ
	}

	//4.1.4
	{
		int i = 0;
		auto&& rr1 = 10;	//rr1Ϊ��ֵ����
		auto&& rr2 = i;		//rr2Ϊ��ֵ����
	}
}