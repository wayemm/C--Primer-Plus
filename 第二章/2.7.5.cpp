/*�����¶�ת�����¶ȡ�ʹ���û��Զ��庯����*/
#include<iostream>
using namespace std;
double hua(double);
int main()
{
double sheshi=0;
cout<<"������һ�������¶ȣ� ";
cin>>sheshi;
cout<<sheshi<<"���϶�"<<"�൱��"<<hua(sheshi)<<" �����¶�";
return 0;
} 
double hua(double x){
	return 1.8*x+32.0;
}
