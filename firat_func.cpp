// call by pointer
#include<iostream>
using namespace std;
int sum(int*a)
{
return *a;
}
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    cout<<sum(&a);
}
