#include<iostream>
#include<string>
using namespace std;
bool cool(string &misaka)
{
    int count=0,i=0;
    try{
   while(i<misaka.length())
   {
       switch (misaka[i])
       {
       case '{':count++;
                break;
       case '[':count++;
                break;
        case '(':count++;
                 break;
        case '}':count--;
                 break;
        case ']':count--;
                 break;
        case ')':count--;
                 break;                                       
       
       default: throw 404;
       }
       ++i;
   }
    }
    catch(int l)
    {
        cout<<"wrong input the statement should not consist of any other elemnet other than prantheses error "<<l<<endl;
        exit(0);
    }
      if(count==0)
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
