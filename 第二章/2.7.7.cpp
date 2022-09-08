/*用户输入小时数和分钟数。在main()函数中，将这两个值传递到一个void函数*/ 
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
