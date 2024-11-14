#include <iostream>
using namespace std;
int main() {
   string day,category;
   int no_of_tickets;
   cout<<"enter 'weekend' or 'weekday' : ";
   cin>>day;
   if(day == "weekend"){
    cout<<"please select in the following category\n";
    cout<<"'recliner' \n'deluxe' \n'luxury'\n";
    cin>>category;

    if(category == "recliner"){
        cout<<"enter number of tickets:";
        cin>>no_of_tickets;
        cout<<"total:"<<(no_of_tickets*600);
    }
    else if (category == "luxury"){
        cout<<"enter number of tickets:";
        cin>>no_of_tickets;
        cout<<"total:"<<no_of_tickets*300;
    }
    else if (category == "deluxe"){
        cout<<"enter number of tickets:";
        cin>>no_of_tickets;
        cout<<"total:"<<no_of_tickets*200;
    }
    else{
        cout<<"invalid input";
    }
   }
     else{
        cout<<"invalid input";
    }


