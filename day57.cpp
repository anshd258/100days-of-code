#include <iostream>
using std::cout;
using std::cin;


void call(int*brr,int x)
{
    int profit=0;
    for (int i = 1; i < x; ++i)
    {
        if(brr[i]>brr[i-1])
        {
            cout<<"buying at day"<<i-1<<"\n";
            cout<<"selling st day "<<i<<"\n";
            profit+=brr[i]-brr[i-1];
        }


    }
    if (profit==0)
    {
        cout<<"dont buy this stock low chancesof profit\n";
    }
    else
    {
          cout<<"maxprofit can be avilled form this stock\n"<<profit;
    
    }
    

}
int main()
{
    cin.tie(0);
  int size;
  cout<<"enter the no of sock values you want to enter\n";
  cin>>size;
  int *arr=new int[size];
  cout<<"enter the values\n";
  for (int i = 0; i < size; ++i)
  {
      cin>>arr[i];

  }

  call(arr,size);
  
	
	return 0;
	
}