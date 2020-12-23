#include<iostream>
using namespace std;
int main()
{
    cin.tie(0);
    int x,y,b;
    cout<<"enter the 1st value\n";
    cin>>x;
    cout<<"enter the 2nd value\n";
    cin>>y;
    cout<<"enter the operand value \n";
    cin>>b;
    (b==0)?(cout<<y):(cout<<x);
    return 0;
}