#include<iostream>
int main()
{
	using namespace std;
	const int Size=20;
	char name[Size];
	char tname[Size];
	char grade='A';
	int age=0;
	cout<<"��һ�����֣�";
	cin.getline(name,Size);
	cout<<"�ڶ������֣�";
	cin.getline(tname,Size);
	cout<<"�ɼ�Ϊ��";
	cin>>grade;
	grade=grade+1;
	cout<<"������䣺";
	cin>>age;
	cout<<"���֣�"<<tname<<","<<name<<endl;
	cout<<"�ɼ���"<<grade<<endl; 
	cout<<"���䣺"<<age<<endl;
	return 0; 
}
