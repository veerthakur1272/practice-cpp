/*
#include<iostream>
using namespace std;
int main(){
    int first=0;
    int second=1;
    int next;
    int n=5;
    cout<<first<<endl;
    for(int i=1; i<=n; ++i)
    {
        next=first+second;
        cout<<next<<endl;
        first=second;
        second=next;
    }
}
*/
#include<iostream>
using namespace std;
int main(){
        int next;
        int i=0;
        int t1=0;
        int t2=1;
        int n=5;
    while(i<=n)
      {
         if(i==0)
           {
             cout<<i<<endl;
           i++;
           continue;
           }
        if(i==1)
            {cout<<i<<endl;
            i++;
            continue;
            }

        next=t1+t2;
        t1=t2;
        t2=next;
        cout<<next<<endl;
        i++;


      }
}
