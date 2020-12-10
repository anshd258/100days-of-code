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
    int size=_str.length(),ping=0;
    for(int i=0;i<size;++i)
    {
    if(_str[i]=='*')
    {
        ping++;
        if(i>1)
        {

        
        if(_str[i-2]=='(')
        {
            if(_str[i-1]==')')
            count++;
        }
        }
        if(_str[i-1]=='(')
        {
            if(_str[i+1]==')')
            count++;
        }
    }
    }
    if(ping<1)
    cout<<"* not found \n";
    

  
    if(count>=1)
    cout<<"paranthesis balanced\n";
    else
    {
     cout<<"parenthesis not balanced\n";

    }
    
    system ("pause");
    return 0;
    

}
