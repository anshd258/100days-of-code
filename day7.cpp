#include<iostream>
using namespace std;
int main()
{

    int inter = 0;
    int arr[13] = { 0,1,0,1,0,1,0,1,0,1,0,1,0 };
    //array 1
    int brr[13] = { 0,0,1,1,0,0,1,1,0,0,1,0,0 };
    //arrray 2
    int n = sizeof(arr) / sizeof(arr[0]);
    // calculating size off array
    cout << n << endl;

    for (int i = 0; i < n; i++)
        //1st for loop
    {
        for (int z = 0; z < n; z++)
            //2nd for loop
            if (arr[i] < brr[z] && arr[i + 1] > brr[z + 1] || arr[i] > brr[z] && arr[i + 1] <brr[z + 1])
                //main logical algoritham
            {
                inter++;//increament  happens when statement becomes true
                break;//break statement
            }
    }
    cout << "total no of inter sections" << inter/2 << endl;
    //printing the total no of intersection
    system("pause");
    return 0;
}