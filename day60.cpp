#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool cool(string &misaka)
{
    stack<char> clues;
    int count=0,i=0;
    try{if(misaka.length()%2!=0)
        throw 303;
   while(i<misaka.length())
   {
     if(misaka[i]=='{'||misaka[i]=='['||misaka[i]=='(')
     {
         clues.push(misaka[i]);
     }
     if((misaka[i]=='}'&&clues.top()=='{')||(misaka[i]==']'&&clues.top()=='[')||(misaka[i]==')'&&clues.top()=='('))
     clues.pop();
     ++i;
   }
    }
      catch(int l)
    {
        cout<<"wrong input the statement should not consist of any other elemnet other than prantheses error "<<l<<endl;
        exit(0);
    }
   
   
      if(clues.size()==0)
   return true;
return false;
}
int main()
{
    cin.tie(0);
    string kiss;
    cout<<"enter the string character to find if balanced or not(only parantases allowed(j\n";
    cin>>kiss;
    if(cool(kiss))
        cout<<"balanced\n";
    else
        cout<<"not balances\n";
}
