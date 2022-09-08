#include<iostream>
#include<string>

using namespace std;

int main()
{
 string name;
 string xing;
 string quanming;
 cout<<"输入名：";
 getline(cin,name);
 cout<<"输入姓：";
 getline(cin,xing);
 cout<<"你的名字为：";
 quanming=xing+", "+name;
 cout<<quanming;
 return 0;
 
}
