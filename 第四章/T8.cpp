#include<iostream>
#include<string>
struct Will
{
//	string name;   �ṹ���в�����ʹ��string ���� 
    char name[50];
	double zhi;
	double weight;
};
int main()
{
	using namespace std;
	Will *one=new Will;
	cout<<"����ֱ����"; 
	cin>>one->zhi;
	cin.get();  //�������ַ� 
	cout<<"���������������ƣ�";
	cin.getline(one->name,50);
	cout<<"����������";
	cin>>one->weight;
	cout<<one->name
	<<endl<<one->weight<<endl
	<<one->zhi;
	delete []one;
	return 0;
}


// ����ֱ����22
//���������������ƣ�����������


