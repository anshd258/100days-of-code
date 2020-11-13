#include<iostream>
#include<string>
using namespace std;
int main()
{
    cin.tie(0);
    int count=0;
    string _str;
    cout<<"enter the string consisting solely of (, ), and *.\n ";
    cin>>_str;
    int size=_str.size(),ping=0;
    for(int i=0;i<size;++i)
    {
    if(_str[i]=='*')


    {
        ping++;
    for(int j=0;j<size;++j)
    {
        for(int p=j+1;p<size;++p)
        {
            if (_str[j]=='(')
        {
            if(_str[p]==')')
        count++;
        }
        }
    }
        


    }
    }
    if(ping<1)
    {
        cout<<"no * found\n";
    }
    
    
    if(count>=1)
    cout<<"paranthese balanced\n";
    else
    {
     cout<<"not balanced\n";

    }
    
    system ("pause");
    return 0;
    

}
