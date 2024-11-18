/*
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
     cout<<"HCF are:"<<empt<<endl;
     cout<<"LCM are:"<<(smaller * larger)/(int)empt;
 }

*/
#include<iostream>
using namespace std;
 int main()
 {
     int smaller=7,larger=9;
     int empt=0;
     for(int i=larger;;i=larger+i){
        if(i%smaller==0 && i%larger==0){
            empt=i;
            break;
        }
     }
     cout<<empt;
 }


