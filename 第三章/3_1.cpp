//��һ����Ҫ���û���һ����������Լ�����ߣ���λΪӢ�磩Ȼ�����ת��ΪӢ�ߺ�Ӣ�硣
//�ó���ʹ���»����ַ���ָʾ����λ�á�
//ʹ��const���ų�������ʾת������
#include<iostream>
using namespace std;
int main()
{
	const float foot=2.54;   //һӢ�����2.54cm 
	const int inch=12;  //һӢ�ߵ���12Ӣ�� 
	cout<<"�����������ߣ�cm��:____\b\b\b\b ";
	int height;
	cin>>height;
	double ft,ih;
	ft=height/2.54;
	ih=ft/12;
	cout<<"your foot is "<<ft<<endl
	<<"your inch is "<<ih<<endl;
	return 0;
	
 } 
