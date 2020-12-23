#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    cin.tie(0);
    int size,count=1;
    cout<<"enter the string\n";
    string inp;
    cin>>inp;
    for(int i=0;i<inp.size();++i)
    {
        if(i==inp.size()-1)
        {
            cout<<count<<inp[i];
        }
        else if (inp[i]!=inp[i+1])
        {
            
            cout<<count<<inp[i];
            count=1;
        }
        else
        {
            count++;
        }
    }

    
}