#include <iostream>

using namespace std;

int add(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}

int subtract(int x,int y)
{
    int sub;
    sub=x-y;
    return sub;
}

void funcsaysHello(int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"I am a function too";
        cout<<endl;
    }
}
void duplicate(int& x,int& y)
{
    cout<<"ax2="<<(x*=2);
    cout<<endl;
    cout<<"bx3="<<(y*=3);
    cout<<endl;
}
int main()
{
    char answer;
    int n,c,a,b;

    cout<<"Enter a and b"<<"n";
    cin>>a>>b;

    cout<<"How many times you want to see functions?"<<"/n";
    cin>>n;

    c=add(a,b);
    cout<<"sum:"<<c;
    cout<<endl;

    c=subtract(a,b);
    cout<<"Subtraction:"<<c;
    cout<<endl;

    funcsaysHello(n);//prints something based on n.
    duplicate(a,b);//multiplies value of a and b with 2 and 3 respectively.

    return 99;
}
