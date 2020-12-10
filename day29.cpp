#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0);
    cout<<"enter the number to find the gray code\n";
    int numb;
    cin>>numb;
    int len = (log2(numb)) + 1;
    for (int i = 0; i <= numb; i++) 
    {
        bitset<32> _bit(i);
        string sub = _bit.to_string();
        cout << sub.substr(32 - len) << " ";
    }
    system("pause");
    return 0;
}