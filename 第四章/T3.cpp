#include<iostream>
#include<cstring>
using namespace std;

int main()
{
char a[20];
char b[20];
char c[45];
cout<<"输入名：";
cin.getline(a,20);
cout<<"输入姓：";
cin.getline(b,20);
cout<<"你的名字为：";
strcat(b,", ");
strcat(b,a);
strcat(c,b);
cout<<c;
return 0;
}
