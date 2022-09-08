#include<iostream>
using namespace std;
class Time
{
	public:
	 long long seconds;
	 Time();
	 ~Time();
	 void Version(long long);
};
Time::Time()
{
	
}
Time::~Time(){
	
}
void Time::Version(long long a)
{
	this->seconds=a;
	int day,hour,minute,miao;
	day=seconds/60/60/24;
	hour=seconds/60/60%24;
	minute=seconds/60%60;
	miao=seconds%60;
	cout<<"您输入的秒数可转换为"<<day
	<<"天，"<<hour<<" 小时，"<<minute
	<<"分钟，"<<miao<<"秒。"<<endl; 
}
int main()
{
Time a;
long long test;
cout<<"输入秒数：";
cin>>test;
a.Version(test);
return 0;

}
