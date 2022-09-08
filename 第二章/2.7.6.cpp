/*编写程序，用main()调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）*/
#include<iostream>
using namespace std;
int Gu_Year(double);
int main()
{
cout<<"Enter the number of light years:";
double a=0;
cin>>a;
cout<<a<<" light years ="<<Gu_Year(a)<<" astronomical units.";
return 0;
} 
int Gu_Year(double x)
{
	return x*63240;
}
