/*�û�����Сʱ���ͷ���������main()�����У���������ֵ���ݵ�һ��void����*/ 
#include<iostream>
using namespace std;
void Time(int,int);
int main()
{
int hour=0,minute=0;
cin>>hour>>minute;
Time(hour,minute);
}
void Time(int hour,int minute){
	cout<<"Enter the number of hours:"<<hour<<endl;
	cout<<"Enter the number of minutes:"<<minute<<endl;
	cout<<"Times: "<<hour<<":"<<minute;
}
