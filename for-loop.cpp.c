#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        int n;
        cout<<"Enter a number"<<endl;
        cin>>n;
        int sqr = n*n;
        if(sqr==25)
            continue;
        cout<<"Square of number"<<"/t"<<sqr<<endl;
    }
}
