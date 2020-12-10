#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int count=0,countb=0,test=0,i,j;
string a,b;
cout<<"enter the first string"<<endl;
cin>>a;
//1st string
cout<<"enter the second string "<<endl;
//2nd string
cin>>b;
int size=a.size();
int size2=b.size();
//calculating size of string entered
if(size != size2)
{
    cout << "size is not same" << endl;
    system("pause");
    exit(1);
}
//if size is not same then this message will print and program terminate early



for(i=0;i<size;i++)
{
   for( j=0;j<size;j++)
   {
       if(i==j)
//this statement so it ain't over laap the same character    
       break;
       if(a[i]==a[j])
      count++;
//if character repeat in string count and countb will+
       if(b[i]==b[j])
    countb++;

   }
   
}
if(size==size2&&count==countb)
{
    cout<<"true"<<endl;
}
else
cout<<"false"<<endl;
//true will output if all the character's are mapping from one string s1 to another s2 one-on-one
system("pause");
return 0;
}