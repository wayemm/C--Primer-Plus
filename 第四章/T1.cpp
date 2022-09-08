#include<iostream>
int main()
{
	using namespace std;
	const int Size=20;
	char name[Size];
	char tname[Size];
	char grade='A';
	int age=0;
	cout<<"第一个名字：";
	cin.getline(name,Size);
	cout<<"第二个名字：";
	cin.getline(tname,Size);
	cout<<"成绩为：";
	cin>>grade;
	grade=grade+1;
	cout<<"你的年龄：";
	cin>>age;
	cout<<"名字："<<tname<<","<<name<<endl;
	cout<<"成绩："<<grade<<endl; 
	cout<<"年龄："<<age<<endl;
	return 0; 
}
