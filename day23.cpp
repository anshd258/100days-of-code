#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string ballot;
    cout<<"enter the string\n";
    cin>>ballot;
    int can[100]={0},impair=0;
    for(int i=0;ballot[i];i++)
    can[ballot[i]-97]++;
    for(int i=0;i<100;i++)
    {
        if(can[i]&1)
        impair++;
    }
    if(impair>1)
    cout<<"its not a permuting palinderom\n";
    else
    cout<<"its a permuting palindrom\n";
    system("pause");
    return 0;
}