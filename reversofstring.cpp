/*
#include<iostream>
using namespace std;
void rev(string &str)
{
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
        char temp;
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
     string str="rukaht hgnis nahb reev";
     rev(str);
     cout<<str;
}
*/

#include<iostream>
using namespace std;
void pal(string &str)
{
   int start=0;
   int end=str.length()-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            cout<<"Not a palindrome";
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str="naman";
    if(pal(str))
    {
        cout<<"palindrome";
    }
}
