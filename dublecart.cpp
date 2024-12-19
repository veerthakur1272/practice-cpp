/*
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,1,3,2};
    for (int i=0;i<5;++i)
    {
        bool dup=false;
        for (int j=i+1;j<5;++j)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                dup=true;
                arr[j]=-1;
            }
        }
        if(dup)
        {
            cout<<arr[i];
        }
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,1,3,2,4};
    for (int i=0;i<6;++i)
    {
        bool dup=false;
        for (int j=i+1;j<6;++j)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                dup=true;
                arr[j]=-1;
            }
        }
        if(!dup && arr[i]!=-1)
        {
            cout<<arr[i];
        }
    }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,4,5};
    for (int i=0;i<5;++i)
    {
        if(arr[i]==5)
        {
            cout<<"found"<<endl;
            return 0;
            //break;
        }
       // else{
         //   cout<<"not found"<<endl;
        //}
    }
    cout<<"not found";
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,2};
    for (int i=0;i<5;++i)
    {
        int counter=1;
        for (int j=i+1;j<5;++j)
        {
            if(arr[i]==arr[j])
                {
                    counter++;
                    arr[j]=-1;
                }


         }

    }
            if(arr[i]=-1)
            cout<<"value of"<<arr[]<<"="<<counter<<endl;
}
*/
/*
#include<iostream>
using namespace std ;
int main()
{
    int arr[]={1,2,1,2,1};
    int n=5;
    for (int i=0;i<n/2;++i)
    {
        int temp;
        temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
    //if()
        for (int i=0;i<n;++i)
    {
        cout<<arr[i];
    }
}
*/
          //Q.1 remove all ocurrence   keep fist occurence ?

/*
#include<iostream>
using namespace std ;
int main()
{
    int arr[]={1,2,1,2,2};
    int n=5;
    for (int i=0;i<n/2;++i)
    {
        if (arr[i]!=arr[n-i-1])
        {
            cout<<"not pallindrome";
            return 0;
        }
        cout<<"pallindrome";
    }
}
*/

/*
#include<iostream>
using namespace std ;
int main()
{
    int arr[]={1,2,1,3,4};
    int j=0;
    for (int i=0;i<5;++i)
{
    if (arr[i]!=1)
    {
        arr[j]=arr[i];
        j++;
    }
}
     for (int i=0;i<j;++i)
     {
            cout<<arr[i];
     }
}
*/

/*
#include<iostream>
using namespace std;
int main(){
   int arr[]={1, 2, 1, 2, 4};
    for (int i=0;i<5;++i)
    {
        for (int j=i+1;j<5;++j)
        {
            if(arr[i]==arr[j])
                arr[j]=-1;
        }
    }
    for (int i=0;i<5;++i)
    {
        if (arr[i]!=-1)
        {
            cout<<arr[i];
        }
    }
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    for (int i=0;i<4;++i)
    {
        if (arr[i]>arr[i+1])
        {
            cout<<"not ascending";
            return 0;
        }
    }
    cout<<"ascending";
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,0,30,0,50};
    int j=0;
    for (int i=0;i<5;++i)
    {
        if (arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<5;++i)
    {
        arr[j]=0;
        j++;
    }
    for (int i=0;i<5;++i)
    {
        cout<<arr[i]<<endl;
    }
}
*/
               /*single missing number*/
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,12,13,15,16};
    for (int i=0;i<5;++i)
    {
        if(arr[i+1]-arr[i]>1)
        {
            cout<<arr[i]+1<<endl;
        }
    }
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
     int arr[]={10,20,13,15,16};
     for (int i=0;i<5;++i)
     {
         if (arr[i+1];arr[i]>1)
         {
             for (int j=arr[i]+1;j<arr[i+1];++j)
             {
                 cout<<j<<endl;
             }
         }
     }
}
*/
#include<iostream>
using namespace std;
int main()
{
    int k=1;
    int arr[]={10,20,30,40,50};
    for (int i=0;i<5;++i)
        {
            int temp=0;
            for (int j=i+1;j<5;++j)
        {
                if(arr[j]>arr[i])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }
        }
        {
            cout<<arr[k-1];
        }
}

