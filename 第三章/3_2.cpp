  #include<iostream>
using namespace std;
int BMI_C(double,double); 
int main()
{
	const int F=12;   //һӢ�ߵ���12Ӣ�� 
	const double Ih=0.0254;   //һӢ�����0.0254�� 
	const double Wt=2.2;   //1kg=2.2�� 
cout<<"Please enter your height:";   //��Ӣ�߼�Ӣ�� 
int foot,inch;
cin>>foot>>inch;
cout<<"Please enter your weight: ";   //�԰�Ϊ��λΪ 
int weight;
cin>>weight; 
double meter,weigh;
 meter=(foot*F+inch)*Ih;
 weigh=weight/Wt;
 cout<<BMI_C(meter,weigh);
 return 0;
}
int BMI_C(double a,double b)
{
	float BMI=b/(a*a);
	return BMI;
} 
