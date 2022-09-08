  #include<iostream>
using namespace std;
int BMI_C(double,double); 
int main()
{
	const int F=12;   //一英尺等于12英寸 
	const double Ih=0.0254;   //一英寸等于0.0254米 
	const double Wt=2.2;   //1kg=2.2磅 
cout<<"Please enter your height:";   //几英尺几英寸 
int foot,inch;
cin>>foot>>inch;
cout<<"Please enter your weight: ";   //以镑为单位为 
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
