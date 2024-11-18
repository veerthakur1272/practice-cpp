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

