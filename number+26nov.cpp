/*
#include<iostream>
using namespace std;
int main(){
  int term=0;
  int n=5;
  for(int i=1;i<=n;++i){
   term=term*10+1;
   cout<<term<<" ";
}
}
*/

#include<iostream>
using namespace std;
int main(){
  int term=0;
  int n=5;
  int sum=0;
  for(int i=1;i<=n;i++){
   term=term*10+1;
   cout<<term<<"\t";
   sum=sum+term;
}
 cout<<sum;
}
