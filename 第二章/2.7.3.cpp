#include<iostream>
using namespace std;
//����ԭ������ 
void FZ1();
void FZ2(string);
//������ 
int main()
{
FZ1();
FZ1(); 
string x="See how they run";
FZ2(x);
FZ2(x);
return 0;
}
//�û��Զ��庯�� 
void FZ1(){
	cout<<"Three blind mice\n";
}
void FZ2(string q){
	cout<<q<<endl;
}
