#include<iostream>
#include<array>
int main()
{
	using namespace std;
	int d;
	const int num = 3;
	array<double, num>Ab;
	cout << "�����������ܵĳɼ�" << endl;
	cin >> Ab[0] >> Ab[1] >> Ab[2];
	d = (Ab[0] + Ab[1] + Ab[2]) / 3;
	cout << "ƽ���ɼ���" << d << endl;
	cout << "����Ϊ:" << num;
	return 0;
}
