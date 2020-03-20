#include <iostream>
#include <cmath>
//CODEFORCES solution to Domino Piling problem
using namespace std;

int main(){
    int m,n;
    double r1,r2;

    cin>>m>>n;
    r1=(m*n)-1;
    r2=(r1/2);
    cout<<ceil(r2);
}
