#include<iostream>
#include<string>
struct Will
{
//	string name;   结构体中不可以使用string 类型 
    char name[50];
	double zhi;
	double weight;
};
int main()
{
	using namespace std;
	Will one;
	cout<<"请输入披萨的名称：";
	cin.getline(one.name,50);
	cout<<"披萨直径："; 
	cin>>one.zhi;
	cout<<"披萨重量：";
	cin>>one.weight;
	cout<<one.name
	<<endl<<one.weight<<endl
	<<one.zhi;
	return 0;
}

