// instr2.cpp -- reading more than one word with getline
#include <iostream>
#include<string>
int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    cin>>name;  // reads through newline
    //getline(cin,name);
    cout << "Enter your favorite dessert:\n";
    cin>>dessert;
    //getline(cin,dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    return 0; 
}

