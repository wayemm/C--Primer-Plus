#include<iostream>
using namespace std;
void zhuanhuan(int); 
int main()
{
cout<<"请输入一个以long为单位的距离,且1long等于220码\n";
int n=0;
cin>>n;
zhuanhuan(n);
return 0;
}
void zhuanhuan(int n)
{
	cout<<n*220<<"码";
 } 
