#include<iostream>
using namespace std;
void Version(int);
struct CandyBar
{
	char Brand[60];
	double weight;
	int Calorie;
};

void Version(int i)
{
CandyBar snack[3]={
	{"kaka",22.4,100},
{"tut",1.34,120},
{"ifja",12.567,130}
};	
cout<<"Ʒ�ƣ�"<<snack[i].Brand<<endl;
cout<<"������"<<snack[i].weight<<endl;
cout<<"��·�"<<snack[i].Calorie<<endl;
}
int main()
{
int n=0;

Version(n);
return 0;
}

