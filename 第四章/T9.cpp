#include<iostream>
using namespace std;
void Version(int);
struct CandyBar
{
	char Brand[80];
	double weight;
	int Calorie;
};

int main()
{
CandyBar * po=new CandyBar[3];
cin.getline(po->Brand,80);
cout<<"Ʒ�ƣ�"<<po->Brand<<endl;
cin>>po->weight;
cout<<"������"<<po->weight<<endl;
cin>>po->Calorie;
cout<<"��·�"<<po->Calorie<<endl;

return 0;
}
//Ʒ�ƣ�kaka
//������22.4
//��·�100

