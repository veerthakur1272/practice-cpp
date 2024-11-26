/*
#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    { for(int c=1;c<=5;c++)
    {
        if(c<=r)
        {
            cout<<char(r+64);
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
    }

}
*/
/*
#include<iostream>
using namespace std;
int main()
{ int a;
    for(int r=1;r<=5;++r)
    { a=r;
        for( int c=1;c<=5;++c){
                if(c<=r){
          cout<<a;
          a++;
          }
          else
            cout<<" ";
        }
        cout<<endl;
    }
}
*/

#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int d=2;
    int n=5;
    int term;

        for(int i=0; i<=n;++i)
        {
            term=a+i*d;
            cout<<term;
        }

}



