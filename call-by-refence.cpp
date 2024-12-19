//call by reference
#include<iostream>
using namespace std;
int sum(int &b)
{
    return b;
}
int main()
{
    int a;
    cout<<"enter number";
    cin>>a;
    cout<<sum(a);
}
