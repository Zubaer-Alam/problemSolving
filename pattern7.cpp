#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;//5

    for(int r=n;r>0;r--){
        for(int c=0;c<n-r;c++){
            cout<<" ";
        }
        for (int c=1;c<=r;c++){
            cout<<c;
        }
        cout<<endl;
    }
}

