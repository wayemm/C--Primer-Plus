#include<iostream>
#include<cstring>
using namespace std;

int main()
{
char a[20];
char b[20];
char c[45];
cout<<"��������";
cin.getline(a,20);
cout<<"�����գ�";
cin.getline(b,20);
cout<<"�������Ϊ��";
strcat(b,", ");
strcat(b,a);
strcat(c,b);
cout<<c;
return 0;
}
