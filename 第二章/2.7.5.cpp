/*摄氏温度转华氏温度。使用用户自定义函数。*/
#include<iostream>
using namespace std;
double hua(double);
int main()
{
double sheshi=0;
cout<<"请输入一个摄氏温度： ";
cin>>sheshi;
cout<<sheshi<<"摄氏度"<<"相当于"<<hua(sheshi)<<" 华氏温度";
return 0;
} 
double hua(double x){
	return 1.8*x+32.0;
}
