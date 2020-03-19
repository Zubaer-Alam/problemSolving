//CODEFORCES problem 118A.
//check the ASCII table.
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//function to find out if a character is a Consonant.
bool isConsonant(char ch)
{
    if( ch=='a'||ch=='e'||ch=='i'||
        ch=='o'||ch=='u'||ch=='y'||
        ch=='A'||ch=='E'||ch=='I'||
        ch=='O'||ch=='U'||ch=='Y' )
        return false;
    else
        return true;
}

int main()
{
    string x;
    string s;
    cin>>s;

    for (int i=0; i<s.size(); i++)
    {
        if (isConsonant(s[i]))
        {
            if((int)s[i]<97 && (int)s[i]>64)
                x=x+'.'+(char)((int)s[i]+32);//Typecasting
            else
                x=x+'.'+s[i];
        }
    }
    cout<<x;
}
