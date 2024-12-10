
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
