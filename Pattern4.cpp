#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;//3

    for (int row = n; row>0; row--){
        for(int col = 0; col<row;col++){
            char ch = col+65;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
