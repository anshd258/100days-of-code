#include<iostream>
#include<algorithm>
#include<valarray>
#include<cmath>
using namespace std;
int main()
{
    cin.tie(0);
    int lsize;
    cout<<"enter the size of array\n";
    cin>>lsize;
    valarray<float> var (lsize);
    for (auto &x: var)cout << x << " "; 
    cout<<"enter the elements of array\n";
    for(auto &i:var)
    {
        cin>>i;
    }

    var=var.apply([](float x){return x=pow(x,2);});
        sort(begin(var),end(var));
     for (auto &x: var)cout << x << " "; 
     cout<<endl;

}