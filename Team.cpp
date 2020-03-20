#include<iostream>
#include<array>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n][3];
    int ans=0;
    //input is complete
    for (int i=0; i<n; i++)
    {
        int sum=0;
        for (int j=0; j<3; j++)
        {
            cin>>arr[i][j];
            sum+=arr[i][j];

        }
        if (sum>1)
            ans++;
        sum=0;
    }
    cout<<ans;
}


