//编一程序，要求用户用一个整数输出自己的身高（单位为英寸）然后将身高转化为英尺和英寸。
//该程序使用下划线字符来指示输入位置。
//使用const符号常量来表示转换因子
#include<iostream>
using namespace std;
int main()
{
	const float foot=2.54;   //一英寸等于2.54cm 
	const int inch=12;  //一英尺等于12英寸 
	cout<<"请输入你的身高（cm）:____\b\b\b\b ";
	int height;
	cin>>height;
	double ft,ih;
	ft=height/2.54;
	ih=ft/12;
	cout<<"your foot is "<<ft<<endl
	<<"your inch is "<<ih<<endl;
	return 0;
	
 } 
