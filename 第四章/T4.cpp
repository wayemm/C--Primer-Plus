#include<iostream>
#include<string>

using namespace std;

int main()
{
 string name;
 string xing;
 string quanming;
 cout<<"��������";
 getline(cin,name);
 cout<<"�����գ�";
 getline(cin,xing);
 cout<<"�������Ϊ��";
 quanming=xing+", "+name;
 cout<<quanming;
 return 0;
 
}
