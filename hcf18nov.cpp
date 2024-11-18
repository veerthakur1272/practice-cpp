#include<iostream>
using namespace std;
 int main()
 {
     int smaller=4,larger=8;
     int empt=0;
     for(int i=1;i<=smaller;++i){
        if(smaller%i==0 && larger%i==0){
            empt=i;
        }
     }
     cout<<empt;
 }
