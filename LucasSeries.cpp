#include <iostream>

using namespace std;

int main()
{
    int first=2,second=1,lucas,n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        lucas = first+second;
        cout<<lucas;
        first = second;
        second = lucas;
    }

}
