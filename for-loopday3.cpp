
/*#include <iostream>
using namespace std;

 int main(){

    for(int i=1;i<=10;i+5){
        cout<<i;
    }
 }
*/

/*#include <iostream>
using namespace std;

   int main(){
       for(;;)
        {
            cout<<"$";
        }
       }*/


 /* #include <iostream>
using namespace std;

   int main(){
       for(char i='A' ;i<='Z';i++)
        {
            cout<<i<<" ";
        }
       }
              (Day-4) (Date-6-Nov)

       #include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        int n;
        cout<<"Enter a number"<<endl;
        cin>>n;
        int sqr = n*n;
        if(sqr==25)
            continue;
        cout<<"Square of number"<<"/t"<<sqr<<endl;
    }
}
*/
/*#include<iostream>
using namespace std;
int main()
{
   int a=0;
   int b=1;
   for(int i=1;i<=10;i++)
   {
       a = a+b;
       b = a-b;
       //if(a==21)
       //break;
       cout<<a<<" ";
   }
}
                 (Day-5) (Date-7-Nov)
*/


/*
#include<iostream>
using namespace std;
int main ()
{
    for(int i=0;i<5;i++)
    {
       for (int j=0;j<5;j++)
          {
              cout<<"j"<<" ";
          }
          cout<<endl;
    }
}

*/



/*
#include<iostream>
using namespace std;
int main ()
{
    for(int i=0;i<5;i++)
    {
       for (int j=0;j<=i;j++)
          {
              cout<<"j"<<" ";
          }
          cout<<endl;
    }
}
*/



/*
#include<iostream>
using namespace std;
int main ()
{
    for(int i=0;i<5;i++)
    {
       for (int j=i;j<5;j++)
          {
              cout<<"*"<<" ";
          }
          cout<<endl;
    }
}
*/


/*
#include<iostream>
using namespace std;
int main ()
{
    for(int k=0;k<3;k++)
{
    for(int i=0;i<5;i++)
    {
       for (int j=i;j<5;j++)
          {
              cout<<"*"<<" ";
          }
          cout<<endl;
    }
    cout<<endl;
}
}
*/


/*
#include<iostream>
using namespace std;
int main ()
{
    for(int i=0;i<5;i++)
    {
        cout<<"*"<<endl;
    }
    for(int j=0;j<5;j++)
    {
        cout<<"* ";
    }
}

                    (Day-6) (Date-8-Nov)
*/


/*
#include<iostream>
using namespace std;
int main(){
 int a=0;
 int b=1;
 int ctr=0;
 while(ctr<10)
 //while(true)
 {
     while(a<=10)

 {
     a=a+b;
     b=a-b;
      if(a==21)
        continue;
     cout<<a<<endl;
     ctr++;
     if (ctr==10)
        break;
 }
 }
}
*/


/*
#include<iostream>
using namespace std;
 int main()
 {   int number;
     cout<<"enter number";
     cin>>number;
switch(number)
 {
 case 1:
    cout<<"veer";
    break;
 case 2:
    cout<<"ajay";
    break;
 case 3:
    cout<<"python";

 default:
     cout<<"invalid option";
    break;
 }
 }
 */



 /*
 #include<iostream>
using namespace std;
 int main()
 {   char alpha;
     cout<<"enter a b c ";
     cin>>alpha;
switch(alpha)
 {
  case a:
    cout<<"veer";
    break;
  case b:
    cout<<"ajay";
    break;
  case c:
    cout<<"python";

  default:
     cout<<"invalid option";
    break;
 }
 }
 */
 /*
 #include<iostream>
using namespace std;
 int main()
 { char choice;
 int number=10;
 int nummber1=11;
     switch(choice)
     {
t         case '+' :cout<<number+number1;
         break;

          case '-' :cout<<number+number1;
         break;

          case '*' :cout<<number+number1;
         break;

          case '/' :cout<<number+number1;
         break;

         default:cout<<"invalid option";
         break;

     }
 }
*/

/*
#include<iostream>
using namespace std;
 int main(){
     int num;
 cout<<"enter num. between 1 to 24"<<endl;
 switch(time/12){

       case 0:
           cout<<num<<"am";
           break;
        case 1:
            cout<<num<<"pm";
           break;
        default:
            cout<<"invalid input";
        break;
 }
 */

/*
 #include<iostream>
using namespace std;
 int main()
 {int choice,choice1;
  cout<<"Enter your destination 1.international 2.domestic";
  cin>>choice;
   switch(choice)
 {
     case 1:cout<<"Enter destination 1.us 2.uk";
     cin>>choice;
     switch(choice1)
     {
     case 1:cout<<"us prize is 100rs";
     break;
     case 2: cout<<"uk prize is 200rs";
     break;
     default: cout<<"invalid input";
     break;
     }
   break;
   default:cout<<"invalid input";
   break;


case 2:cout<<"Enter destination 1.Bhopal 2. Indore";
    cin>>choice1;
    switch(choice1)
    {
        case 1:cout<<"Bhopal prize is 300rs";
        break;
        case 2:cout<<"Indore prize is 400rs";
        break;
        default: cout<<"invalid input";
     break;
    }
   break;
   default:cout<<"invalid input";
   break;
}
 }
 /*


 #include<iostream>
using namespace std;
 int main()

 { int number=2;
 int i=1;
 skip:
     cout<<number*1;
     i++;
     if(i<=10)

     {
         goto skip;
     }
 }

{int n=2;
  for(int i=1;i<=10;++i){
   cout<<n*i<<endl;
}
}
*/

/*{int i;
    int sum=0;
  for(int i=1;i<=10;++i){
   sum=sum+i;
}
cout<<sum;
}
*/
/*
#include<iostream>
using namespace std;
 int main(){
 int i=1;
 int number=2;
 while(i<=10)
    {
        cout<<number*i<<endl;
        i++;
    }
 }
 */

 /*
 #include<iostream>
using namespace std;
 int main(){
 int i=1;
 while(i<=10)
    {
        cout<<i<<endl;
        i++;
    }
 }
*/
