/*��д������main()����һ���û�����ĺ������Թ���ֵΪ�����������ض�Ӧ���ĵ�λ��ֵ��*/
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
