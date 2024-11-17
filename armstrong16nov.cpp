#include<iostream>
using namespace std;
int main (){
  int digit;
  int sum=0;
  int number=153;
  int copy=number;
  for(;number!=0;)
  {
    digit=number%10;
    sum=sum+digit*digit*digit;
    number=number/10;
  }
if(sum==copy)
    cout<<"armstrong";
else
    cout<<"not armstrong";
}
