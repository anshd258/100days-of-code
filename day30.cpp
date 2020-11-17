#include<iostream>
#include<string>

using namespace std;
int main()
{
    cin.tie(0);
    int count=0;
    string input,main;
    cout<<"enter the string\n";
    cin>>main;
    cout<<"enter the (change to) string\n";
    cin>>input;
    int size=input.size();
    for(int i=0;i<size;++i)
    {
        if(input[i]!=main[i])
        count++;
    }
    if(count==0)
    cout<<"edit distance is zero \n";
    else
        cout<<"edit distance is :"<<count<<"\n";

    system("pause");
    return 0;

}