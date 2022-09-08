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
cout<<"品牌："<<po->Brand<<endl;
cin>>po->weight;
cout<<"重量："<<po->weight<<endl;
cin>>po->Calorie;
cout<<"卡路里："<<po->Calorie<<endl;

return 0;
}
//品牌：kaka
//重量：22.4
//卡路里：100

