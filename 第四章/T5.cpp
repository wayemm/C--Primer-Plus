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
cout<<"品牌："<<snack.Brand<<endl;
cout<<"重量："<<snack.weigth.B_weight<<endl;
cout<<"卡路里："<<snack.Calorie<<endl;
return 0;
}
