#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n,row,col;
    cin>>n;//n=3

    for(row=0;row<n+1;row++){
        for (col=1;col<row+1;col++){
            cout<<(col)<<" ";
        }
        cout<<endl;
    }
}

