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
/*
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
*/

#include<iostream>
using namespace std;
void bp(string &str)
{
    int circle=0;
    int square=0;
    int curly=0;

    for(int i=0;i<str.length();++i)
    {
        char ch=str[i];
        if (ch=='(') circle++;
        else if (ch=='[') square++;
        else if (ch=='{') curly++;

        else if (ch==')'){
            if (circle==0)
            {
                return false;
            }
            circle--;
        }
        else if (ch=='}'){
            if (curly==0)
            {
                return false;
            }
            curly-;
        }

        else if(ch==']'){
            if (square==0)
            {
                return false;
            }
            square-;
        }
    }

    if (circle==0 && square==0 && curly==0)
    {
        return false;
    }
    return false;

}
int main ()
{
    string stream="([{}])";
    if(bp(str))
    {
        cout<<"balanced";
    }
    else{
        count<<"unbalanced";
    }
}
