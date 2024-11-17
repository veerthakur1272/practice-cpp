#include<iostream>
using namespace std;
int main (){
    int number=121;
    int  number1 = number;
    int rv=0;
for(;number!=0;){
    rv=rv*10+number%10;
    number=number/10;
}
if (number1==rv)
{
    cout<<"this is palindrome:";
}
else

{
    cout<<"this is not palindrome:";
}
}
