/*
#include<iostream>
using namespace std;
int main (){
   for (int i=1;i<=5;i++){
    cout<<i<<" ";
   }
}
*/
/*
#include<iostream>
using namespace std;
int main (){
   for (int i=5;i>=1;i--){
    cout<<i<<" ";
   }
}
*/

#include<iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5};
    int n=sizeof (arr) /sizeof(arr[0]);

    cout<<"reverse array:";
    for (int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

}

