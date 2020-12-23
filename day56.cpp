#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using std::cout;
using std::cin;
using std::sort;
using std::vector;
using std::stack;

class terminal
{

    public:
    int begin,end;
  
};
  bool perm(terminal i1,terminal i2)
    {
        return(i1.begin<i2.begin);

    }
void merg(vector<terminal>arr)
{
    sort (arr.begin(),arr.end(),perm);
    stack<terminal> sour;
    for(int i=0;i<arr.size();++i)
    {
        if(sour.empty()||arr[i].begin>=sour.top().end)
        {
            sour.push(arr[i]);
        }
        if(sour.top().end<arr[i].end)
        {
            sour.top().end=arr[i].end;

        }
    }
    
    while(!sour.empty())
    {
    cout<<"{"<<sour.top().begin<<","<<sour.top().end<<"},";
    sour.pop();
}
}
int main()
{
    cin.tie(0);
    int size;
    cout<<"enter the size of elements you want to enter\n";
    cin>>size;
    vector<terminal> arr(size);
    for(int i=0;i<size;++i)
    {
        cout<<"enter the begining and the end element\n";
        cin>>arr[i].begin>>arr[i].end;
    }
    merg(arr);
    return 0;
}