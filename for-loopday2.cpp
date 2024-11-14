//#include <iostream>
//using namespace std;
//int main()
//  int num;
// cout<<"enter num:";
//cin>>num;

//for(int i=1 ; 1<=10 ; 1++){
//13 x 1 =13
//  cout<<num<<" x "<<i<<" ="<<num*i<<endl;

//}



#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"enter range:";
    cin>>n;

    for (int i=1; i<=n; i++){
        sum = sum + i;
        if(i==n){
            cout<<i<<"=";
        }
        else{
            cout<<i<<"+";
        }
    }
    cout<<"sum:"<<sum;
}
