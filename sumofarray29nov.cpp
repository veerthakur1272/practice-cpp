#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int sum=0;
    for (int i=0;i<6;++i)
    {
        sum=sum+arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<sum;
}

