#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int c=0;
    cin>>n>>k;
    int a[n];



    for (int i=1; i<=n; i++)
        cin>>a[i];


    for (int i=1; i<=n; i++)
    {
        if ( a[i]>=a[k] && (a[k]!=0 || a[i]!=0))
            c++;
    }
    cout<<c;
}
