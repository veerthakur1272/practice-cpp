/*
  ARRAY
  DATA STRUCTURE
  SIMILAR TYPE OF DATA STORE
  IT IS formed in CONTIGOUS MEMORY (ADJACENT) LOCATION
  WHY INDEXING OF ARRAY START FROM ZERO ?
  INSERTION EXCERTION UPDATION DECLARETION
  ARRAY STORE DATA & SAVE IN OBJECT FROM {1,2,3,4,5,}
  INT ARRAY [4]={1,2,3,4,5} STATIC INITILIZATION
*/
#include<iostream>
using namespace std;
int main()
{
    //int arr[]={1,2,3,4,5};
    //cout<<arr[3];

   // int arr[3]={1,2,3,4};
   // cout<<arr[9];

   int n;
   cout<<"enter the size of array";
   cin>>n;
   int b[n];

   for(int i=0;i<=n;++i)
   {
       cin>>b[i];
   }

    for(int i=0;i<=n;++i)
   {
       cin>>b[i];
   }

}


    //If you diplay more in less intilzaer then it return error -in static declaration
    //In dynomic it either show o or garboge in non-fixed size array
