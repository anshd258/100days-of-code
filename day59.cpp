#include<iostream>
#include<string>
#include<vector>

using namespace std;
typedef unsigned long long int pp;


bool valid(string &hill)
{ 
    if(hill.length()>3) 
    return false;
    if(hill.front()=='0'&&hill.length()>1)
    return false;
    pp call=stoll(hill,nullptr,10);
    return call>=0&&call<=255;
}
    
//function which converts sub strings
void all_poss(string &kill)
{
    
    vector<string> puss;
    for(int i=1;i<=3;++i)
    {
        string first=kill.substr(0,i);

        {
            for(int j=1;j<=3;++j)
            {
                string two=kill.substr(i,j);
                if(valid(two))
                
                {
                    for(int k=1;k<=3;++k)
                    {
                        string three=kill.substr(i+j,k);
                        string four=kill.substr(i+j+k);
                        if(valid(three)&&valid(four))
                         
                        {
                            puss.emplace_back(first+"."+two+"."+three+"."+four);

                        }
                    }
                }
            }

        }
    }
    cout<<"all possible ip addresses\n";
    for(auto i:puss)
   cout<<i<<"\n";
}
int main()
{
    cin.tie(0);
    cout<<"entered element's should be greater the '4' and less than equal to '12'\n ";
    string pill;
    cin>>pill;
    all_poss(pill);
}
 