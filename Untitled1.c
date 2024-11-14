# include <iostream>
using namespace std;

int main in () {
    int amount;
    cout<<"enter amount:";
    cin>>amount;
    if(amount<=100){
        cout<<"no discount/n";
        cout<<"u have to pay :"<<amount<<endl;
    }
    else if (amount>100 && amount<=500){
        cout<<"u r eligible for 10% discount/n";
        cout<<"discount:"<amount*(10.0/100);
        cout<<"\nu have to pay :"<amount-amount*(10.0/100)<endl;
    }
    }
