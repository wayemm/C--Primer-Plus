#include<iostream>
using namespace std;
struct CandyBar
{
	string Brand;
	union weight{
		double B_weight;
		int A_weight;
	}weigth;
	int Calorie;
};
int main()
{
CandyBar snack={
	"Mocha Munch",
	23.5,
	350
};
cout<<"Ʒ�ƣ�"<<snack.Brand<<endl;
cout<<"������"<<snack.weigth.B_weight<<endl;
cout<<"��·�"<<snack.Calorie<<endl;
return 0;
}
