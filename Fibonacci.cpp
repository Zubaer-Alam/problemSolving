//Fibonacci Series
#include<iostream>

using namespace std;
int main()
{
    int first=0,second=1,fibonacci;
    int n;
    cout<<"How many Fibonacci numbers do you want to print?";
    cin>>n;

    for (int i=0; i<n; i++)
    {
        if(i==0 || i==1)
            fibonacci = i;
        else
        {
            fibonacci = first+second;
            first = second;
            second = fibonacci;
        }
        cout<<fibonacci<<" ";
    }
}
