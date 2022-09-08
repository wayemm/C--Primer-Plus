#include<iostream>
#include<array>
int main()
{
	using namespace std;
	int d;
	const int num = 3;
	array<double, num>Ab;
	cout << "请输入三次跑的成绩" << endl;
	cin >> Ab[0] >> Ab[1] >> Ab[2];
	d = (Ab[0] + Ab[1] + Ab[2]) / 3;
	cout << "平均成绩：" << d << endl;
	cout << "次数为:" << num;
	return 0;
}
