#include<iostream>
using namespace std;
//函数原型声明 
void FZ1();
void FZ2(string);
//主函数 
int main()
{
FZ1();
FZ1(); 
string x="See how they run";
FZ2(x);
FZ2(x);
return 0;
}
//用户自定义函数 
void FZ1(){
	cout<<"Three blind mice\n";
}
void FZ2(string q){
	cout<<q<<endl;
}
