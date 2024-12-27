/*
#include<iostream>
using namespace std;
struct info
{
    string name;
    int roll;
    void display(info a)
    {
        cout<<a.name<<a.roll;
    }
};
int main(){
info p={"bhabhi",2};
p.display(p);
}
*/

/*
#include<iostream>
using namespace std;
struct info
{
    string name;
    int roll;
    void display()
    {
        cout<<name<<endl<<roll<<endl;
    }

};
int main(){
info p;
info c;
p.roll=1;
p.name="bhabhi1";
c.roll=2;
c.name="bhabhi2";
c.display();
cout<<"-------"<<endl;
p.display();

}
*/


#include<iostream>
using namespace std;
struct info
{
    string name;
    int roll;
    void display()
    {
        cout<<name<<roll;
    }
};
int main(){
info p;
info *p1=&p;
p.roll=12;
p.name="ashu";
p1->display();
}

