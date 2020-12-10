#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int _int;
    bitset<32> bit1;
    cout<<"enter the number\n";
    cin>>_int;
    int i=0;
    while(_int>0)
    {bit1[i]=_int%2;_int=_int/2;std::cout<<bit1[i];i++;}
    int j=0;
    cout<<"\n";
bit1.flip();
for(int j=0;j<i;j++)
cout<<bit1[j];
system("pause");
    return 0;

}
