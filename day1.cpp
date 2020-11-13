 #include<iostream>
 using namespace std;
 int main()
 {
     int a[4] {17,28,12,13};
     int k;
     cout<<"enter the value";
     cin>>k;
    for(int i=0;i<4;i++)
     {for(int j=0;j<4;j++)
     { if(a[i]==a[j])
     continue;
     if (a[i]+a[j]==k)
     cout<<"true";
     else 
    cout<<"no match found";
     }
     }
     return 0;
}