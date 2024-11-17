/*
#include<iostream>
using namespace std;
 int main(){
  int number;
     cout<<"Enter number";
     cin>>number;}
 {
 for(int i=1;i<=6;++i)
    if (6%i==0){
        cout<<i<<endl;
    }
 }
*/
     //prime number//
/*
#include<iostream>
using namespace std;
 int main()
 {
     int nm,fact=0;
     cout<<"Enter no.:";
     cin>>nm;
     for(int i=1;i<=nm;++i){
         if(nm%i==0){
            fact++;
}
}
if (fact==2){
    cout<<"Prime no."<<endl;
}
else{
    cout<<"Not a Prime No."<<endl;
}
}
*/
      //prfact number//

#include<iostream>
using namespace std;
 int main()
 {
     int nm,fact=0;
     cout<<"Enter no.:";
     cin>>nm;
     for(int i=1;i<=nm;++i){
         if(nm%i==0){
            fact=fact+i;
}
}
if (fact==2){
    cout<<"Prefact no."<<endl;
}
else{
    cout<<"Not a Prefact No."<<endl;
}
}
