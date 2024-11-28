#include<iostream>
using namespace std;
int main()
{int sum=0;
    int arr[3][3];
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             cout<<"Enter elements["<<i<<"]["<<j<<"]:";
            cin>>arr[i][j];   
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             sum+=arr[i][j];
        }
    }
     cout<<"Sum of all elements="<<sum<<endl;
    return 0;
}