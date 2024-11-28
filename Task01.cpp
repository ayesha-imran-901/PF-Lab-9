#include<iostream>
using namespace std;
int main()
{
    int arr[4][4];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[0][3]=4;
    arr[1][0]=5;
    arr[1][1]=6;
    arr[1][2]=7;
    arr[1][3]=8;
    arr[2][0]=8;
    arr[2][1]=7;
    arr[2][2]=6;
    arr[2][3]=5;
    arr[3][0]=4;
    arr[3][1]=3;
    arr[3][2]=2;
    arr[3][3]=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}